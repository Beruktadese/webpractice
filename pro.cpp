#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>  // For atoi()

using namespace std;

class Book {
public:
    string title;
    string author;
    string ISBN;
    int publicationYear;

    Book(string t, string a, string isbn, int year)
        : title(t), author(a), ISBN(isbn), publicationYear(year) {}
};

class BookManager {
private:
    vector<Book> books;
    const string filename;

    void saveToFile() {
        ofstream file(filename.c_str());
        for (size_t i = 0; i < books.size(); ++i) {
            const Book& book = books[i];
            file << book.title << "," 
                 << book.author << ","
                 << book.ISBN << ","
                 << book.publicationYear << "\n";
        }
        file.close();
    }

    void loadFromFile() {
        ifstream file(filename.c_str());
        if (!file.is_open()) return;

        string line;
        while (getline(file, line)) {
            size_t pos = 0;
            vector<string> tokens;

            for (int i = 0; i < 4; ++i) {
                pos = line.find(",");
                if (pos == string::npos) break;
                tokens.push_back(line.substr(0, pos));
                line.erase(0, pos + 1);
            }
            tokens.push_back(line);

            if (tokens.size() == 4) {
                books.push_back(Book(tokens[0], tokens[1], tokens[2], atoi(tokens[3].c_str())));
            }
        }
        file.close();
    }

public:
    BookManager() : filename("library.txt") {
        loadFromFile();
    }

    ~BookManager() {
        saveToFile();
    }

    void addBook() {
        string title, author, ISBN;
        int year;

        cout << "\nEnter Book Details:\n";
        cout << "Title: ";
        cin.ignore();
        getline(cin, title);

        cout << "Author: ";
        getline(cin, author);

        cout << "ISBN: ";
        getline(cin, ISBN);

        cout << "Publication Year: ";
        while (!(cin >> year)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number: ";
        }

        books.push_back(Book(title, author, ISBN, year));
        cout << "Book added successfully!\n";
    }

    void searchBooks() {
        string query;
        cout << "\nEnter search term (title/author/ISBN): ";
        cin.ignore();
        getline(cin, query);

        transform(query.begin(), query.end(), query.begin(), ::tolower);

        vector<Book> results;
        for (size_t i = 0; i < books.size(); ++i) {
            const Book& book = books[i];
            string title = book.title;
            string author = book.author;
            string isbn = book.ISBN;

            transform(title.begin(), title.end(), title.begin(), ::tolower);
            transform(author.begin(), author.end(), author.begin(), ::tolower);
            transform(isbn.begin(), isbn.end(), isbn.begin(), ::tolower);

            if (title.find(query) != string::npos ||
                author.find(query) != string::npos ||
                isbn.find(query) != string::npos) {
                results.push_back(book);
            }
        }

        if (results.empty()) {
            cout << "No matching books found.\n";
            return;
        }

        cout << "\nSearch Results (" << results.size() << "):\n";
        for (size_t i = 0; i < results.size(); ++i) {
            const Book& book = results[i];
            cout << "Title: " << book.title << "\n"
                 << "Author: " << book.author << "\n"
                 << "ISBN: " << book.ISBN << "\n"
                 << "Year: " << book.publicationYear << "\n\n";
        }
    }

    void displayAllBooks() {
        if (books.empty()) {
            cout << "The library is empty.\n";
            return;
        }

        cout << "\nAll Books (" << books.size() << "):\n";
        for (size_t i = 0; i < books.size(); ++i) {
            const Book& book = books[i];
            cout << "Title: " << book.title << "\n"
                 << "Author: " << book.author << "\n"
                 << "ISBN: " << book.ISBN << "\n"
                 << "Year: " << book.publicationYear << "\n\n";
        }
    }
};

void displayMenu() {
    cout << "\nLibrary Management System\n";
    cout << "1. Add Book\n";
    cout << "2. Search Books\n";
    cout << "3. Display All Books\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    BookManager manager;
    int choice;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                manager.addBook();
                break;
            case 2:
                manager.searchBooks();
                break;
            case 3:
                manager.displayAllBooks();
                break;
            case 4:
                cout << "Exiting program...\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    return 0;
}
#include <iostream>
# include <string>
using namespace std;
struct Employee {
    string fname ;
    string lname ;
    int age ;
    string address ;
    float gpa;

};

int main () {
    
    Employee result ;
    cout <<"Enter first name :" ;
    cin >>result.fname;
    cout <<"Enter last name :" ;
    cin >>result.lname;
    cout <<"Enter age :" ;
    cin >>result.age;
    cout << "Enter address: ";
    cin.ignore();
    getline(cin, result.address);
    cout << "Enter GPA: ";
    cin >> result.gpa;

    cout << "This is about me :" << endl 
    << "FIRST NAME:" << result.fname << endl
    << "LAST NAME :" << result.lname << endl
    << "ADDRESS :" << result.address<<endl
    << "AGE :" << result.age << endl
    << "GPA :"<< result.gpa <<endl ;

    return 0 ;
}
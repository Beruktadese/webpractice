#include <iostream>
#include <string>
using namespace std;
// using parameters 

// int add(int a ,int b){
//     return a + b;
// };
// int main (){
//     int sum = add( 20 ,30);
//     cout << " The sum of the number is = " << sum << endl;

//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------
// substract two numbers 

// int substract (int a , int b){
//     return a - b;
// };
// int main () {
//     int result = substract(50 , 15);
//     cout << "The value is = " << result << endl;

//     return 0; 
// }

//-------------------------------------------------------------------------------------------------------------------------
// from user take two numbers then add them


// int main (){
//     int x ;
//     int y ;
//     cout << "Enter number 1 :" ;
//     cin >> x;
//     cout << "Enter number 2 :" ;
//     cin >> y ;
//     int sum = x + y;
//     cout << "The sum of the two number is = " << sum << endl;
//     return 0 ;
// }
//---------------------------------------------------------------------------------------------------------------------


// take two number and multiply them

// int main() {
//     int x ;
//     int y ;
//     cout << "Enter num 1 : " ;
//     cin >> x ;
//     cout << "Enter num 2 : " ;
//     cin >> y ;
//     int mul = x * y ;
//     cout << "The multiplication of two number is = "<< " " << mul <<endl;
// }

// ---------------------------------------------------------------------------------------------------------------------

// to find the address and the value of the variable

// int main (){
//     int num = 20 ;
//     int *ptr = &num;
//     cout << "The value is =" << num << endl;
//     cout << "The value is = " << *ptr <<endl;
//     cout << "The address is = "<< &num << endl;
//     cout << "The address of the number is = "<< ptr << endl;
//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------------


// struct Student {
//     string name;
//     int age;
//     float gpa;
// };

// // Function to find the student with the highest GPA
// Student* findHighestGPA(Student* students, int size) {
//     Student* highest = &students[0];  // Start by assuming the first student has the highest GPA

//     for (int i = 1; i < size; i++) {
//         if (students[i].gpa > highest->gpa) {
//             highest = &students[i];  // Update if a higher GPA is found
//         }
//     }

//     return highest;  // Return the pointer to the student with the highest GPA
// }

// int main() {
//     int numStudents;

//     // Ask the user for the number of students
//     cout << "Enter the number of students: ";
//     cin >> numStudents;

//     // Create an array of Student structures
//     Student* students = new Student[numStudents];

//     // Take input for each student
//     for (int i = 0; i < numStudents; i++) {
//         cout << "Enter name of student " << i + 1 << ": ";
//         cin >> students[i].name;

//         cout << "Enter age of student " << i + 1 << ": ";
//         cin >> students[i].age;

//         cout << "Enter GPA of student " << i + 1 << ": ";
//         cin >> students[i].gpa;
//     }

//     // Call the function to find the student with the highest GPA
//     Student* highestStudent = findHighestGPA(students, numStudents);

//     // Display the student with the highest GPA
//     cout << "\nStudent with the highest GPA:\n";
//     cout << "Name: " << highestStudent->name << endl;
//     cout << "Age: " << highestStudent->age << endl;
//     cout << "GPA: " << highestStudent->gpa << endl;

//     // Clean up dynamic memory
//     delete[] students;

//     return 0;
// }


//-------------------------------------------------------------------------------------------------------------


int main (){
    int x;
    int y;
    cout << "enter the num" <<endl;
    cin >> x;
    cout<<"enter the num2"<<endl;
    cin>>y;
    int result = x + y;
    cout<< "the sum of the two number is " << result<<endl;
}
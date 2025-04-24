#include <iostream>
#include <string>
using namespace std;
struct staff {
    string name;
    int age;
    string gender ;
    float salary;
};
int main() {
    staff result = {"Beruk",20,"M", 7000000};
    cout << "The detail of the staff is " << endl
    << "NAME :" << result.name << endl
    << "AGE :" << result.age << endl
    << "Salary :" << result.salary << endl;

    return 0;
}

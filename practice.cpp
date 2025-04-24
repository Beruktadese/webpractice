#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int sumTwo = add(10, 20);         
    int sumThree = add(10, 20, 30);    

    cout << "Sum of two numbers (10 + 20): " << sumTwo << endl;
    cout << "Sum of three numbers (10 + 20 + 30): " << sumThree << endl;

    return 0;
}



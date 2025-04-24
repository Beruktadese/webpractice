#include <iostream>
using namespace std;
struct sum {
    int array[5];
};
int main (){
    sum result;
    for (int i=0; i<5; i++){
        cout << "Enter the number " << i + 1 << " : ";
        cin >> result.array[i];
    }
    int total = 0 ;
    for (int i = 0; i<5; i++) {
        total += result.array[i];
    }
    cout << "The sum of 5 number is =" << total << endl;

    return 0 ;
}
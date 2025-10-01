//Dhairya Thakkar
//24070123037
//A2
#include <iostream> 
using namespace std;
int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a; // Pointer to the first element of the array

    cout << "Value pointed to by p: " << *p << endl;

    // Incrementing the pointer
    for (int i=0;i<5;i++){

    cout << "Value pointed to by p after increment: " << *p << endl;
        p++;}
    return 0;
}

/* Output:
Value pointed to by p: 10
Value pointed to by p after increment: 10
Value pointed to by p after increment: 20
Value pointed to by p after increment: 30
Value pointed to by p after increment: 40
Value pointed to by p after increment: 50
*/

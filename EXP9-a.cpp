//Dhairya Thakkar
//24070123037
//A2
#include <iostream>
using namespace std;
int main() {
    int a=146;
    int *p=&a; // Pointer to integer
    cout << "Value of a: " << a << endl;    
    cout << "Address of a: " << &a << endl;
    cout << "Value of p: " << p << endl;
    cout << "Value pointed to by p: " << *p << endl;
    return 0;
}

/* Output:Value of a: 146
Address of a: 0x61ff08
Value of p: 0x61ff08
Value pointed to by p: 146
*/

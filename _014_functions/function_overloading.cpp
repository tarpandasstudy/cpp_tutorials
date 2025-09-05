#include <iostream>
using namespace std;

int addNumbers(int iVar1, int iVar2) {
    return iVar1 + iVar2;
}
double addNumbers(double fVar1, double fVar2) {
    return fVar1 + fVar2;
}
double addNumbers(double fVar1, int iVar2) {
    return fVar1 + double(iVar2);
}
double addNumbers(int fVar1, double iVar2) {
    return double(fVar1) + iVar2;
}
int main() {
    // Here, we understand about Function Overloading.

    /*
    Function overloading allows us to have multiple functions with the same name if:
    1. The number of parameters are different.
    2. Or, same number of parameters are present with different data types.
    */

    cout << "24 + 45 = " << addNumbers(24, 45) << endl;
    cout << "24.4 + 45.5 = " << addNumbers(24.4, 45.5) << endl;
    cout << "24.4 + 45 = " << addNumbers(24.4, 45) << endl;
    cout << "24 + 45.5 = " << addNumbers(24, 45.5) << endl;

    return 0;
}
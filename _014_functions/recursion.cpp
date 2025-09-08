#include <iostream>
using namespace std;

int addingNumbers(int iVar1) {
    if(iVar1 == 1){
        return iVar1;
    }
    return iVar1 + addingNumbers(iVar1 - 1);
}
void countdown(int iVar2) {
    if(iVar2 > 0) {
        cout << iVar2 << " ";
        countdown(iVar2 - 1);
    }
}
int factorial(int iVar3) {
    if(iVar3 > 1) {
        return iVar3 * factorial(iVar3 - 1);
    }
    return iVar3;
}
int main() {
    // Here, we understand about Recursion.

    // Example 1: Adding a range of numbers.

    cout << "-> 1. Adding numbers from 1 to 10" << endl;
    int iVar1 = 10;
    cout << "Sum of numbers 1 to 10: " << (iVar1 + addingNumbers(iVar1 - 1)) << endl;

    // Example 2: Countdown.

    cout << "-> 2. Countdown from 5" << endl;
    int iVar2 = 5;
    cout << "Counting down from 5:" << endl;
    countdown(iVar2);
    cout << endl;

    // Example 3: Factorial of a number.

    cout << "-> 3. Factorial of a 6" << endl;
    int iVar3 = 6;
    cout << "Factorial of 6 is " << factorial(iVar3) << endl;

    return 0;
}
#include <iostream>
using namespace std;

void testFunction1() { // Function declaring local variable.
    int iVar1 = 10;
    cout << "Local variable value (within a function): " << iVar1 << endl;
}
int iVar2 = 5; // Global variable
void testFunction2() {
    cout << "Global variable value (within a function): " << iVar2 << endl;
}
string strScope = "Global variable.";
void testFunction3() {
    string strScope = "Local Variable.";
    cout << "Local variable string: " << strScope << endl;
}
int main() {
    // Here, we understand how variable scope works with functions.

    /*
        1. Function local scope:
        A variable declared within a function can only be used in the local scope of the function, meaning it can be accessed with only within the function.
    */
    cout << "-> 1. Local variable" << endl;
    testFunction1();

    /*
        2. Global variable:
        A variable created outside a function is called Global variable. It can be used in global scope, meaning in or outside a function.
    */
    cout << "-> 2. Global variable" << endl;
    testFunction2();
    iVar2 += 3;
    cout << "3 (from outside the funtion) + global variable = " << iVar2 << endl;
    /*
        3. Naming variables:
        If we create a global and a local variable with the same name, both will be treated as separate variable.
        However, it is always recommended to use different variable names for global and local scopes.
        Example below carries out with the same name for local and global variable.
    */
    cout << "-> 3. Local variable and Global variable with the same name" << endl;
    testFunction3();
    cout << "Same variable but called outside the function: " << strScope << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Here, we learn about Bitwise Operators.
    
    int iVar1 = 124, iVar2 = 23;

    cout << iVar1 << " & " << iVar2 << " = " << (iVar1 & iVar2) << endl; // Bitwise AND
    cout << iVar1 << " | " << iVar2 << " = " << (iVar1 | iVar2) << endl; // Bitwise OR
    cout << iVar1 << " ^ " << iVar2 << " = " << (iVar1 ^ iVar2) << endl; // Bitwise XOR
    cout << "~" << iVar1 << " = " << ~iVar1 << endl; // Bitwise NOT
    cout << iVar1 << " << " << iVar2 << " = " << (iVar1 << iVar2) << endl; // Leftshift
    cout << iVar1 << " >> " << iVar2 << " = " << (iVar1 >> iVar2) << endl; // Rightshift

    return 0;
}
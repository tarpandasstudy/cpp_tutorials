#include <iostream>
using namespace std;

int main() {
	// Here, we understand about deferencing pointer.

	string strClub = "Bayern Munich";
	cout << "Variable value : " << strClub << endl;

	// Referecing : Output the memory address of the variable.
	string *pointerStrClub = &strClub;
	cout << "Address to the variable (Referencing) : " << pointerStrClub << endl;

	// Dereferencing : Output the variable using * operator.
	string derefStrClub = *pointerStrClub;
	cout << "Value in the variable (Dereferencing) : " << derefStrClub << endl;

	return 0;
}

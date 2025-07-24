#include <iostream>
using namespace std;

int main() {
	int iVar1, iVar2;
	char cOperator;
	cout << "Enter number 1: ";
	cin >> iVar1;
	cout << "Enter number 2: ";
	cin >> iVar2;
	cout << "Enter operation:\nAdd (+)\nSubtract (-)\nMultiply (*)\nDivide (/)\n";
	cin >> cOperator;

	switch(cOperator) {
		case('+'):
			cout << "Sum : " << (iVar1 + iVar2) << endl;
			break;
		case('-'):
			cout << "Difference : " << (iVar1 - iVar2) << endl;
			break;
		case('*'):
			cout << "Product : " << (iVar1 * iVar2) << endl;
			break;
		case('/'):
			cout << "Quotient : " << (iVar1 / iVar2) << " , Remainder : " << (iVar1 % iVar2) << endl;
			break;
		default:
			cout << "Invalid input." << endl;
	}
	return 0;
}

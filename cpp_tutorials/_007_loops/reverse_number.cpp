#include<iostream>
using namespace std;

int main() {
	// Here, we understand While loops by building an app to reverse number of any digit length.
	
	int iVarUser, iVarReverse = 0;
	cout << "Enter a number to reverse: " << endl;
	cin >> iVarUser;

	// using while loop
	while (iVarUser) {
		iVarReverse = iVarReverse * 10 + iVarUser % 10;
		iVarUser /= 10;
	}

	cout << "Reverse of input number: " << iVarReverse << endl;

	return 0;
}

#include<iostream>
using namespace std;

int main() {
	int iVar1 = 7, iArray1[] = {1, 2, 3, 4, 5, 6, 7};

	// for loop
	cout << "\nFibonacci series\n";

	int iVar2 = 0, iVar3 = 1;
	for (int i=0; i<iVar1; i++) {
		cout << iVar2 << ", ";
		int iTemp = iVar3;
		iVar3 += iVar2;
		iVar2 = iTemp;
	}
	cout << endl;

	// nested for loop
	cout << "\nPyramid pattern.\n";

	for (int i=0; i<iVar1; i++) {
		for (int j=iVar1-1; j>i; j--) {
			cout << " ";
		}
		for (int j=0; j<=i; j++) {
			cout << "*";
		}
		for (int j=0; j<i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	// for each
	cout << "\nSquare's of numbers.\n";

	for (int i : iArray1) {
		cout << i << "^2 = " << (i*i) << endl;
	}

	return 0;
}

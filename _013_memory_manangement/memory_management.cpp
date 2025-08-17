#include <iostream>
using namespace std;

int main() {
	// Here, we undestand about memory management in C++.

	/*
	Memory management is the process of controlling how much memory our program uses and how it is used.
	This includes creating, using and releasing memory when not in use.
	*/

	// sizeof() operator : In order to understand the memory (in bytes) used by a variable of a particular datatype, we use sizeof() operator.

	int iVar1 = 12;
	float fVar1 = 12.34;
	double fVar2 = 12.34;
	char cVar1 = 'V';

	cout << "Size of integer : " << sizeof(iVar1) << " bytes." << endl;
	cout << "Size of float : " << sizeof(fVar1) << " bytes." << endl;
	cout << "Size of double : " << sizeof(fVar2) << " bytes." << endl;
	cout << "Size of character : " << sizeof(cVar1) << " bytes." << endl;

	return 0;
}

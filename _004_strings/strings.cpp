#include <iostream>
using namespace std;

int main() {
	string strVar1 = "Hello World!";
	cout << "String used: " << strVar1 << endl;

	// length of a string
	int iLen1 = strVar1.length();
	int iLen2 = strVar1.size();

	cout << "strVar1.length() = " << iLen1 << endl;
	cout << "strVar1.size() = " << iLen2 << endl;

	// accessing part of string
	cout << "strVar1[0] = " << strVar1[0] << endl;
	cout << "strVar1[3] = " << strVar1[3] << endl;

	// get character from a string index
	cout << "strVar1.at(1) = " << strVar1.at(1) <<endl;

	// get double slashes in a string
	cout << "He\'s happy. He said \"Hello!\"." << endl;

	return 0;
}

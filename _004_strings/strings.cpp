#include <iostream>
using namespace std;

int main() {
	// Here, we learn about strings in C++

	string strVar1 = "Hello World!";
	cout << "String used: " << strVar1 << endl;
	
	int iLen1 = strVar1.length(); // length of a string
	int iLen2 = strVar1.size();

	cout << "strVar1.length() = " << iLen1 << endl;
	cout << "strVar1.size() = " << iLen2 << endl;

	cout << "strVar1[0] = " << strVar1[0] << endl; // accessing part of string
	cout << "strVar1[3] = " << strVar1[3] << endl;

	cout << "strVar1.at(1) = " << strVar1.at(1) <<endl; // get character from a string index

	cout << "He\'s happy. He said \"Hello!\"." << endl; // get double slashes in a string

	return 0;
}

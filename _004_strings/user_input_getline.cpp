#include<iostream>
#include<string>
using namespace std;

int main() {
	// Here, we learn the use of getline() to take in strings.

	string fullName;
	
	cout << "Enter Fullname: ";
	getline(cin, fullName); // using getline, we get the entire string we pass in as input.

	cout << "Fullname : " << fullName << endl;

	return 0;
}

#include <iostream>
using namespace std;

string myFunction(); // Function declaration

int main() {
	// Here, we understand the basics of functions.

	/*
	Functions are blocks of codes which runs when called.
	We can pass data, known as parameters to functions.
	Functions are written to divide a specific tasks into smaller tasks.
	They are also written when a certain parts of code are reused multiple times
	*/

	/*
	main() function is a pre-defined function in C++.
	The executions starts from this function.
	*/

	// To declare a function, we write the return type, followed by function name.
	// Example: string myFunction();

	// To call a function, we do the following.
	string message = myFunction(); // Function call
	cout << message << endl;

	// Note: We can call functions as many times we want.
	return 0;
}

string myFunction() { // Function definition
	string wishes= "Happy Learning!";
	return wishes;
}

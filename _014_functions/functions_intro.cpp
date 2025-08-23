#include <iostream>
using namespace std;

string myFunction1(); // Function declaration if function is written after the main function.
string myFunction2() { // Function declaration if function is written before the main function.
	string myMessage = "I am learning  C++.";
	return myMessage;
}

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

	string message1 = myFunction1(); // Function1 call
	string message2 = myFunction2(); // Function2 call

	cout << message1 << endl;
	cout << message2 << endl;

	// Note: We can call functions as many times we want.
	return 0;
}

string myFunction1() { // Function definition
	string wishes= "Happy Learning!";
	return wishes;
}

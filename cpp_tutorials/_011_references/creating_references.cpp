#include <iostream>
using namespace std;

int main() {
	// Here, we understand about reference variable.

	// A reference variable is an alias of an existing variable.
	string strFruit = "Pineapple"; // strFruit variable
	string &refStrFruit = strFruit; // reference to strFruit

	cout << "strFruit : " << strFruit << endl;
	cout << "refStrFruit : " << refStrFruit << endl;

	// Note: both strFruit and refStrFruit points to the same location. Changing one affects the other.

	strFruit = "Banana";
	cout << "Only \"strFruit\" has been changed. It will affect \"refStrFruit\"." << endl;
	cout << "New strFruit : " << strFruit << endl;
	cout << "New refStrFruit : " << refStrFruit << endl;

	return 0;
}

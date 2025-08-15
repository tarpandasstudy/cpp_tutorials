#include <iostream>
using namespace std;

int main() {
	// Here, we usderstand how we can use pointers to modify a variable.

	string strDriver = "Ayrton Senna";
	string * pointerStrDriver = &strDriver;

	cout << "Variable name : " << strDriver << endl;
	cout << "Variable address (Referencing) : " << pointerStrDriver << endl;

	*pointerStrDriver = "Alain Prost"; // Changing pointer value.

	cout << "Variable value after changing it : " << strDriver << endl;
	cout << "Address remains : " << &strDriver << endl;

	return 0;
}

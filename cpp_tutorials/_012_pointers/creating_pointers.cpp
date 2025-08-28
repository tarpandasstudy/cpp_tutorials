#include <iostream>
using namespace std;

int main() {
	// Here, we understand about creating pointers.

	// A pointer is a variable which stores the value of address.
	string strCar = "Maruti Suzuki";
	string * pointerStrCar = &strCar;

	cout << "Variable value : " << strCar << endl;
	cout << "Address value : " << pointerStrCar << endl;

	// Note: The pointer variable points to a variable of the same type.

	return 0;
}

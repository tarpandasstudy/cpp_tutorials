#include <iostream>
using namespace std;

int main() {
	// Here, we understand about creating pointers.

	// A pointer is a variable which stores the value of address.
	string strCar = "Maruti Suzuki";
	string * pointerStrCar = &strCar;

	cout << "Variable value : " << strCar << endl;
	cout << "Address value : " << pointerStrCar << endl;

	return 0;
}

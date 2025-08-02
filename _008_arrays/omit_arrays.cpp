#include <iostream>
using namespace std;

int main() {
	string strCars[4];
	/* Since we are not assigning values to this array during 
	declaration, we have to specify array size.
	*/
	cout << "Empty Cars array: ";
	for (string iCar : strCars) {
		cout << iCar << ", ";
	}
	cout << endl;

	strCars[0] = "Suzuki";
	strCars[3] = "Toyota";

	cout << "Half filledCars array: ";
	for (string iCar : strCars) {
		cout << iCar << ", ";
	}
	cout << endl;

	strCars[1] = "Mahindra";
        strCars[2] = "Tata";

	cout << "Cars array: ";
        for (string iCar : strCars) {
                cout << iCar << ", ";
        }
        cout << endl;

	return 0;
}

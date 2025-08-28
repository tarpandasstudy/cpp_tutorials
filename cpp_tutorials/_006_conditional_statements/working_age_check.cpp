#include <iostream>
using namespace std;

int main() {
	// Here, we learn about If-Else statements by making a simple app to determine working age.
	
	int iAgeUser;
	cout << "Enter age: ";
	cin >> iAgeUser;

	if (iAgeUser >= 0 and iAgeUser < 14) {
		cout << "You're too young to work." << endl;
	} else if (iAgeUser >= 14 and iAgeUser < 60) {
		cout << "You are of working age." << endl;
	} else if (iAgeUser >= 60) {
		cout << "Rest easy, you've worked enough. Enjoy your retirement." << endl;
	} else {
		cout << "Please, put a valid age." << endl;
	}

	return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	// Here, we understand how we assign values to a variable.
	
	int a = 3, b = 4, c; // Multiple values, single line
	c = sqrt(pow(a, 2) + pow(b, 2));
	cout << "Hypotenuse of " << a << " unit and " << b << " unit is " << c << " unit" << endl;

	
	int x, y, z;
	x = y = z = 50; // Single values, multiple variables of same datatype
	cout << "50^3 = " << x*y*z << endl;
	return 0;
}

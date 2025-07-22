#include <iostream>
#include <cmath>

using namespace std;

int main() {
	// multiple values, single line
	int a = 3, b = 4, c;
	c = sqrt(pow(a, 2) + pow(b, 2));
	cout << "Hypotenuse: " << c << " unit" << endl;

	// single values, multiple values
	int x, y, z;
	x = y = z = 50;
	cout << "50^3 = " << x*y*z << endl;
	return 0;
}

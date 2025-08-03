#include<iostream>
using namespace std;

int main() {
	// Here, we learn about Logical Operators.

	int x = 50, y = 70;
	cout << "x = " << x << " , y = " << y << endl;
	cout << "((x > y) && y) = " << ((x > y) && y) << endl;
	cout << "((x > y) || y) = " << ((x < y) && y) << endl;
	cout << "(!((x == y) || y)) = " << (!((x == y) || y)) << endl;
	return 0;
}

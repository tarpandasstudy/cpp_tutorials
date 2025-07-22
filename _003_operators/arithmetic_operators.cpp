#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	a = b = c = 10;
	cout << a << "+" << b << "=" << a+b << endl;
	cout << a << "-" << b << "=" << a-b << endl;
	cout << a << "*" << b << "=" << a*b << endl;
	cout << a << "/" << b << "=" << a/b << endl;
	cout << a << "%" << b << "=" << a%b << endl;

	cout << "++" << a << "=" << ++a << endl;
	cout << a << "++" << "=" << a++ << endl;

	cout << "--" << a << "=" << --a << endl;
	cout << a << "--" << "=" << a-- << endl;

	return 0;
}

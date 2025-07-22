#include<iostream>
using namespace std;

int main() {
	int x;
	x = 3771;
	cout << "x = " << x << endl;
	x += 5;
	cout << "x += 5 : " << x << endl;
	x -= 3;
	cout << "x -= 3 : " << x << endl;
	x *= 2;
	cout << "x *= 2 : " << x << endl;
	x /= 4;
	cout << "x /= 4 : " << x << endl;
	x %= 56;
	cout << "x %= 56 : " << x << endl;
	x &= 34;
	cout << "x &= 34 : " << x << endl;
	x |= 26;
	cout << "x |= 26 : " << x << endl;
	x ^= 57;
	cout << "x ^= 57 : " << x << endl;
	x <<= 2;
	cout << "x <<= 2 : " << x << endl;
	x >>= 2;
	cout << "x >>= 2 : " << x << endl;
	return 0;
}

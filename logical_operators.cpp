#include<iostream>
using namespace std;

int main() {
	int x = 50, y = 70;
	cout << "((x > y) && y) = " << ((x > y) && y) << endl;
	cout << "((x > y) || y) = " << ((x < y) && y) << endl;
	cout << "(!((x == y) || y)) = " << (!((x == y) || y)) << endl;
	return 0;
}

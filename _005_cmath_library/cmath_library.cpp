#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int iVar1 = max(5, 10);
	int iVar2 = min(5, 10);
	float fVar1 = sqrt(97);
	int iVar3 = round(2.67);
	float fVar2 = log(2);

	cout << "max(5, 10) = " << iVar1 << endl;
	cout << "min(5, 10) = " << iVar2 << endl;
	cout << "sqrt(97) = " << fVar1 << endl;
	cout << "round(2.67) = " << iVar3 << endl;
	cout << "log(2) = " << fVar2 << endl;

	return 0;
}

#include<iostream>
using namespace std;
int main(){
	// Here, we talk about the various datatypes in C++.
	
	short iVar1 = 23; // Short Integer variable
	int iVar2 = 23; // Integer variable
	long iVar3 = 23; // Long Integer variable
	long long iVar4 = 23; // Long Long Integer variable

	float fVar1 = 23.78; // Floating-point variable
	double fVar2 = 23.78; // Double Floating-point variable
	long double fVar3 = 23.78; // Long Double Floating-point variable

	char cVar1 = 'c'; // Character variable
	
	string strVar1 = "Hello!"; // String variable
	
	bool bVar1 = true; // Boolean variable

	cout << "Short Integer value: " << iVar1 << " (sizeof() : " << sizeof(iVar1) << " bytes)" << endl;
	cout << "Integer value: " << iVar2 << " (sizeof() : " << sizeof(iVar2) << " bytes)" << endl;
	cout << "Long Integer value: " << iVar3 << " (sizeof() : " << sizeof(iVar3) << " bytes)" << endl;
	cout << "Long Integer value: " << iVar4 << " (sizeof() : " << sizeof(iVar4) << " bytes)" << endl;
	cout << endl;

	cout << "Float value: " << fVar1 << " (sizeof() : " << sizeof(fVar1) << " bytes)" << endl;
	cout << "Double value: " << fVar2 << " (sizeof() : " << sizeof(fVar2) << " bytes)" << endl;
	cout << "Long Double value: " << fVar3 << " (sizeof() : " << sizeof(fVar3) << " bytes)" << endl;
	cout << endl;

	cout << "Character value: " << cVar1 << " (sizeof() : " << sizeof(cVar1) << " byte)" << endl;
	cout << endl;

	cout << "String value: " << strVar1 << " (sizeof() : " << sizeof(strVar1) << " bytes)" << endl;
	cout << endl;

	cout << "Boolean value: " << bVar1 << " (sizeof() : " << sizeof(bVar1) << " byte)" << endl;
	cout << endl;
	
	return 0;
}

#include <iostream>
using namespace std;

void addNumbers(int iVar1, int iVar2) { // iVar1 and iVar2 are placeholders. So, they are parameters.
	int iSum = iVar1 + iVar2;

	cout << "Value 1: " << iVar1 << ", Value 2: " << iVar2 << endl;
	cout << "Sum: " << iSum << endl;
}
void countryOfOrigin(string strVar1 = "USA") { // We are setting strVar1
	cout << "Country name: " << strVar1 << endl;
}
void studentInfo(string strName, int iAge) {
	cout << "Name: " << strName << "\nAge: " << iAge << endl;
}
double areaOfTriangle(int iBase, int iHeight) {
	return 0.5 * iBase * iHeight;
}
void valueChange(int &userValue) {
	int tempUserValue;
	cout << "Enter new value: ";
	cin >> tempUserValue;
	userValue = tempUserValue;
}
int main() {
	// Here, we understand in depth about parameters and arguments.

	/*
	1. Difference between Parameters and Arguments:

	Parameters: A parameter is a variable in a function's definition that servers as a placeholder for an input value.
	Arguments: An argument is the actual value passed to the function when it is called.
	*/

	cout << "-> 1. Parameters and Arguments" << endl;
	int iVar1 = 230, iVar2 = 34;

	addNumbers(iVar1, iVar2); // iVar1 and iVar2 are values passed. So, they are arguments.

	/*
	2. Default Parameter Value:

	We can use default paramter value, by using the equals sign (=).
	*/

	cout << "-> 2. Default Parameters" << endl;
	string strVar1 = "India";
	countryOfOrigin(strVar1);
	countryOfOrigin(); // We can leave blank value here, and it will use the default parameter value, which is "USA".

	/*
	3. Multiple Parameters:

	We can pass multiple paramters of same or different datatypes to a function.

	We have already seen an example for similar datatypes in point number '1'.
	*/

	cout << "-> 3. Multiple Parameters" << endl;
	string strName = "Alex";
	int iAge = 5;
	studentInfo(strName, iAge);

	/*
	4. Return types:

	If we want to return some value of some datatype, such as int, string, etc., we use the return keyword.
	*/

	cout << "-> 4. Return types" << endl;
	cout << "Finding Area of a triangle" << endl;
	int iBase, iHeight;
	double fArea;
	cout << "Enter the base of a triangle: ";
	cin >> iBase;
	cout << "Enter the height of a triangle: ";
	cin >> iHeight;

	fArea = areaOfTriangle(iBase, iHeight);

	cout << "Area of the triangle is " << fArea << " unit sq." << endl;

	/*
	5. Pass by reference:

	Sending value by reference will help us update the value of the variable in the memory space.
	*/

	cout << "-> 5. Pass by reference" << endl;
	int inputValue1;
	cout << "Enter integer value: ";
	cin >> inputValue1;
	cout << "User value before: " << inputValue1 << endl;
	valueChange(inputValue1);
	cout << "Changed value: " << inputValue1 << endl;

	return 0;
}

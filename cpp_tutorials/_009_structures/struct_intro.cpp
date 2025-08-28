#include <iostream>
using namespace std;

int main() {
	// Here, we understand about Structures.
	/*
	Structures are ways to group variables of different datatypes in one place.
	Each member of structures are called "members".
	Structures are also called "structs".
	*/
	struct {
		int iAge;
		string strFirstName;
		string strLastName;
		string strID;
	} structStu1Info, structStu2Info;

	structStu1Info.iAge = 14;
	structStu1Info.strFirstName = "Arun";
	structStu1Info.strLastName = "Kumar";
	structStu1Info.strID = "STU2024_001";

	structStu2Info.iAge = 15;
	structStu2Info.strFirstName = "Bikram";
	structStu2Info.strLastName = "Singh";
	structStu2Info.strID = "STU2023_001";

	cout << "----------\nStudent 1\n----------\n";
	cout << "ID : " << structStu1Info.strID << endl;
	cout << "Name : " << (structStu1Info.strFirstName + " " + structStu1Info.strLastName) << endl;
	cout << "Age : " << structStu1Info.iAge << endl;

	cout << "----------\nStudent 2\n----------\n";
        cout << "ID : " << structStu2Info.strID << endl;
        cout << "Name : " << (structStu2Info.strFirstName + " " + structStu2Info.strLastName) << endl;
        cout << "Age : " << structStu2Info.iAge << endl;

	return 0;
}

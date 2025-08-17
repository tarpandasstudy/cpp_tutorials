#include <iostream>
using namespace std;

int main() {
	// Here, we understand the use of new and delete keyword for memory management.

	// 1. new : Lets us manage memory ourselves.

	int *ptr = new int; // Creates a memory space for one integer. *ptr stores the address of the space.
	*ptr = 35;
	cout << "Value of variable : " << *ptr << endl;

	// 2. delete : When we create something with new, we need to manuall remove it using delete keyword.
	delete ptr;

	// 3. Using new and delete with arrays.
	string *fruits = new string[5]; // Creates space for 5 array elements.
	fruits[0] = "Banana";
	fruits[2] = "Pineapple";
	fruits[4] = "Apple";

	for(int i=0; i<5; i++) {
		cout << fruits[i] << ", ";
	}
	delete[] fruits; // Clean up memory.

	// Note: We can use this for dynamic arrays:
	cout << "\n---------------------------------------------\n";
	cout << "List maker";
	cout << "\n---------------------------------------------\n";

	int iNoOfTasks;
	cout << "Enter the no of tasks you want to complete:" << endl;
	cin >> iNoOfTasks;

	if (iNoOfTasks <= 0) {
		cout << "There sould be atleast one item." << endl;
		return 0;
	}

	string *strList = new string[iNoOfTasks];

	cin.ignore(); // Ignore the leftover newline character created.

	cout << "Enter items in list:" << endl;

	for(int i=0; i<iNoOfTasks; i++) {
		cout << (i+1) << ". ";
		getline(cin, strList[i]);
	}

	cout << "Reading out the list: " << endl;

	for(int i=0; i<iNoOfTasks; i++) {
		cout << "* " + strList[i] << endl;
	}

	delete[] strList; // Clean up memory.
	return 0;
}

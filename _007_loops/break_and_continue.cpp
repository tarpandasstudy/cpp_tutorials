#include<iostream>
using namespace std;

int main() {
	string iArrayFruits[] = {"Mango", "Pineapple", "Apple", "Grapes", "Watermelon"};
	int iArrayFruitsLength = sizeof(iArrayFruits)/sizeof(iArrayFruits[0]);
	cout << "Fruits array: ";
	for (int i=0; i<iArrayFruitsLength; i++) {
		cout << iArrayFruits[i] << ", ";
	}

	// break statement
	cout << "\nFruits array (broke at index 3): ";
	for (int i=0; i<iArrayFruitsLength; i++) {
		if (i==3) {
			break;
		}
		cout << iArrayFruits[i] << ", ";
	}

	// continue statement
        cout << "\nFruits array (skipped index 2): ";
        for (int i=0; i<iArrayFruitsLength; i++) {
                if (i==2) {
                        continue;
                }
                cout << iArrayFruits[i] << ", ";
        }
	cout << endl;
	return 0;
}

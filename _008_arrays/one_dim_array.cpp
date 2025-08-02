#include<iostream>
using namespace std;

int main() {
	int iArrayAge[] = {18,22,22,34,18,58,56,40,38,42,25};
	cout << "Age array: ";
	for (int iAge : iArrayAge) {
		cout << iAge << ", ";
	}
	cout << endl;

	// Average age
	int iSumOfAges = 0;
	int iArrayLength = sizeof(iArrayAge)/sizeof(iArrayAge[0]);
	for (int iAge : iArrayAge) {
		iSumOfAges += iAge;
	}
	cout << "Average age: " << (iSumOfAges/iArrayLength) << endl;

	// Minimum age
	int iMinAge = 999;
        for (int iAge : iArrayAge) {
                if (iMinAge > iAge) {
                        iMinAge = iAge;
                }
        }
	cout << "Manimum age: " << iMinAge << endl;

	// Maximum age
	int iMaxAge = 0;
	for (int iAge : iArrayAge) {
       		if (iMaxAge < iAge) {
			iMaxAge = iAge;
		}
	}
	cout << "Maximum age: " << iMaxAge << endl;

	return 0;
}

#include<iostream>
#include<cctype>

using namespace std;

int main() {
	// Here, we understand about Do-While loop by building a Random Number Generator.
	
	string strResponse = "y";
	int iNumGenerated;
	bool bContinue = true;
	cout << "Generate random number (Y/n): ";
	cin >> strResponse;
	if (tolower(strResponse[0]) == 'y') {
		// using do...while loop
		do {
			iNumGenerated = rand();
			cout << iNumGenerated << endl;
			cout << "Do you wish to continue (Y/n)? ";
			cin >> strResponse;
			bContinue = (tolower(strResponse[0]) == 'y') ? true : false;
		} while(bContinue);
	} else {
		cout << "Something went wrong." << endl;
	}
	return 0;
}

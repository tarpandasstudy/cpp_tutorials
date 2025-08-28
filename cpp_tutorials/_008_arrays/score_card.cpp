#include <iostream>
using namespace std;

int main() {
	// Here, we understand 2-D Array by making a class score-card app.
	
	int iScoreCard [][3] = { // During declaration, if we are assigning value to the variable, all the elements should be provided size. First array size can be omitted.
	{78,88,67},{89,96,92},{56,78,99}
	};

	int iArraySize = sizeof(iScoreCard)/sizeof(iScoreCard[0]);
	int iColumnSize = sizeof(iScoreCard[0])/sizeof(iScoreCard[0][0]);

	cout << "Name	English	Math	Science\n";
	for(int i=0; i<iArraySize; i++) {
		string strStudent = "Student_" + to_string(i+1);
		cout << strStudent << ": ";
		for(int j=0; j<iColumnSize; j++) {
			cout << iScoreCard[i][j] << "	";
		}
		cout << endl;
	}
	return 0;
}

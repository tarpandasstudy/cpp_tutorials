#include <iostream>
using namespace std;

int main() {
	int iScoreCard [][3] = {
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

#include<iostream>
using namespace std;

int main() {
	int iDayTemp;
	cout << "Enter today's temperature : ";
	cin >> iDayTemp;

	string strResponse = (iDayTemp > 15 && iDayTemp < 25) ? "Today is a good day!": "Temperature today is not perfect.";
	cout << strResponse << endl;
	return 0;
}

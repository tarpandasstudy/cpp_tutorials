#include<iostream>
using namespace std;

int main() {
	// Here, we learn about Short-Hand If-Else or Ternary Operator by making a simple weather response app.
	
	int iDayTemp;
	cout << "Enter today's temperature : ";
	cin >> iDayTemp;

	string strResponse = (iDayTemp > 15 && iDayTemp < 25) ? "Today is a good day!": "Temperature today is not perfect.";
	cout << strResponse << endl;
	return 0;
}

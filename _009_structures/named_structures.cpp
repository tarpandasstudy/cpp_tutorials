#include <iostream>
using namespace std;

int main() {
	// Here, we understand about Named Structures.
	// By naming datatype, we can use a struct as a datatype.

	struct player_stats {
		int iHP;
		int iLVL;
		string strCategory;		
	};

	player_stats player1;
	player1.iHP = 100;
	player1.iLVL = 20;
	player1.strCategory = "Fire";

	player_stats player2;
	player2.iHP = 100;
	player2.iLVL = 24;
	player2.strCategory = "Grass";

	cout << "---------------\nPlayer 1 stats\n---------------" << endl;
	cout << "HP: " << player1.iHP << endl;
	cout << "Level: " << player1.iLVL << endl;
	cout << "Type/Category: " << player1.strCategory << endl;
	cout << "---------------\nPlayer 2 stats\n---------------" << endl;
	cout << "HP; " << player2.iHP << endl;
	cout << "Level: " << player2.iLVL << endl;
	cout << "Type/Category: " << player2.strCategory << endl;

	return 0;	
}

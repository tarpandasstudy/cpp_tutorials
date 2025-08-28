#include <iostream>
#include <vector>
using namespace std;

int main() {
	// Here, we understand Vectors and how they work as variable arrays.
	
	vector<string> strETLTech = {"Python", "PySpark", "Snowflake", "Databricks"};
	cout << "Initial vector: ";
	for (string strTool : strETLTech) {
		cout << strTool << ", ";
	}
	cout << endl;

	strETLTech.push_back("AWS Glue");
	cout << "One element added: ";
	for (string strTool : strETLTech) {
		cout << strTool << ", ";
	}
	cout << endl;

	return 0;
}

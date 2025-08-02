#include <iostream>
#include <vector>
using namespace std;

int main() {
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

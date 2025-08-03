#include<iostream>

int main() {
	// Here, we learn about the presence of C-Style string in C++.

	std::pmr::string greeting1 = "Hello"; // Regular string
	char greeting2[] = "Hi"; // C-style string

	std::cout << "Regular greeting : " << greeting1 << std::endl;
	std::cout << "C-style greeing : " << greeting2 << std::endl;

	return 0;
}

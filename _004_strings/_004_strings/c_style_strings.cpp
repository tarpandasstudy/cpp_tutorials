#include<iostream>

int main() {
	std::pmr::string greeting1 = "Hello"; //regular string
	char greeting2[] = "Hi"; // c-style string

	std::cout << "Regular greeting : " << greeting1 << std::endl;
	std::cout << "C-style greeing : " << greeting2 << std::endl;

	return 0;
}

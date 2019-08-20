#include <iostream>

int main()
{
	int x{};
	std::cout << "Enter a number:";
	std::cin >> x;
	if (x == 2 || x == 3 || x == 5 || x == 7) {
		std::cout << "The digit is prime" << std::endl;
	}
	else {
		std::cout << "The digit is not prime" << std::endl;
	}
}
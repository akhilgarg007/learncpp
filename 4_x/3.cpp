#include <iostream>

double getDouble() {
	double x;
	std::cout << "Enter a double value: ";
	std::cin >> x;
	return x;
}

char getOperator() {
	char x;
	std::cout << "Enter one of the following: +, -, *, or /: ";
	std::cin >> x;
	return x;
}
int main()
{
	double x{ getDouble() };
	double y{ getDouble() };
	char op{ getOperator() };
	if (op == '+')
		std::cout << x << " " << op << " " << y << " is " << x + y;
	else if (op == '-')
		std::cout << x << " " << op << " " << y << " is " << x - y;
	else if (op == '*')
		std::cout << x << " " << op << " " << y << " is " << x * y;
	else if (op == '/')
		std::cout << x << " " << op << " " << y << " is " << x / y;
}
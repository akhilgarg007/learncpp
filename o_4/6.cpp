#include <iostream>
#include <bitset>

int getcha() {
	int num;
	std::cout << "Enter a number between 0 and 255(both inclusive): ";
	std::cin >> num;
	return num;
}

int printandDecrement(int x, int pow) {
	if (x >= pow)
	{
		std::cout << "1";
		// If x is greater than our power of 2, subtract the power of 2
		return x - pow;
	}
	else
	{
		std::cout << "0";
		return x;
	}

}


int main()
{
	int num{ getcha() };
	int pow{ 128 };

	while (pow) {
		num = printandDecrement(num, pow);
		if(pow==16)
			std::cout << " ";
		pow /= 2;
	}
}
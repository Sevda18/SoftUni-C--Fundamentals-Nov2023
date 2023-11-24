#include <iostream>

int main()
{
	double num1, num2, num3;
	std::cin >> num1 >> num2 >> num3;

	double result = num1 * num2 * num3;
	if (result >= 0)
	{
		std::cout << '+' << std::endl;
	}
	else
	{
		std::cout << '-' << std::endl;
	}

}
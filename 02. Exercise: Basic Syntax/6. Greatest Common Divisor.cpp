#include <iostream>

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;

	int min = num1 < num2 ? num1: num2;
	int max = num1 > num2 ? num1 : num2;
	int gcd = 1;
	for (int i = 2; i <= max; i++)
	{
		if (max % i == 0 && min % i == 0)
		{
			gcd = i;
		}
	}

	std::cout << gcd;
}
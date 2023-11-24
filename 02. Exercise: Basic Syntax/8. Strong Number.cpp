#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	int product = 1;
	int sum = 0;

	int copyOfNum = num;
	while(copyOfNum != 0)
	{
		product = 1;
		int lastDigit = copyOfNum % 10;
		for (int i = 1; i <= lastDigit; i++)
		{
			product *= i;
		}
		sum += product;
		copyOfNum /= 10;
	}
	std::cout<< ((sum == num) ? "yes" : "no");
}
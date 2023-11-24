#include <iostream>
#include <cmath>

int main()
{
	double num1, num2, num3;
	std::cin >> num1 >> num2 >> num3;

	int descriminant = num2 * num2 - 4 * num1 * num3;
	if (descriminant < 0)
	{
		std::cout << "no roots";
		return 0;
	}

	descriminant = sqrt(descriminant);
	double r1 = ( - num2 + descriminant)/(2*num1);
	double r2 = (-num2 - descriminant) / (2*num1);

	if (descriminant == 0)
	{
		std::cout << r1;
		return 0;
	}
	else
	{
		std::cout << r1 << " " << r2;
	}
}
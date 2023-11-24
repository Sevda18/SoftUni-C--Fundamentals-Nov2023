#include <iostream>
#include <climits>

int main()
{
	int count;
	std::cin >> count;
	int min = INT_MAX;
	int max = INT_MIN;
	int number;
	for (int i = 1; i <= count; i++)
	{
		std::cin >> number;
		if (min > number)
		{
			min = number;
		}
		if (max < number)
		{
			max = number;
		}
	}
	std::cout << min << " " << max;
}
#include <iostream>

int main()
{
		int num;
		std::cin >> num;
		while (num % 2 != 0)
		{
			std::cout << "Please write an even number." << std::endl;
			std::cin >> num;
			if (num % 2 == 0)
			{
				std::cout << "The number is: ";
				if (num < 0)
				{
					std::cout << -num;
				}
				else
				{
					std::cout << num;
				}
				break;
			}
		}
}
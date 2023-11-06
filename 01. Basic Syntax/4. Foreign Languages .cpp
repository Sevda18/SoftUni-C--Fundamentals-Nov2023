#include <iostream>

int main()
{
	std::string country;
	std::cin >> country;

	if (country == "USA" || country == "England")
	{
		std::cout << "English";
	}
	else if (country == "Spain" || country == "Argentina" || country == "Mexico")
	{
		std::cout << "Spanish";
	}
	else
	{
		std::cout << "unknown";
	}
}
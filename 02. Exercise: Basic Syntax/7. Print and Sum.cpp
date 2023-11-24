#include <iostream>

int main()
{
	int start, end;
	std::cin >> start >> end;
	int sum = 0;
	for (int i = start; i <= end; i++)
	{
		std::cout << i << " ";
		sum += i;
	}
	std::cout << std::endl;
	std::cout << "Sum: "<<sum;
}
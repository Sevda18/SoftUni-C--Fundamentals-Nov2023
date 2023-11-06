#include <iostream>

int  main()
{
	int num;
	std::cin >> num;
	int count = 0;
	int target = 1;
	int sum = 0;

	while (count != num)
	{
		if (target % 2 != 0)
		{
			std::cout << target << std::endl;
			sum += target;
			count++;
		}
		target++;
	}

	std::cout <<"Sum: "<< sum;
}
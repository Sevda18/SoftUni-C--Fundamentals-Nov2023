#include <iostream>

int main()
{
	std::string name;
	int age;
	double grade;

	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);
	

	std::cin >> name >> age >> grade;
	std::cout <<"Name: "<< name<<", Age: " << age <<", Grade: " << grade;
}

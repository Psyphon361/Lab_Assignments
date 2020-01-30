#include<iostream>

int main()
{
	std::cout << "Welcome to my program!" << std::endl << "Please Enter your age:" << std::endl;
	
	int yourAge;
	
	std::cin >> yourAge;
	
	std::cout << "Wow! You are " << yourAge << " years old." << std::endl;
	
	return 0;
}

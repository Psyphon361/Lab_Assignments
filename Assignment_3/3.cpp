
#include <iostream>
using namespace std;

inline int sum(int a, int b)
{
	return (a + b);
}

int main()
{
	int num1, num2;
	
	cout << "Enter two numbers:" << endl;
	cin >> num1 >> num2;
	
	cout <<  "The sum of these numbers is: " << sum(num1, num2) << endl;
	return 0;
}

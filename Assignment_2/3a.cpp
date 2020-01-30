#include<iostream>
using namespace std;

class question
{
	int num1, num2;
	
	public:
		int sum(int , int );
};

int question :: sum(int a, int b)
{
	return (a + b);
}

int main()
{
	question answer;
	int tan, psy, total;
	
	cout << "Enter two numbers:" << endl;
	cin >> tan >> psy;
	
	total = answer.sum(tan, psy);
	
	cout << endl << "Sum = " << total;
	return 0;
}

#include<iostream>
using namespace std;

class question
{
	static int x;
	
	public:
		void func(int x)
		{
			cout << "Value of static x is " << question::x << endl;
			cout << "Value of local x is " << x;
		}
};

int question::x = 5;

int main()
{
	int x = 3;
	question answer;
	
	answer.func(x);	
} 

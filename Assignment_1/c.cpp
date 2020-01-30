#include <iostream>
using namespace std;

namespace ns1
{
	int a = 3;
	int hello()
	{
		cout << "Hello!\n";
	}
}

namespace ns2
{
	int a = 6;
	int hello()
	{
		cout << "Hey!\n";
	}
}


int main()
{
	ns1 :: hello();
	ns2 :: hello();
	cout << ns1 :: a << endl;
	cout << ns2 :: a << endl;
}

#include<iostream>
using namespace std;

int variable = 10;

int main()
{
	int variable = 3;
	
	cout << "Local value of the variable is " << variable << endl;
	cout << "Global value of the variable is " << :: variable << endl;
	
	return 0;
}

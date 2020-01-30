#include<iostream>
using namespace std;

class brawl
{
	public:
		brawl();
		~brawl();
};

brawl::brawl()
{
	cout << "I am the constructor!" << endl;
}

brawl::~brawl()
{
	cout << "I am the deconstructor!" << endl;
}

int main()
{
	brawl stars;
	
	cout << "I am in the middle of the constructor and the deconstructor!" << endl;
	return 0;
}

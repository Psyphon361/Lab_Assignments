#include<iostream>
using namespace std;

class brawl
{
	public:
		int a;
		
		brawl sum(brawl obj1, brawl obj2)
		{
			brawl b;
			b.a = obj1.a + obj2.a;
			
			return b;
		}
};

int main()
{
	brawl crow, leon, sandy;
	
	crow.a = 10;
	leon.a = 15;
	//sandy.a = 0;
	
	sandy = sandy.sum(crow, leon);
	
	cout << sandy.a;
	
	return 0;
}

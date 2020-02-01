#include<iostream>
using namespace std;

class supercell
{
	public:
	void shelly();
	void colt() const;
};

void supercell::shelly()
{
	cout << "I'm the regular function\n";
}

void supercell::colt() const
{
	cout << "I'm the constant function";
}

int main()
{
	supercell coc;
	const supercell bs;
	
	coc.shelly();
	bs.colt();
}

#include<iostream>
using namespace std;

class complex
{
	float real, imaginary;
	
	public:
		void setComplex(float r, float i)
		{
			  real = r;
			  imaginary = i;
		}
	
		void displayComplex()
		{
		   cout << real << endl << imaginary << endl;
		}
		
		complex sum()
		{
			return ();
		}
};

int main()
{
	complex bucky;
	
	float real, imaginary;
	
	cout << "Enter first number's real part and then its imaginary number" << endl;
	cin >> real >> imaginary;
	
	bucky.setComplex(real, imaginary);
	
	bucky.displayComplex();
	
	cout << "Sum = " << bucky.sum() << endl;
}

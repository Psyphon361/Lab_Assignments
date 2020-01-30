#include<iostream>
using namespace std;

class complex
{
	float realPart, imagPart;
	
	public:
		void setComplex(float r, float i)
		{
			  realPart = r;
			  imagPart = i;
		}
	
		void displayComplex()
		{
			cout << realPart << " + " << imagPart << "i" << endl;
		}
		
		complex sum(complex c)
		{
			complex s;
			
			s.realPart = realPart + c.realPart;
			s.imagPart = imagPart + c.imagPart;
			
			return s;	
		}
};

int main()
{
	complex c1, c2;
	
	float real, imag;
	
	cout << "Enter first number's real and imaginary parts respectively" << endl;
	cin >> real >> imag;
	
	c1.setComplex(real, imag);
	
	cout << "Enter second number's real and imaginary parts respectively" << endl;
	cin >> real >> imag;
	
	c2.setComplex(real, imag);
	
	c1.displayComplex();
	c2.displayComplex();
	
	c2 = c2.sum(c1);
	
	c2.displayComplex();
}


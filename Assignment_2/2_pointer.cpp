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
	complex *pointerOne = &c1;
	complex *pointerTwo = &c2;
	
	float real, imag;
	
	cout << "Enter first number's real and imaginary parts respectively" << endl;
	cin >> real >> imag;
	
	pointerOne -> setComplex(real, imag);
	
	cout << "Enter second number's real and imaginary parts respectively" << endl;
	cin >> real >> imag;
	
	pointerTwo -> setComplex(real, imag);
	
	pointerOne -> displayComplex();
	pointerTwo -> displayComplex();
	
	c2 = pointerTwo -> sum(c1);
	
	pointerTwo -> displayComplex();
}


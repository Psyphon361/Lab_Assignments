#include <iostream>
using namespace std;
class Complex
{
    private:
       int real;
       int imag;
    public:
       Complex(int a=0, int b=0) 
	   {
			real=a;
			imag=b;
	   }
//       void readData()
//        {
//           cout << "Enter real and imaginary number respectively:"<<endl;
//           cin >> real >> imag;
//        }
        void addComplexNumbers(Complex comp1, Complex comp2)
        {
           // real represents the real data of object c3 because this function is called using code c3.add(c1,c2);
            real=comp1.real+comp2.real;
             // imag represents the imag data of object c3 because this function is called using code c3.add(c1,c2);
            imag=comp1.imag+comp2.imag;
        }
        void displaySum()
        {
            cout << "Sum = " << real<< "+" << imag << "i";
        }
};
int main()
{
    Complex c[3]={Complex(1,2), Complex (3)};
//    Complex c3;
//    c1.readData();
//    c2.readData();
    c[2].addComplexNumbers(c[0], c[1]);
    c[2].displaySum();
    return 0;
}

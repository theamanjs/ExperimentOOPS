#include<iostream>
using namespace std;

class ComplexNumbers
{
	private	: int real, imag;
	public	: ComplexNumbers() { }
		  ComplexNumbers(int, int);
		  ComplexNumbers operator +(ComplexNumbers);
		  ComplexNumbers operator -(ComplexNumbers);
		  ComplexNumbers operator *(ComplexNumbers);
		  ComplexNumbers operator /(ComplexNumbers);
		  void show();
};
inline ComplexNumbers :: ComplexNumbers(int realPart, int imaginaryPart)
{
	real = realPart;
	imag = imaginaryPart;
}
inline ComplexNumbers ComplexNumbers :: operator +(ComplexNumbers cn)
{
	ComplexNumbers cnum;
	cnum.real = real + cn.real;
	cnum.imag = imag + cn.imag;
	return cnum;	
}
inline ComplexNumbers ComplexNumbers :: operator -(ComplexNumbers cn)
{
	ComplexNumbers cnum;
	cnum.real = real - cn.real;
	cnum.imag = imag - cn.imag;
	return cnum;	
}
inline ComplexNumbers ComplexNumbers :: operator *(ComplexNumbers cn)
{
	ComplexNumbers cnum;
	cnum.real = (real * cn.real) - (imag * cn.imag);
	cnum.imag = (real * cn.imag) + (imag * cn.real);
	return cnum;	
}
inline ComplexNumbers ComplexNumbers :: operator /(ComplexNumbers cn)
{
	ComplexNumbers cnum;
	cnum.real = ((real * cn.real) + (imag * cn.imag)) / ((cn.real * cn.real) + (cn.imag * cn.imag));
	cnum.imag = ((imag * cn.real) - (real * cn.imag)) / ((cn.real * cn.real) - (cn.imag * cn.imag));
	return cnum;	
}
inline void ComplexNumbers :: show()
{
       	if(real != 0)
		cout<< real << "+";
	if(imag !=0)
		cout<< "i";
        if(imag != 1)
		cout<< imag;
	cout<<endl;
}
int main()
{
	int realCn1, imagCn1, realCn2, imagCn2;
	cout<< "Enter the real part of first complex number: ";
	cin>> realCn1;
	cout<< "Enter the imaginary part of first complex number: ";
	cin>> imagCn1;
	cout<< "Enter the real part of second complex number: ";
	cin>> realCn2;
	cout<< "Enter the imaginary part of second complex number: ";
	cin>> imagCn2;

	ComplexNumbers cn1(realCn1, imagCn1), cn2(realCn2, imagCn2), cn3;
	
	cout<< "The first Complex Number is ";
	cn1.show();
	cout<< "The second Complex Number is ";
	cn2.show();
	cout<< "The sum of Complex Number is ";
	cn3 = cn1 + cn2;
	cn3.show();
	cout<< "The difference of Complex Number is ";
	cn3 = cn1 - cn2;
	cn3.show();
	cout<< "The multiplication of Complex Number is ";
	cn3 = cn1 * cn2;
	cn3.show();
	cout<< "The division of Complex Number is ";
	cn3 = cn1 / cn2;
	cn3.show();
	return 0;
}

#include<iostream>
using namespace std;

class MultipleCatch
{
	public	: MultipleCatch();
};
inline MultipleCatch :: MultipleCatch()
{
	int dividend, divisor;
	try
	{
		cout<< "Enter the dividend: ";
		cin>> dividend;
		cout<< "Enter the divisor: ";
		cin>> divisor;
		float div = dividend;
		if((abs(dividend) != dividend) || (abs(divisor) != divisor))
			throw div;
		else if((dividend - divisor) == dividend)
			throw divisor;
		else
			cout<< dividend << " is divided by " << divisor << " to produce " << dividend / divisor <<endl;
	}
	catch(float div)
	{
		cout<< "The input number should be a positive integer" <<endl;
	}
	catch(int divisor)
	{
		cout<< "Any number divided by 0 produce INFINITE result" <<endl;
	}
}
int main()
{
	MultipleCatch mc;
	return 0;
}

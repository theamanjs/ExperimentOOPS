#include<iostream>
using namespace std;

class ThrowOutsideTry
{
	private	: void throwStatement(int, int);
	public	: ThrowOutsideTry(int, int);
};
inline void ThrowOutsideTry :: throwStatement(int dividend, int divisor)
{
	if((dividend - divisor) == dividend)
		throw divisor;
	else
		cout<< dividend << " is divided by " << divisor << " to produce " << dividend / divisor <<endl;

}
inline ThrowOutsideTry :: ThrowOutsideTry(int dividend, int divisor)
{
	try
	{
		throwStatement(dividend, divisor);
	}
	catch(int divisor)
	{
		cout<< "Any number divided by 0 produce INFINITE result" <<endl;
	}
}
int main()
{
	int dividend, divisor;
	cout<< "Enter the dividend: ";
	cin>> dividend;
	cout<< "Enter the divisor: ";
	cin>> divisor;
	ThrowOutsideTry tot(dividend, divisor);
	return 0;
}

#include<iostream>
using namespace std;

class ThrowInsideTry
{
	public	: ThrowInsideTry(int, int);
};
inline ThrowInsideTry :: ThrowInsideTry(int dividend, int divisor)
{
	try
	{
		if((dividend - divisor) == dividend)
			throw divisor;
		else
			cout<< dividend << " is divided by " << divisor << " to produce " << dividend / divisor <<endl;
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
	ThrowInsideTry tit(dividend, divisor);
	return 0;
}

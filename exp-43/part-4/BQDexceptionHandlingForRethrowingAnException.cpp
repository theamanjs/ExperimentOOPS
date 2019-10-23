#include<iostream>
using namespace std;

class RethrowException
{
	private	: void throwStatement(int, int);
	public	: RethrowException(int, int);
};
inline void RethrowException :: throwStatement(int dividend, int divisor)
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
		cout<< "Cause Exception In function block\nAny number divided by 0 produce INFINITE result" <<endl;
		throw;
	}
}
inline RethrowException :: RethrowException(int dividend, int divisor)
{
	try
	{
		throwStatement(dividend, divisor);
	}
	catch(int divisor)
	{
		cout<< "Cause Exception In parent Try block\nAny number divided by 0 produce INFINITE result" <<endl;
	}
}
int main()
{
	int dividend, divisor;
	cout<< "Enter the dividend: ";
	cin>> dividend;
	cout<< "Enter the divisor: ";
	cin>> divisor;
	RethrowException re(dividend, divisor);
}

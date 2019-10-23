#include<iostream>
using namespace std;

class SingleCatch
{
	public	: SingleCatch();
};
inline SingleCatch :: SingleCatch()
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
	catch(...)
	{
		cout<< "EITHER, The input number never be a negative integer, OR, Any number divided by 0 produce INFINITE result" <<endl;
	}
}
int main()
{
	SingleCatch sc;
	return 0;
}

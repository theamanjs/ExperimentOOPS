#include<iostream>
using namespace std;

class SpecifyingException
{
	private	: void checkType(int) throw(int, double);
	public	: SpecifyingException();
};
inline void SpecifyingException :: checkType(int num) throw(int, double)
{
	if(num == 1)
		throw 'A';  //Never throw because there is only specification for int and double exception
	else if(num == 2)
		throw 1;
	else if(num == 3)
		throw 1.0;
}
inline SpecifyingException :: SpecifyingException()
{
	try
	{
		cout<< "For 1\n";
		checkType(1);
		cout<< "For 2\n";
		checkType(2);
		cout<< "For 3\n";
		checkType(3);
	}
	catch(char character)
	{
		cout<< "Caught a character exception" <<endl;
	}
	catch(int integer)
	{
		cout<< "Caught an integer exception" <<endl;
	}
	catch(double floater)
	{
		cout<< "Caught a double exception" <<endl;
	}
}
int main()
{
	SpecifyingException se;
	return 0;
}

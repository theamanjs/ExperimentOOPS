#include<iostream>
using namespace std;

class FirstClass
{
	private : string str;
	public	: string getString();
};
inline string FirstClass :: getString()
{
	cout<< "Enter the string: ";
	cin>> str;
	cout<< "FirstClass String: " << str <<endl;
	return str; 	
}
class SecondClass
{
	private	: string str;
	public	: void operator =(FirstClass);
};
inline void SecondClass :: operator =(FirstClass fc)
{
	str = fc.getString();
	cout<< "SecondClass String: " << str <<endl;
}
int main()
{
	FirstClass fc;
	SecondClass sc;
	sc = fc;
	return 0;
}

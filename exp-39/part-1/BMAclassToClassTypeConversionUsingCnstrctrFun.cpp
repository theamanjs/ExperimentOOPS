#include<iostream>
using namespace std;

class FirstClass
{
	private	: string str;
	public	: FirstClass() { }
		  FirstClass(string);
		  string getString();
};
inline FirstClass :: FirstClass(string s)
{
	str = s;
	cout<< "FirstClass String: " << str <<endl;
}
inline string FirstClass :: getString()
{
	return str;
}
class SecondClass
{
	private	: string str;
	public	: SecondClass() { };
		  SecondClass(FirstClass);
};
inline SecondClass :: SecondClass(FirstClass fc)
{
	str = fc.getString();
	cout<< "SecondClass String: " << str <<endl;
}
int main()
{
	string str;
	cout<< "Enter the string: ";
	cin>> str;
	FirstClass fc(str);
	SecondClass sc = FirstClass(fc);
	return 0;	
}

#include<iostream>
using namespace std;

class PrefixPostfix
{
	private	: int num1, num2;
		  void input();
		  void display();
	public	: void operator ++();
};
inline void PrefixPostfix :: input()
{
	cout<< "Enter the first number: ";
	cin>> num1;
	cout<< "Enter the second number: ";
	cin>> num2;
}
inline void PrefixPostfix :: display()
{
	cout<< "First Number: " << num1  << "\tSecond Number: " << num2 <<endl;
}
inline void PrefixPostfix :: operator ++()
{
	input();
	display();
	cout<< "\nAfter Prefix operation on second number and assign it on first one,\n";
	num1 = ++num2;
	display();
	cout<< "\nAfter Postfix operation on second number and assign it on first one,\n";
	num1 = num2++;
	display();
}
int main()
{
	PrefixPostfix pp;
	++pp;
	return 0;
}

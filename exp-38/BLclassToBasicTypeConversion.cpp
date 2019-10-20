#include<iostream>
using namespace std;

class ClassToBasic
{
	private	: int num1, num2;
	public	: ClassToBasic();
		  operator int();
};
inline ClassToBasic :: ClassToBasic()
{
	cout<< "Enter the first number: ";
	cin>> num1;
	cout<< "Enter the second number: ";
	cin>> num2;
}
inline ClassToBasic :: operator int()
{
	return num1 + num2;
}
int main()
{
	ClassToBasic ctb;
	int sum = ctb.operator int();
	cout<< "Sum is " << sum <<endl;
	return 0;

}

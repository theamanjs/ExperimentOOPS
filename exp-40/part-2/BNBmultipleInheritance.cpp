#include<iostream>
using namespace std;

class FirstClass
{
	protected : int num1;
		    void inputNum1();
};
inline void FirstClass :: inputNum1()
{
	cout<< "Enter the first number: ";
	cin>> num1;
}
class SecondClass
{
	protected : int num2;
		    void inputNum2();
};
inline void SecondClass :: inputNum2()
{
	cout<< "Enter the second number: ";
	cin>> num2;
}
class ThirdClass : public FirstClass, public SecondClass
{
	public	: void sum();
};
inline void ThirdClass :: sum()
{
	inputNum1();
	inputNum2();
	cout<< "Sum of " << num1 << " and " << num2 << " is " << num1 + num2 <<endl;
}
int main()
{
	ThirdClass tc;
	tc.sum();
	return 0;
}

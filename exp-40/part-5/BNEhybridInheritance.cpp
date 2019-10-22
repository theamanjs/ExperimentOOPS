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
	protected : int sums;
		    void sum();
};
inline void ThirdClass :: sum()
{
	inputNum1();
	inputNum2();
	sums = num1 + num2;
	cout<< "Sum of " << num1 << " and " << num2 << " is " << sums <<endl;
}
class FourthClass : public ThirdClass
{
	public	: void factorial();
};
inline void FourthClass :: factorial()
{
	sum();
	int fact = 1;
	for(int count = 1; count <= sums; count++)
		fact *= count;
	cout<< "Factorial of sum(" << sums << ") of " << num1 << " and " << num2 << " is " << fact <<endl;	
}
int main()
{
	FourthClass fc;
	fc.factorial();
	return 0;
}

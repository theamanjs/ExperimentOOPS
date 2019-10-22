#include<iostream>
using namespace std;

class FirstClass
{
	protected : int num1, num2;
		    void input();
	public	  : void sum();
};
inline void FirstClass :: input()
{
	cout<< "Enter the first number: ";
	cin>> num1;
	cout<< "Enter the second number: ";
	cin>> num2;
}
inline void FirstClass :: sum()
{
	cout<< "For sum," <<endl;
	input();
	cout<< "Sum of " << num1 << " and " << num2 << " is " << num1 + num2 <<endl;
}
class SecondClass : public FirstClass
{
	public	: void difference();
};
inline void SecondClass :: difference()
{
	cout<< "For difference," <<endl;
	input();
	cout<< "Difference between " << num1 << " and " << num2 << " is " << num1 - num2 <<endl;
}
class ThirdClass : public SecondClass
{
	public	: void modulous();
};
inline void ThirdClass :: modulous()
{
	cout<< "For modulous," <<endl;
	input();
	cout<< "Modulous of " << num1 << " and " << num2 << " is " << num1 % num2 <<endl;
}
int main()
{
	ThirdClass tc;
	tc.sum();
	tc.difference();
	tc.modulous();
	return 0;
}

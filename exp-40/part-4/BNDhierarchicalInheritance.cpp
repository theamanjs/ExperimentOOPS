#include<iostream>
using namespace std;

class FirstClass
{
	protected : int num1, num2;
		    void input();
};
inline void FirstClass :: input()
{
	cout<< "Enter the first number: ";
	cin>> num1;
	cout<< "Enter the second number: ";
	cin>> num2;
}
class SecondClass : public FirstClass
{
	public	: void sum();
};
inline void SecondClass :: sum()
{
	cout<< "For sum," <<endl;
	input();
	cout<< "Sum of " << num1 << " and " << num2 << " is " << num1 + num2 <<endl;
}
class ThirdClass : public FirstClass
{
	public	: void difference();
};
inline void ThirdClass :: difference()
{
	cout<< "For difference," <<endl;
	input();
	cout<< "Difference between " << num1 << " and " << num2 << " is " << num1 - num2 <<endl;
}
class FourthClass : public FirstClass
{
	public	: void modulous();
};
inline void FourthClass :: modulous()
{
	cout<< "For modulous," <<endl;
	input();
	cout<< "Modulous of " << num1 << " and " << num2 << " is " << num1 % num2 <<endl;
}
int main()
{
	SecondClass sc;
	ThirdClass tc;
	FourthClass fc;
	sc.sum();
	tc.difference();
	fc.modulous();
	return 0;
}

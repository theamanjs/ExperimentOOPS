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
//virtual keyword is used to remove ambiguity
class SecondClass : virtual public FirstClass
{
	public	: void sum();
};
inline void SecondClass :: sum()
{
	cout<< "For sum," <<endl;
	input();
	cout<< "Sum of " << num1 << " and " << num2 << " is " << num1 + num2 <<endl;
}
//virtual keyeord is used to remove ambiguity
class ThirdClass : virtual public FirstClass
{
	public	: void difference();
};
inline void ThirdClass :: difference()
{
	cout<< "For difference," <<endl;
	input();
	cout<< "Difference between " << num1 << " and " << num2 << " is " << num1 - num2 <<endl;
}
class FourthClass : public SecondClass, public ThirdClass
{
	public	: void modulous();
};
inline void FourthClass :: modulous()
{
	input();
	cout<< "Modulous of " << num1 << " and " << num2 << " is " << num1 % num2 <<endl;
}
int main()
{
	FourthClass fc;
	fc.sum();
	fc.difference();
	fc.modulous();
	return 0;
}

#include<iostream>
using namespace std;

class AbstractClass
{
	public	: virtual void input();
		  //Pure Virtual Function
		  virtual void swap() = 0;
};
inline void AbstractClass :: input()
{
	cout<< "This is a Virtual Function in an Abstract Class" <<endl;
}
class VirtualFunction : public AbstractClass
{
	private	: int num1, num2;
	public	: void input();
		  void swap();
};
inline void VirtualFunction :: input()
{
	cout<< "Enter first number: ";
	cin>> num1;
	cout<< "Enter second number: ";
	cin>> num2;
	cout<< "Before swapping, numbers are " << num1 << " and " << num2 <<endl;
}
inline void VirtualFunction :: swap()
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout<< "After swapping, numbers are " << num1 << " and " << num2 <<endl;
}
int main()
{
	AbstractClass *ac;
	VirtualFunction vf;
	ac = &vf;
	ac->input();
	ac->swap();
	return 0;
}

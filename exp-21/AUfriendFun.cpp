#include<iostream>
using namespace std;

class Second;
class First
{
	private	: int firstNum;
		  void input();
	public	: friend void sum(First f, Second s); 
};
class Second
{
	private	: int secondNum;
		  void input();
	public	: friend void sum(First f, Second s);
};
inline void First :: input()
{
	cout<< "Enter the first number: ";
       	cin>> firstNum;	
}
inline void Second :: input()
{
	cout<< "Enter the second number: ";
	cin>> secondNum;
}
void sum(First f, Second s)
{
	f.input();
	s.input();
	cout<< "Sum of " << f.firstNum << " and " << s.secondNum << " is " << f.firstNum + s.secondNum <<endl;
}
int main()
{
	First f;
	Second s;
	sum(f,s);
	return 0;
}

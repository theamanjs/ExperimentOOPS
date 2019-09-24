#include<iostream>

using namespace std;
class PrintAnyNumber
{
	private	: int num;
		  void input();
	public	: void display();	
};
inline void PrintAnyNumber :: input()
{
	cout<< "Enter any number:\n";
	cin>> num;
}
inline void PrintAnyNumber :: display()
{
	input();
	cout<< "Your entered number is " << num <<endl;
}
int main()
{
	PrintAnyNumber pan;
	pan.display();
	return 0;
}

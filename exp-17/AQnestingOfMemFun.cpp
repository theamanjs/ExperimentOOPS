#include<iostream>

using namespace std;
class Nesting
{
	private	: int num;
		  void input();
	public	: void factDisplay();
};
inline void Nesting :: input()
{
	cout<< "Enter number:\n";
	cin>> num;
}
inline void Nesting :: factDisplay()
{
	input();
	int fact = 1;
	for(int count = 1; count <= num; count++)
	{
		fact *= count;
	}
	cout<< "Factorial of " << num << " is " << fact <<endl;
}
int main()
{
	Nesting nest;
	nest.factDisplay();
	return 0;
}

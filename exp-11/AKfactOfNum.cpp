#include<iostream>

using namespace std;
class Factorial
{
	private	: int num;
		  void input();
	public	: void factDisplay();
};
inline void Factorial :: input()
{
	cout<< "Enter number:\n";
	cin>> num;
}
inline void Factorial :: factDisplay()
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
	Factorial fact;
	fact.factDisplay();
	return 0;
}

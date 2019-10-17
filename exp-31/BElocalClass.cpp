#include<iostream>
using namespace std;

void publicFunction()
{
	class LocalClass
	{
		public	: LocalClass()
			  {
				  int num1, num2;
				  cout<< "Enter the first number: ";
				  cin>> num1;
				  cout<< "Enter the second number: ";
				  cin>> num2;
				  int fact1 = 1, fact2 = 1;
				  for(int counter = 1; counter <= num1; counter++)
					  fact1 *= counter;
				  for(int counter = 1; counter <= num2; counter++)
					  fact2 *= counter;
				  cout<< "Sum of factorial of " << num1 << " and " << num2 << " is " << fact1 + fact2 <<endl;
			  }
	};
	LocalClass lc;
}
int main()
{
	publicFunction();
	return 0;
}

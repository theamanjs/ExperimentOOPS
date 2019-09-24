#include<iostream>
using namespace std;

class Constructors
{
	private	: int fact;
		  int factorial(int num); 
	public	: Constructors()
		  {
			fact = factorial(5);
			cout<< "In case of Default Constructor,\nFactorial of 5 is " << fact <<endl;
		  }
		  Constructors(int num)
		  {
			fact = factorial(num);
			cout<< "In case of Parameterised Constructor,\nFactorial of " << num << " is " << fact <<endl;
		  }
		  Constructors(Constructors &cons)
		  {			  
			  fact = cons.fact;
			  cout<< "In case of Copy Constructor,\nFactorial of 5 is " << fact <<endl; 
		  }
};
inline int Constructors :: factorial(int num)
{
	int fact = 1;
	for(int count = 1; count <= num; count++)
	{
		fact *= count;
	}
	return fact;
}
int main()
{
	Constructors consD;
	Constructors consP(6);
	Constructors consC(consD);
	return 0;
}

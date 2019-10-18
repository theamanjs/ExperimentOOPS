#include<iostream>
using namespace std;

class Constructors
{
	private	: int fact;
		  int factorial(int num); 
	public	: //Default Constructor
		  Constructors()
		  {
			fact = factorial(5);
			cout<< "In case of Default Constructor,\nFactorial of 5 is " << fact <<endl;
		  }
		  //Parameterised Constructor
		  Constructors(int num)
		  {
			fact = factorial(num);
			cout<< "In case of Parameterised Constructor,\nFactorial of " << num << " is " << fact <<endl;
		  }
		  //Copy Constructor
		  Constructors(Constructors &cons)
		  {			  
			  fact = cons.fact;
			  cout<< "In case of Copy Constructor,\nFactorial of 5 is " << fact <<endl; 
		  }
		  Constructors(float num)
		  {
			  int *ptr;
			  ptr = new int;
			  *ptr = (int)num;
			  cout<< "In case of Dynamic Constructor,\nFactorial of "<< *ptr << " is 1" <<endl;
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
	Constructors consDef;
	Constructors consPara(6);
	Constructors consCpy(consDef);
	Constructors consDyn(0.6f);
	cout<< "All different types of constructors are overloaded in the program" <<endl;
	return 0;
}

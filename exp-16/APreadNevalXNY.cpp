#include<iostream>

using namespace std;
class Evaluate
{
	private	: int x;
		  void input();
	public	: void evaluate();
};
inline void Evaluate :: input()
{
	cout<< "Enter the value of X:\n";
	cin>> x;
}
inline void Evaluate :: evaluate()
{
	input();
	if(x > 0)
		cout<< "Y = 2 for X = " << x <<endl;
	else if(x == 0)
		cout<< "Y = 0 for X = " << x <<endl;	
}
int main()
{
	Evaluate eval;
	eval.evaluate();
	return 0;
}

#include<iostream>
using namespace std;

class PossibleReverseOfAbsolute
{
	private	: unsigned int posNum;
		  int  negNum;
		  void input();
	public	: void operator -();
		  void display();
};
inline void PossibleReverseOfAbsolute :: input()
{
	cout<< "Enter any positive number through which you want to find the combination, from which the entered number was absoluted: ";
	cin>> posNum;
}
inline void PossibleReverseOfAbsolute :: operator -()
{
	input();
	negNum = -posNum;
}
inline void PossibleReverseOfAbsolute :: display()
{
	cout<< "The absolute value i.e. " << posNum << " can be obtain either from |" << posNum << "| or |" << negNum << "|" <<endl;
}
int main()
{
	PossibleReverseOfAbsolute psa;
	-psa;
	psa.display();
	return 0;
}

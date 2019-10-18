#include<iostream>
#include<cstring>
using namespace std;

class ASCIIcode
{
	private	: char* character;
	public	: ASCIIcode();
		  ~ASCIIcode();
};
inline ASCIIcode :: ASCIIcode()
{
	character = new char;
     	cout<< "Enter any character: ";
 	cin>> *character;
	cout<< "ASCII conversion of " << *character << " is " << (int)*character <<endl;		
}
inline ASCIIcode :: ~ASCIIcode()
{
	delete character;
}
int main()
{
	ASCIIcode ascii;
}

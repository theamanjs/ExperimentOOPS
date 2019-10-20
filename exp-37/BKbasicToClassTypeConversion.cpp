#include<iostream>
using namespace std;

class BasicToClass
{
	public	: BasicToClass(int);
};
inline BasicToClass :: BasicToClass(int num)
{
	int fact = 1;
	for(int count = 1; count <= num; count++)
		fact *= count;
	cout<< "Factorial of " << num << " is " << fact <<endl;
}
int main()
{
	int num;
	cout<< "Enter any number: ";
	cin>> num;
	BasicToClass btc = num;
	return 0;
}

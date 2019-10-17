#include<iostream>
using namespace std;

class FunctionOverloading
{
	public	: int sum(int, int);
		  float sum(float,float);
		  float sum(int, float);
};
inline int FunctionOverloading :: sum(int a, int b)
{
	cout<< "The sum of " << a << " and " << b << " is ";
	return a+b;
}
inline float FunctionOverloading :: sum(float a, float b)
{
	cout<< "The sum of " << a << " and " << b << " is ";
	return a+b;
}
inline float FunctionOverloading :: sum(int a, float b)
{
	cout<< "The sum of " << a << " and " << b << " is ";
	return a+b;
}
int main()
{
	FunctionOverloading fo;
	cout<< fo.sum(10, 12) <<endl;
	cout<< fo.sum(12.35f, 32.069f) <<endl;
	cout<< fo.sum(11, 21.305f) <<endl;
	return 0;
}	

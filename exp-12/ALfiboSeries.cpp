#include<iostream>

using namespace std;
class FibonacciSeries
{
	private	: int num;
	public	: void printFibonacciSeries();
};
inline void FibonacciSeries :: printFibonacciSeries()
{
	cout<< "Fibonacci Series of Level 10\n";
	for(int res, num1 = 0, num2 = 1, count = 1; count <= 10; count++)
	{
		res = num1 + num2;
		cout<< num1 << "\t+\t" << num2 << "\t=\t" << res <<endl;
		num1 = num2;
		num2 = res;
	}
}
int main()
{
	FibonacciSeries fs;
	fs.printFibonacciSeries();
	return 0;
}

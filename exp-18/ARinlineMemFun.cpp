#include<iostream>

using namespace std;
class Inline
{
	private	: int num;
	public	: void printFibonacciSeries();
};
inline void Inline :: printFibonacciSeries()
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
	Inline fs;
	fs.printFibonacciSeries();
	return 0;
}

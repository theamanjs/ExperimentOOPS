#include<iostream>

using namespace std;
class Functions
{
	private	: int numIn;
	public	: void inputNum(int num);
		  void printFibonacciSeries();
};
inline void Functions :: inputNum(int num)
{
	numIn = num;
}
inline void Functions :: printFibonacciSeries()
{
	for(int res, num1 = 0, num2 = 1, count = 1; count <= numIn; count++)
	{
		res = num1 + num2;
		cout<< num1 << "\t+\t" << num2 << "\t=\t" << res <<endl;
		num1 = num2;
		num2 = res;
	}
}
int main()
{
	Functions fn;
	int num;
	cout<< "Enter level of Fibonacci Series:\n";
	cin>> num;
	fn.inputNum(num);
	fn.printFibonacciSeries();
	return 0;
}

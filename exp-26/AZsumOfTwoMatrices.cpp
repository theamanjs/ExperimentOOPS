#include<iostream>
using namespace std;

class SumOfTwoMatrices
{
	private	: int row, col, first[10][10], second[10][10], sum[10][10];
	public	: SumOfTwoMatrices();
		  void sumAndDisplay();
};
inline SumOfTwoMatrices :: SumOfTwoMatrices() 
{
       	cout<< "Enter the row of matrx: ";
      	cin>> row;
	cout<< "Enter the coloumn of matrix: ";
	cin>> col;
	cout<< "Enter the first matrix:\n";
	for(int countR = 0; countR < row; countR++)
		for(int countC = 0; countC < col; countC++)
			cin>> first[countR][countC];
	cout<< "Enter the second matrix:\n";
	for(int countR = 0; countR < row; countR++)
		for(int countC = 0; countC < col; countC++)
			cin>> second[countR][countC];
}
inline void SumOfTwoMatrices :: sumAndDisplay()
{
	for(int countR = 0; countR < row; countR++)
		for(int countC = 0; countC < col; countC++)
			sum[countR][countC] = first[countR][countC] + second[countR][countC];
	cout<< "The sum of two matrices is,\n\n\n";
	for(int countR = 0; countR < row; countR++)
	{
		for(int countC = 0; countC < col; countC++)
		{
			cout<< sum[countR][countC];
			cout<< "\t";
		}
		cout<<endl;
	}
}
int main()
{
	SumOfTwoMatrices stm;
	stm.sumAndDisplay();
	return 0;
}

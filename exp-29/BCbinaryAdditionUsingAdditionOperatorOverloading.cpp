#include<iostream>
using namespace std;

class BinaryAddition
{
	private	: int binNum;
	public	: BinaryAddition() { }
		  BinaryAddition(int);
		  int show();
		  BinaryAddition operator +(BinaryAddition);
};
inline BinaryAddition :: BinaryAddition(int bin)
{
	binNum = bin;
}
inline int BinaryAddition :: show()
{
	return binNum;
}
inline BinaryAddition BinaryAddition :: operator +(BinaryAddition ba)
{
	BinaryAddition badd;
	int count = 0, carry = 0, bin1 = binNum, bin2 = ba.binNum, sum[50];
	
	while((bin1 != 0) || (bin2 != 0))
	{
		sum[count++] = ((bin1 % 10) + (bin2 % 10) + carry) % 2;
		carry = ((bin1 % 10) + (bin2 % 10) + carry) / 2;
		bin1 /= 10;
		bin2 /= 10;
	}

	if(carry != 0)
		sum[count++] = carry;
	
	count--;
	int add = 0;
	
	while(count != 0)
	{
		int counter = count - 1, product = 1;
		while(counter != 0)
		{
			product *= 10;
			counter--;
		}
		add += sum[count--] * product;
	}
	
	badd.binNum = add;
	return badd;	
}
int main()
{
	int binNum1, binNum2;;
	cout<< "Enter the first binary number: ";
	cin>> binNum1;
	cout<< "Enter the second binary number: ";
	cin>> binNum2;

	BinaryAddition ba1(binNum1), ba2(binNum2), ba3;
	ba3 = ba1 + ba2;

	cout<< "The sum of " << ba1.show() << " and " << ba2.show() << " is " << ba3.show() <<endl;
	return 0;
}

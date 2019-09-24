#include<iostream>

using namespace std;
int main()
{
	for(int num = 1; num <= 1000; num++)
	{
		int sum = 0, counter = 0, div = num, rem;
		do
		{
			//to check digit in numbers
			int tempDiv = num;
			while(tempDiv != 0)
			{
				tempDiv = tempDiv / 10;
				counter++;
			}		

			//to split last digit of numbers
			rem = div % 10;
			div = div / 10;

			//to calculate product
			int pro = 1;
			while(counter != 0)
			{
				pro *= rem;
				counter--;
			}
			
			//sum of the product
			sum += pro;
		}
		while(div != 0);
		
		//print Armstrong Numbers
		(num == sum) ? cout<< num <<endl : cout<< "";
	}
	return 0;
}

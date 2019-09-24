#include<iostream>

using namespace std;
class TwoCompliment
{
	private	: int binary;
		  void input();
		  int findArrayLen();  
	public	: void genTwoCompliment();
};
inline void TwoCompliment :: input()
{
	cout<< "Enter the binary number:\n";
	cin>> binary;
}
inline int TwoCompliment :: findArrayLen()
{
	input();
	int div = binary, counter = 0;
	while(div != 0)
	{
		div /= 10;
		counter++;
	}
	return counter;
}
inline void TwoCompliment :: genTwoCompliment()
{
	int counter = findArrayLen();
	int bin[counter], div = binary;
	bool check = false;
	for(int counts = 0; counts < counter; counts++)
	{
		bin[counts] = div % 10;
		div /= 10;
		if(check == true)
		{
			(bin[counts] == 0) ? bin[counts] = 1 : bin[counts] = 0;
		}
		if(bin[counts] == 1)
			check = true;
	}
	for(int counts = counter-1; counts >= 0; counts--)
		cout<< bin[counts];
	cout<<endl;
}
int main()
{
	TwoCompliment tc;
	tc.genTwoCompliment();
	return 0;
}

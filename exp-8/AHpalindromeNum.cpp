#include<iostream>
using namespace std;

int main(){
	int inNum,reNum,reverse = 0;
	cout<<"Enter your number:\n";
	cin>>inNum;
	reNum = inNum;
	while(inNum != 0)
	{
		reverse = reverse*10 + inNum%10;
		inNum = inNum/10;
	}
	(reverse == reNum) ? cout<< reNum << " is Palindrome\n" : cout<< reNum << " is not Palindrome\n"; 
	return(0);
}

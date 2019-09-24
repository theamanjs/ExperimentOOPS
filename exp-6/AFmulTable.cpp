#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter your number:\n";
	cin>>num;
	cout<< "Table of " << num <<endl;
	for(int count=1; count <= 10; count++)
	{
		cout<< num << " X " << count << " = " << num*count <<endl;
	}
	return(0);
}

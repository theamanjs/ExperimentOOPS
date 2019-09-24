#include<iostream>
using namespace std;

int main(){
	int num1,num2;
	cout<<"Enter first number:\n";
	cin>>num1;
	cout<<"Enter second number:\n";
	cin>>num2;
	cout<<"The "<<num1<<" and "<<num2; 
	num1=num1+num2;
	num2=-num2+num1;
	num1=num1-num2;
	cout<<" is interchanged as "<<num1<<" and "<<num2<<endl;
	return(0);
}

#include<iostream>
#define pi 3.14
using namespace std;

int main(){
	int radius;
	cout<<"Enter radius of circle:\n";
	cin>>radius;
	cout<<"Circumference of circle of radius("<< radius <<")is "<< 2*pi*radius <<endl;
	cout<<"Area of circle of radius("<< radius <<")is "<< pi*radius*radius <<endl;
	return(0);
}

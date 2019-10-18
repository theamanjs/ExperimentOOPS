#include<iostream>
using namespace std;

class Statics
{
	private	: int count = 0;
		  static int counter;
	public 	: void changeInNormalVariable(int num);
		  static void changeInStaticVariable(int num);
};
inline void Statics :: changeInNormalVariable(int num)
{
	count++;
	cout<< "'s" << num << "' object of Statics class calling normal member function\t" << count <<endl;
}
// static variable define using className
int Statics :: counter = 0;
inline void Statics :: changeInStaticVariable(int num)
{
	counter++;
	if(num != 0)
		cout<< "'s" << num << "' object of Statics class calling static member function\t";
       	cout<< counter <<endl;
}
int main()
{
	Statics s1, s2, s3;
	s1.changeInNormalVariable(1);
	s2.changeInNormalVariable(2);
	s3.changeInNormalVariable(3);
	s1.changeInStaticVariable(1);
	s2.changeInStaticVariable(2);
	s3.changeInStaticVariable(3);
	cout<< "Static member function called through className\t";
	Statics :: changeInStaticVariable(0);
	return 0;
}

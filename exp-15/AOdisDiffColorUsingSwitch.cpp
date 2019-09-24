#include<iostream>

using namespace std;
class ColorUsingSwitch
{
	private	: int clrCode;
		  void input();
	public	: void display();
};
inline void ColorUsingSwitch :: input()
{
	cout<< "Enter color code:\n";
	cout<< "1 for White\n";
	cout<< "2 for Violet\n";
	cout<< "3 for Indigo\n";
	cout<< "4 for Blue\n";
	cout<< "5 for Green\n";
	cout<< "6 for Yellow\n";
	cout<< "7 for Orange\n";
	cout<< "8 for Red\n";
	cout<< "9 for Black\n";
	cout<< "\nEnter your choice:\n";
	cin>> clrCode;
}
inline void ColorUsingSwitch :: display()
{
	input();
	switch(clrCode)
	{
		case 1:
			cout<< "Your choice is White\n";
			break;
		case 2:
			cout<< "Your choice is Violet\n";
			break;
		case 3:
			cout<< "Your choice is Indigo\n";
			break;
		case 4:
			cout<< "Your choice is Blue\n";
			break;
		case 5:
			cout<< "Your choice is Green\n";
			break;
		case 6:
			cout<< "Your choice is Yellow\n";
			break;
		case 7:
			cout<< "Your choice is Orange\n";
			break;
		case 8:
			cout<< "Your choice is Red\n";
			break;
		case 9:
			cout<< "Your choice is Black\n";
			break;
				
	
	}
}
int main()
{
	ColorUsingSwitch cus;
	cus.display();
	return 0;
}

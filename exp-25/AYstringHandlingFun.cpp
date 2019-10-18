#include<iostream>
#include<cstring>
using namespace std;

class StringHandling
{
	private	: void stringCopy();
		  void stringConcatinate();
		  void stringLength();
		  void stringCompare();
		  void stringClearAndEmpty();
		  void reCall();
	public	: void switchCases();
};
inline void StringHandling :: switchCases()
{
	int input;
	cout<< "Enter 1 to perform strcpy()\n";
	cout<< "Enter 2 to perform strcat()\n";
	cout<< "Enter 3 to perform strlen()\n";
	cout<< "Enter 4 to perform strcmp()\n";
	cout<< "Enter 5 to perform clear() and empty()\n";
	cout<< "\nEnter your choice: ";
	cin>> input;
	switch(input)
	{
		case 1:
			stringCopy();
			break;
		case 2:
			stringConcatinate();
			break;
		case 3:
			stringLength();
			break;
		case 4:
			stringCompare();
			break;
		case 5:
			stringClearAndEmpty();
			break;
		default:
			cout<< "Wrong choice, Please choose correctly\n\n";
			switchCases();

	}
}
inline void StringHandling :: stringCopy()
{	
	char strOrg[100], strCpd[100];
	cout<< "Enter the String without spaces: ";
	cin>> strOrg;
	strcpy(strCpd,strOrg);
	cout<< "Original String: " << strOrg <<endl;
	cout<< "Copied String: " << strCpd << endl;
	reCall();
}
inline void StringHandling :: stringConcatinate()
{
	char strFirst[100], strSecond[100];
	cout<< "Enter the first string: ";
	cin>> strFirst;
	cout<< "Enter the second string: ";
	cin>> strSecond;
	strcat(strFirst,strSecond);
	cout<< "The string after concatination is " << strFirst <<endl;
	reCall();
}
inline void StringHandling :: stringLength()
{
	string str;
	cout<< "Enter the string without spaces: ";
	cin>> str;
	cout<< "Using array of character as string, length of string is " << strlen(str.c_str()) <<endl;
	//c.str() is used to convert string object into array of characters
	cout<< "Using string object as string, length of string is " << str.length() <<endl;
	reCall();
}
inline void StringHandling :: stringCompare()
{
	char strFirst[100], strSecond[100];
	int ret;
	cout<< "Enter the first string: ";
	cin>> strFirst;
	cout<< "Enter the second string: ";
	cin>> strSecond;
	ret = strcmp(strFirst,strSecond);
	if(ret > 0)
		cout<< strFirst << " is grater than " << strSecond <<endl;
	else if(ret < 0)
		cout<< strFirst << " is less than " << strSecond <<endl;
	else
		cout<< strFirst << " and " << strSecond << " are equals" <<endl;	
	reCall();
}
inline void StringHandling :: stringClearAndEmpty()
{
	string str;
	cout<< "Enter the string: ";
	cin>> str;
	(str.empty()) ? cout<< "String is empty\n" : cout<< "String is not empty\n";
	str.clear();
	cout<< "After clearing, the string is " << str <<endl;
	(str.empty()) ? cout<< "String is empty\n" : cout<< "String is not empty\n";
	reCall();	
}
inline void StringHandling :: reCall()
{
	int choice;
	cout<< "If you want to choose more choice, press 0\n";
	cin>> choice;
	if(choice == 0)
		switchCases();
}
int main()
{
	StringHandling sh;
	sh.switchCases();
	return 0;
}

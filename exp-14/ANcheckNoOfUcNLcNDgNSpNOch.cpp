#include<iostream>
#include<cstring>

using namespace std;
class CountAlphaNumeric
{
	private	: char str[100];
		  void input();
	public	: void countAlphaNumeric();
};
inline void CountAlphaNumeric :: input()
{
	cout<< "Enter the String:\n";
	cin.get(str,100,'\n');
}
inline void CountAlphaNumeric :: countAlphaNumeric()
{
	input();
	int countUc = 0, countLc = 0, countDg = 0, countSp = 0, countOch = 0;
	for(int count = 0; count < strlen(str); count++)
	{
		if(((str[count] >= 33) && (str[count] <= 47)) || ((str[count] >= 58) && (str[count] <= 64)) || ((str[count] >= 91) && (str[count] <= 96)) || ((str[count] >= 123) && (str[count] <= 126)))
			countOch++;
		else if((str[count] >= 48) && (str[count] <= 57))
			countDg++;
		else if((str[count] >= 65) && (str[count] <= 90))
			countUc++;
		else if((str[count] >= 97) && (str[count] <= 122))
			countLc++;
		else if(str[count] == 32)
			countSp++;
	}
	cout<< "UpperCase\t" << countUc << endl;
       	cout<< "LowerCase\t" << countLc << endl;
	cout<< "Digit\t\t" << countDg << endl;
	cout<< "Space\t\t" << countSp << endl;
	cout<< "Others\t\t" << countOch << endl;
}
int main()
{
	CountAlphaNumeric can;
	can.countAlphaNumeric();
	return 0;
}

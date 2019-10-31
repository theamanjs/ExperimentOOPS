#include<iostream>
#include<cstring>
using namespace std;

class BankingSystem
{
	private	: int count = 0;
		  string aUser = "admin";
		  string aPsw = "@admin";
		  string cust[4][50];
		  void logIn();
		  void adminSwitch();
		  void addCustomer();
		  void dipAmount();
		  void withAmount();
		  void displayCustomer();
	public	: BankingSystem();
};
inline BankingSystem :: BankingSystem()
{
	logIn();
}
inline void BankingSystem :: logIn()
{
	string uName, uPsw;
	cout<< "Enter the UserName: ";
	cin>> uName;
	cout<< "Enter the Password: ";
	cin>> uPsw;
	if((uName.compare(aUser) == 0) && (uPsw.compare(aPsw) == 0))
	{
		adminSwitch();
	}
	else
	{
		cout<< "Incorrect Username or Password" <<endl <<endl;
		logIn();
	}
}
inline void BankingSystem :: adminSwitch()
{
	int option;
	cout<< "Press 1: To Add New Customer" <<endl;
	cout<< "Press 2: To Deposit Amount" <<endl;
	cout<< "Press 3: To Withdrawl Amount after checking Balance" <<endl;
	cout<< "Press 4: To Display Customer Details" <<endl;
	cout<< "Press 5: To Quit" <<endl;
	cout<< "Enter your choice: ";
	cin>> option;
	switch(option)
	{
		case 1:
			addCustomer();
			break;
		case 2:
			dipAmount();
			break;
		case 3:
			withAmount();
			break;
		case 4:
			displayCustomer();
			break;
		case 5:
			cout<< "Project Close..." <<endl;
			break;
		default:
			cout<< "Enter valid option" <<endl <<endl;
	}
}
inline void BankingSystem :: addCustomer()
{
	cout<< "Enter Name of Customer without spaces: ";
	cin>> cust[0][count];
	cout<< "Enter Account Number without spaces: ";
	cin>> cust[1][count];
	cout<< "Enter Account Type without spaces: ";
	cin>> cust[2][count];
	cout<< "Enter Balance: ";
	cin>> cust[3][count];
	count++;
	adminSwitch();
}
inline void BankingSystem :: dipAmount()
{
	string acc;
	int deposit;
	cout << "Enter Account Number: ";
	cin>> acc;
	for(int countC = 0; countC < count; countC++)
	{
		if(acc.compare(cust[1][countC]) == 0)
		{
			cout<< "Enter money to deposit: ";
			cin>> deposit;
			int bal = stoi(cust[3][countC]);
			bal += deposit;
			string  balance = to_string(bal);
			cust[3][countC] = balance;
		}
	}
	adminSwitch();
}
inline void BankingSystem :: withAmount()
{
	string acc;
	int withdrawl;
	cout<< "Enter Account Number: ";
	cin>> acc;
	for(int countC = 0; countC < count; countC++)
	{
		if(acc.compare(cust[1][countC]) == 0)
		{
			cout<< "Enter money to withdrawl: ";
			cin>> withdrawl;
			int temp = stoi(cust[3][countC]);
			int bal;
			try
			{
				if(temp < withdrawl)
					throw temp;
				else
				{
					bal = stoi(cust[3][countC]);
					bal -= withdrawl;
				}
			}
			catch(int temp)
			{
				cout<< "Insufficient Balance" <<endl;
			}
			string balance = to_string(bal);
			cust[3][countC] = balance;
		}
	}
	adminSwitch();
}
inline void BankingSystem :: displayCustomer()
{
	cout <<endl <<endl;
	cout << "Customer-Name\tAccount-Number\tAccount-Type\tBalance" <<endl;
	if((count-1) != 0)
	{
		for(int countC = 0; countC < count-1; countC++)
			for(int countR = 0; countR < 4; countR++)
				cout<< cust[countR][countC] << "\t";
	}
	else
	{
		for(int countR = 0; countR < 4; countR++)
			cout<< cust[countR][0] << "\t";
	}
	cout<< endl <<endl <<endl;
	adminSwitch();
}
int main()
{
	BankingSystem bs;
	return 0;
}

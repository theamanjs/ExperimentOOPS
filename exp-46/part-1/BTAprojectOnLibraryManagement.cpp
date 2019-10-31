#include<iostream>
#include<cstring>
using namespace std;

class LibraryManagement
{
	private	: int count = 0;
		  int counter = 0;
		  string aUser = "admin";
		  string aPsw = "@admin";
		  string book[3][50];
		  string issue[4][50];
		  void adminChoice();
		  void logIn();
		  void adminSwitch();
		  void addBooks();
		  void viewBooks();
		  void issueBooks();
		  void viewIssuedBooks();
	public	: LibraryManagement();
};
inline LibraryManagement :: LibraryManagement()
{
	adminChoice();
}
inline void LibraryManagement :: adminChoice()
{
	int option;
	cout<< "Press 1: To log in as Admin" <<endl;
	cout<< "Press 2: To quit" <<endl;
	cout<< "Enter your choice: ";
	cin>> option;
	switch(option)
	{
		case 1:
			logIn();
			break;
		case 2:
			cout<< "Project Close..." <<endl;
			break;
		default:
			cout<< "Enter valid option" <<endl <<endl;
			adminChoice();
	}
}
inline void LibraryManagement :: logIn()
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
inline void LibraryManagement :: adminSwitch()
{
	int option;
	cout<< "Press 1: To Add New Books" <<endl;
	cout<< "Press 2: To View Books" <<endl;
	cout<< "Press 3: To Issue Books" <<endl;
	cout<< "Press 4: To View Issued Books" <<endl;
	cout<< "Press 5: To Log Out" <<endl;
	cout<< "Enter your choice: ";
	cin>> option;
	switch(option)
	{
		case 1:
			addBooks();
			break;
		case 2:
			viewBooks();
			break;
		case 3:
			issueBooks();
			break;
		case 4:
			viewIssuedBooks();
			break;
		case 5:
			cout<< "Project Close..." <<endl;
			break;
		default:
			cout<< "Enter valid option" <<endl <<endl;
	}
}
inline void LibraryManagement :: addBooks()
{
	cout<< "Enter name of new Book without spaces: ";
	cin>> book[0][count];
	cout<< "Enter Author of Book without spaces: ";
	cin>> book[1][count];
	cout<< "Enter code of Book without spaces: ";
	cin>> book[2][count];
	count++;
	adminSwitch();
}
inline void LibraryManagement :: viewBooks()
{
	cout <<endl <<endl;
	cout << "Book-Name\tAuthor-Name\tBook-Code" <<endl;
	if((count-1) != 0)
	{
		for(int countC = 0; countC < count-1; countC++)
			for(int countR = 0; countR < 3; countR++)
				cout<< book[countR][countC] << "\t";
	}
	else
	{
		for(int countR = 0; countR < 3; countR++)
			cout<< book[countR][0] << "\t";
	}
	cout<< endl <<endl <<endl;
	adminSwitch();
}
inline void LibraryManagement :: issueBooks()
{
	int check = 0;
	string code;
	cout<< "Enter the code of book you want to issue without spaces: ";
	cin>> code;
	for(int countR = 0; countR < count; countR++)
	{
		if(code.compare(book[2][countR]) == 0)
		{
			cout<< "Enter name of student who want to issue that book without sapces: ";
			cin>> issue[0][counter];
			cout<< "Enter class roll number of student who want to issue that book without spaces: ";
			cin>> issue[1][counter];
			issue[3][counter] = book[0][countR];
			issue[4][counter] = book[2][countR];
			counter++;
		}
		else
			check++;
	}
	if(check == count)
	{
		cout<< "Enter valid book code" <<endl;
		issueBooks();
	}
	adminSwitch();
}
inline void LibraryManagement :: viewIssuedBooks()
{
	cout <<endl <<endl;
	cout << "Student-Name\tStudent-RollNo.\tBook-Name\tBook-Code" <<endl;
	if((counter-1) != 0)
	{
		for(int countC = 0; countC < counter-1; countC++)
			for(int countR = 0; countR < 4; countR++)
				cout<< issue[countR][countC] << "\t";
	}
	else
	{
		for(int countR = 0; countR < 4; countR++)
			cout<< issue[countR][0] << "\t";
	}
	cout<< endl <<endl <<endl;
	adminSwitch();
}
int main()
{
	LibraryManagement lm;
	return 0;
}

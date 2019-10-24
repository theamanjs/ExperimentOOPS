#include<iostream>
#include<fstream>
using namespace std;

class FileReadWrite
{
	public	: FileReadWrite();
};
inline FileReadWrite :: FileReadWrite()
{
       	string strO, strI = "Hello!";
	ofstream outFile("fileReadWrite.txt");
	outFile<< strI << "\n";
	outFile.close();
	ifstream inFile("fileReadWrite.txt");
       	inFile>> strO;
	inFile.close();
	cout<< strO <<endl;	
}
int main()
{
	FileReadWrite frw;
	return 0;
}

#include<fstream>
using namespace std;

class FilePointer
{
	public	: FilePointer();
};
inline FilePointer :: FilePointer()
{
	long int position;
	ofstream filePointer("filePointer.txt");
	filePointer.write("Amrik       Arora", 17);
	position = filePointer.tellp();
	filePointer.seekp(position - 11);
	filePointer.write("Singh ", 6);
	filePointer.close();
}
int main()
{
	FilePointer fp;
	return 0;
}

#include<iostream>
using namespace std;

class MinNMaxElmntArray
{
	private	: int size;
		  int* inputArray();
	public	: MinNMaxElmntArray()
		  {
			cout<< "Enter the size of an array:\n";
			cin>> size;
		  }
		  void findMinMax();
};
inline int* MinNMaxElmntArray :: inputArray()
{
	int* array = new int[size];
	cout<< "Enter the elements of array:\n";
	for(int count = 0; count < size; count++)
		cin>> array[count];
	return array;
}
inline void MinNMaxElmntArray :: findMinMax()
{
	int* array = inputArray();
	int min = array[0];
	int max = array[0];
	cout<< "1D-Array:\n" << "Locations\tElements\n";
	for(int count = 0; count < size; count++)
	{
		cout<< count << "\t\t" << array[count] <<endl;
		if(min > array[count])
			min = array[count];
		if(max < array[count])
			max = array[count];	
	}
	cout<< "Minimum Element is: " << min <<endl;
	cout<< "Maximum Element is: " << max <<endl;
}
int main()
{
	MinNMaxElmntArray mnm;
	mnm.findMinMax();
	return 0;
}

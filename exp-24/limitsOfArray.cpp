#include<iostream>

using namespace std;

class FindLimits {
	private: int toFind[4], maxBuffer, minBuffer;
		void findMax() {
			cout<<"Enter values of array ";

			for(int j = 0; j <= 4; j++) 
				cin>>toFind[j];
			
			maxBuffer = toFind[0];
			minBuffer = toFind[0];
			for(int i = 0; i <= 4; i++) {
			       
			       	if(maxBuffer <= toFind[i])
				maxBuffer = toFind[i];
				
				if(minBuffer >= toFind[i])
				minBuffer = toFind[i];
			}	
		}
	public:	void showLimits() {
			findMax();
			cout<<"The maximum limit value of the array is "<<maxBuffer<<endl;
			cout<<"The minimum limit value of the array is "<<minBuffer<<endl;
		}
};

int main(){
	FindLimits limit;
	limit.showLimits();
	return 0;
}


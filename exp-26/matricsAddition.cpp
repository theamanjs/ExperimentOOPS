#include<iostream>

using namespace std;

class MatricStructure{
	private: int first[3][3], second[3][3], result[3][3];
		 void input(){
			cout<<"Enter the value of first matrics"<<endl;
			 for(int column = 0; column <= 3; column++){
				for(int row = 0; row <= 3; row++){
					cout<<"Column: "<<column<<" Row: "<<row<<" ";
					cin>>first[column][row];
				}
			 }
			cout<<"Enter the value of second matrics"<<endl;
			 for(int column = 0; column <= 3; column++){
				for(int row = 0; row <= 3; row++){
					cout<<"Column: "<<column<<" Row: "<<row<<" ";
					cin>>second[column][row];
				}
			 }
		 }
	public: void compute(){
			input();
			cout<<"The summed values are"<<endl;
			 for(int column = 0; column <= 3; column++){
				for(int row = 0; row <= 3; row++){
					result[column][row] = first[column][row] + second[column][row];
					cout<<result[column][row];
				}
			 }			     
 		}
};

int main(){
	MatricStructure add;
	add.compute();
	return 0;
}

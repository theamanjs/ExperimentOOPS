#include<iostream>

using namespace std;

class unaryOver {
	int x;
	public: void input(int a){
			x = a;
		}
		void operator --(){
			unaryOver minus;
			x--;
		}
		void display(){
			cout<<"The value of x is "<<x;
		}
};

int main() {
	unaryOver OB1;
	OB1.input(19);
	--OB1;
	OB1.display();
	return 0;
}

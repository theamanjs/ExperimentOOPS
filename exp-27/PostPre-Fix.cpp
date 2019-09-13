#include<iostream>

using namespace std;

class PostPre {
	int a;
	public: void input(int x){
			a = x;
	}
	void operator ++(){
		++a;
		cout<<"This is prefix"<<a<<endl;
	}
	void operator ++(int){
		a++;
		cout<<"This is Postfix"<<a<<endl;
	}
};

int main(){
	PostPre Ob;
	Ob.input(21);
	Ob++;
	++Ob;
	return 0;
}
	

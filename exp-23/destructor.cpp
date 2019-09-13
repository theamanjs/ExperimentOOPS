#include<iostream>

using namespace std;

class doSomething{
	public: doSomething(){
			cout<<"Your Object is created using constructor"<<endl;
		}
		~doSomething(){
			cout<<"After something happened the constructor is destructed"<<endl;
		}
};

int main(){
	doSomething letsGo;
	return 0;
}

#include<iostream>
using namespace std;

class NestedClass
{
	public	: NestedClass()
		  {
			  cout<< "This is a Base Class\n";
		  }
		  class InnerClass
		  {
			  public : InnerClass()
				   {
					   cout<< "This is a Nested Class\n";
				   }
		  }; 
};
int main()
{
	NestedClass nc;
	NestedClass :: InnerClass ic;
	return 0;
}

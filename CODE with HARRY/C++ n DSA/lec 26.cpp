#include<iostream>
using namespace std;

class complex{
	int a,b;
	public :
		void setnumber(int n1,int n2){

		a=n1;
		b=n2;
	}
	
	friend complex sumcomplex(complex o1,complex o2);
	void printNumber(){
		cout<<"\nyour number is "<<a<<" + "<<b<<"i";	
		}
};

int main()
{
	complex c;
	c.setnumber(2,5);
	c.printNumber();
	c.setnumber(8,4);
	c.printNumber();
} 



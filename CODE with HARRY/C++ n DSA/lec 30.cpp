#include<iostream>
using namespace std;

class complex{
	
	int a,b;
public:
void printNumber(){
		cout<<"\nyour number is "<<a<<" + "<<b<<"i";	
		}

complex(int ,int);  //contructor declaration
}; 

complex::complex(int x,int y)  //this is a default condtructor
{
	a=x;
	b=y;
}

int main()
{
	//implicit call
	complex a(4,6);
	
	//emplicit call
	complex b= complex (5,7);
	
	a.printNumber();
	b.printNumber();
	
}

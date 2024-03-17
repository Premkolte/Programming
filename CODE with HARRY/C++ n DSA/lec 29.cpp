#include<iostream>
using namespace std;

class complex{
	
	int a,b;
//creating a constructor
//constructor is a special memnber function with same name as of the class 
//it is used to initialize the object of ots class
//it is automatically invoked  whenever an object is created
public:
void printNumber(){
		cout<<"\nyour number is "<<a<<" + "<<b<<"i";	
		}

complex(void);  //contructor declaration
}; 

complex::complex(void)  //this is a default condtructor
{
	a=10;
	b=0;
}

int main()
{
	complex c;
	c.printNumber();
	c.printNumber();
	
}

//character of constructors
/*
1)it should be declared inn the public section of the class
2)they r automtically invoked whenever the object is called
3)they cannot return values and do not have a return tpes
4)it can have default arguments 
5)we cannot refer to their address
*/



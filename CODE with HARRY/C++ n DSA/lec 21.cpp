//OOPS STARTS    
#include<iostream>
using namespace std;

class employee{
	
	private :
		int a,b,c;
		
		
	public :
		int d,e;
		void setdata(int a1,int b1,int c1);
		void getdata(){
		cout<<"the value of a is "<<a;
		cout<<"\nthe value of b is "<<b;
		cout<<"\nthe value of c is "<<c;
		cout<<"\nthe value of d is "<<d;
		cout<<"\n the value of e is "<<e;
	}
		
};

void employee::setdata(int a1,int b1, int c1){
	a= a1;
	b= b1;
	c= c1;
} 

int main()
{
	employee prem;
	prem.setdata(1,2,4); //a,b,c are private
	prem.d=37;  // d is public
	prem.e=87;  // e is public
	prem.getdata(); 
}

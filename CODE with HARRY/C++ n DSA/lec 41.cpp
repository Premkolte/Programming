#include<iostream>
using namespace std;

class base1{
	protected :
		int base1int;
		
	public:
		void setbase1int(int a)
		{
			base1int = a;
		}	
};

class base2{
	protected :
		int base2int;
		
	public:
		void setbase2int(int b)
		{
			base2int = b;
		}	
};


class derived : public base1,public base2{
	public:
		void show(){
			cout<<"the value of base1 is "<<base1int<<endl;
			cout<<"the value of base2 is "<<base2int<<endl;
			cout<<"the sum is "<<base1int + base2int<<endl;
		}
};

int main(){
	derived prem;
	prem.setbase1int(25);
	prem.setbase2int(30);
	prem.show();
}

#include<iostream>
using namespace std;

class complex{
	int a,b;
	
	public:
		complex(){
			a=0;
			b=0;
		}
		
		complex(int x){
			a=x;
			b=0;
		}
		
		complex(int x,int y){
			a=x;
			b=y;
		}
		
	void printnumber(){
		cout<<"\nyour number is "<<a<<" + "<<b<<"i";	
	}
	
		
};

int main(){
	
	complex c1;
	c1.printnumber();
	
	complex c2(5);
	c2.printnumber();
	
	complex c3(7,3);
	c3.printnumber();
}

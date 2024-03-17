#include<iostream>
using namespace std;

class base{
	protected:
		int x;
		
	private :
		int y;
		
	public :
		int z=10;	 	
};

class derived : protected base{
	
};

int main(){
	base b;
	derived d;
	
	// cout<<d.z;  // will not work
	cout<<b.z;  // will work
	
}

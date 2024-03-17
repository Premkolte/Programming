#include<iostream>
using namespace std;

class point {
	int x,y;
	public:
		point(int a ,int b){
			x=a;
			y=b;
		}
		void displaypoint(){
			cout<<"\nthe point is ( "<<x<<" , "<<y<<" )";
		}
		void distance 	
};

int main(){
	point p(1,1);
	p.displaypoint();
	
	point q(4,6);
	q.displaypoint();
}

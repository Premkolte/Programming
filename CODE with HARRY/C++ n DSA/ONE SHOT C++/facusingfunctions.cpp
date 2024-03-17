#include<iostream>
using namespace std;

int fac(int x){
	if(x==1||x==0){
		return 1;
	}
	else{
		return x*fac(x-1);
	}
}

int main()
{
	int a=5;
	cout<<"fac of given no is "<<fac(a);
}


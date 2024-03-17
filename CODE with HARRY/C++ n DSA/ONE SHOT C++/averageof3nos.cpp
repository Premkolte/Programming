#include<iostream>
using namespace std;

int avg(int a,int b,int c){
	float res;
	res=float(a+b+c)/3;
	cout<<"output"<<res;
}

int main()
{
	int p,q,r;
	cout<<"enter 3 nos.";
	cin>>p>>q>>r;
	
	avg(p,q,r);
}


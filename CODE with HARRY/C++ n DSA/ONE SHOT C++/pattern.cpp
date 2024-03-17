#include<iostream>
using namespace std;

int main()
{
	int i,n=5;
	for(i=0;i<n;i=i+2){
		for(int j=0;j<=(2*n-1);j++){
			cout<<"*";
		}
		cout<<"*\n";
	}
}


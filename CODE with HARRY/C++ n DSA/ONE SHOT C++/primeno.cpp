#include<iostream>
using namespace std;

int main()
{
	int n=11,prime=1;
	for(int i=2;i<n;i++){
		if(n%i==0){
			prime=0;
			break;
		}	
	}
	
	if(prime==0 && n!=2){
		cout<<"IT IS A NOT PRIME NO.";
	}
		else
		cout<<"IT IS A PRIME NO.";
		
	}


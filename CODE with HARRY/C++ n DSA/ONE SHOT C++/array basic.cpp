#include<iostream>
using namespace std;

int main()
{
	int ar[4],n;
	for(int i=0;i<4;i++){
		cout<<"enter marks of "<<i <<"student"; 
		cin>>n;
		ar[i]=n;
	}
	for(int i=0;i<4;i++){
		cout<<"\nmarks of "<<i <<"student\n"; 
		cout<<ar[i];
	}
	
}


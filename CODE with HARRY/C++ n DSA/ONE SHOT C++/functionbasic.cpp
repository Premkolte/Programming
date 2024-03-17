#include<iostream>
using namespace std;

void display(){
	cout<<"this is display";
}

int sum(int a,int b){
int result;
result=a+b;
cout<<"\nsum is "<<result;
}

int main()
{
	display();
	sum(5,6);					
}




#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int tax=0,income;
	
	printf("enter your income");
	cin>>income;
	
	if(income<250000)
	
	{
		cout<<"payable tax is 0";
	}
	
	else if(income>=250000 && income < 500000)
	{
	
		cout<<"payable tax is "<<income*0.05;
	}	
	else if(income>=50000 && income < 750000)
	{
		cout<<"payable tax is "<<income*0.1;
	} 
	else if(income>=750000 & income < 1000000)
	{
		cout<<"payable tax is "<<income*0.15;
	}
	else
	{
		cout<<"payable tax is "<<income*0.20;
	}
}
		
	


#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;


int main()
{
	//random no generator
	int number,guess,nguess=0;
	srand(time(0));
	number =  rand()%100 +1;
	//	cout<<"The Random Number is "<<number;
	
	
	
	do{
		cout<<"\nguess the number between 1 to 100\n";
		cin>>guess;
		
		if(guess>number){
			cout<<"The number you entered is bigger......PLEASE ENTER LOWER NUMBER !!!";
		}
		
		else if(guess<number){
			cout<<"The number you entered is smaller......PLEASE ENTER LARGER NUMBER !!!";
		}
		
		else{
			cout<<"you guessed it RIGHT :) IN "<<nguess <<"attempts";
		}
		nguess++;
	}while(guess=number);
	
	
	
}



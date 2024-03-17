 #include<iostream>
 using namespace std;
 
 //function prototype
 int sum(int  ,int);
 void g(void);	
 
 int main(){
 	int num1,num2;
 	
 	cout<<"enter first number";
 	cin>>num1;
 	cout<<"enter second number";
 	cin>>num2;
 	cout<<"The sum of entered 2 numbers is "<<sum(num1,num2); 
	
	g();
 }
 
int sum(int a, int b){
 	int c=a+b;
 	return c;
 }
 
void g(){
	cout<<"\nhello good morning";
} 

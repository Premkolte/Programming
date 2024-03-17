#include<iostream>
using namespace std;

class employee{
	private:
		int id;
		int salary;
		
	public :
		void setId(){
			salary = 122;
			cout<<"\nenter the id of the employee";
			cin>>id;
			}
		void getId(){
			cout<<"the id the employee is "<<id;
		}		
};

int main(){
	
	//employee prem,shravan,prabhav,ishan;
	//prem.setId();
	//prem.getId();
	
	employee fb[4];
	for(int i=0;i<4;i++){
		fb[i].setId();
		fb[i].getId();
	}
	
	
	
	
	
	
}

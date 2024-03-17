#include<iostream>
using namespace std;

//base class
class employee{ 
	public:
		int id;
		float salary;
		employee(int inpid){
			id=inpid;
			salary=34.0;
		}
		employee(){
		}
};

//derived class


/*
NOTES :
1. default visibility mode is private
2. public visibility mode : public members of the base class becomes public members of the derived class
3. private visibility mode: public members if the base class becomes private members of the derived class
4. private members are never inherited

*/
class prog :  public employee{
	public :
	int lang = 9;
	prog(int inpid){
		id = inpid;
	}
	void getdata(){
		cout<<id<<endl;
	}
	
};



int main(){
	employee harry(1),rohan(2);
	cout<<harry.salary<<endl;
	cout<<rohan.salary<<endl;
	
	prog skillf(1);
	cout<<skillf.lang<<endl;
	cout<<skillf.id<<endl;
	skillf.getdata();
}

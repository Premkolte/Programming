#include<iostream>
using namespace std;

class employee{
	int id;
	
	public:
		void setData(void)
		{
			cout<<"enter the employee id";
			cin>>id;
		}
		void getData(void)
		{
			cout<<"the id of the employee is"<<id;
		}
};

int main(){
	employee prem;
	prem.setData();
	prem.getData();
}

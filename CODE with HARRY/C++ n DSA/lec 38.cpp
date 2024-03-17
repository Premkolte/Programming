#include<iostream>
using namespace std;

class base{
	int data1; // private by default and its not inheritable
	public :
		int data2;
		int setdata();
		int getdata1();
		int getdata2();
		
};

int base::getdata1(){
	return data1;
}

int base::getdata2(){
	return data2;
}

int base::setdata(void){
	data1 = 10;
	data2 = 20;
}

class derived : public base{  
	int data3;
	public:
		void process();
		void dispay();
		
};

void derived::process(){
	data3=data2*getdata1();
}

void derived::dispay(){
	cout<<"value of data 1 is\n"<<getdata1();
	cout<<"value of data 2 is\n"<<data2;
	cout<<"value of data 3 is\n"<<data3;
}



int main(){
	derived der;
	der.setdata();
	der.process();
	der.dispay();
}


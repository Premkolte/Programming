#include<iostream>
using namespace std;

class student{
	protected:
		int rollno;
		
	public :
		void setrollno(int);
		void getrollno(void);	
};

void student::setrollno(int r){
	rollno = r;
}

void student::getrollno(){
	cout<<"the roll no is "<<rollno<<endl;
}

class exam : public student{
	protected:
		float maths;
		float physics;
		
	public:
		void setmarks(float,float);
		void getmarks(void);		
};

void exam ::setmarks(float m1,float m2){
	maths = m1;
	physics = m2;
}

void exam ::getmarks(){
	cout<<"the maths n physics marks are"<<maths<<" , "<<physics<<endl;
}


class result :public exam{
	float percentage;
	public:
		void display(){
			getrollno();
			getmarks();
			cout<<"your percentage is "<<(maths + physics)/2<<endl;
		}
		
};


int main(){
	
	/*
	NOTES:
	 if we r inherting B from A and C from B [A--->B--->C]
	1. A is the basic class from B and B is the basic class from C

	*/
	
	result prem;
	prem.setrollno(57);
	prem.setmarks(90.0,94.0);
	
	prem.display();
}

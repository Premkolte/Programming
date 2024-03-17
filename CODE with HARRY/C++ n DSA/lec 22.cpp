#include<iostream>
#include<string>
using namespace std;

class binary{
	    private :
			string s;
		
		public :
			void read(void);
			void chk_bin(void);
			void ones_complement(void);
			void display(void); 
};

void binary::read(void){
	cout<<"enter a binary number";
	cin>>s;
}

void binary::chk_bin(void){
	for(int i=0; i<s.length(); i++){
		if(s.at(i)!='0' && s.at(i)!='1')
		{
			cout<<"incorrect binary number";
			break;
		}
		else{
				cout<<"it is the binary number";
				break;
}}}


void binary::ones_complement(void)
{
	for(int i=0; i<s.length(); i++){
		if(s.at(i)=='0'){
			s.at(i)='1';
		}
		else
		{
			s.at(i)='0';
		}
		 
	}
}

void binary::display(void){
	cout<<"\ndisplaying your binary number";
	for(int i=0; i<s.length(); i++){
		cout<<s.at(i);
	}
}
int main()
{
	//OOPs classes and objects
	//prem.salary= 8 --> makes no sense if salary is private
	
	binary b;
	b.read();  
	b.chk_bin();
	b.ones_complement();
	b.display();
}


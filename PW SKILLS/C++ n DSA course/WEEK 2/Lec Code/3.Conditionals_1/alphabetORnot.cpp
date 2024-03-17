#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter the character : ";
    cin>>ch; // a,b,c,A,B,C,!,#
    cout<<ch<<endl;
    cout<<(int)ch<<endl;

    int ascii = (int)ch; //typecasting

    if(ascii>=97 && ascii<=122){
    cout<<"the character is lower alphabet";

    }

    if(ascii>=65 && ascii<=90){
        cout<<"the alphabet is UPPER case";
    }

    
     //SPECIAL CASE   
    if(ascii>=97 && ascii<=122 || ascii>=65 && ascii<=90)
    {
        cout<<endl<<"it is an alphabet";
    }
}
  


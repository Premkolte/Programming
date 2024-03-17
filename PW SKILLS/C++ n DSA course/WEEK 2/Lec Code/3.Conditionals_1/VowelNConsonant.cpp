#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter the character : ";
    cin>>ch;

    int ascii = (int)ch;
    if((ascii>=97 && ascii<=122) || (ascii >=65 && ascii<=90)){
       cout<<"it is an alphabet"<<endl; 

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
            cout<<"it is a vowel";
       }
       else{
        cout<<"it is an consonent";
       }
    }
    else{
        cout<<"it is not a alphabet";
    }
    
}
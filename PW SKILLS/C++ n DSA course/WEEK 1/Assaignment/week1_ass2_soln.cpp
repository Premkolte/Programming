#include <iostream>
using namespace std;
int main()
{
 //1// 
 int x;
 cout << "Enter first number\n";
 cin >> x; // user will give ‘x’ a value.
 int y, m;
 cout << "Enter second number and value for taking modulus\n";
 cin >> y >> m; // user will give ‘y’ a value.
 int Z = (x * y) % m;
 cout << "Output is: " << Z ;
 cout<<endl<<endl;

 
 //2//
 int a;
 cout<<"Enter first number\n";
 cin>>a; // user will give 'x' a value.
 int b;
 cout<<"Enter second number\n";
 cin>>b; // user will give 'y' a value.
 cout<<(a!=b)<<" "<<(a>=b);
 cout<<endl<<endl;

 
 //3//
 int c,d;
 cin>>c>>d;
 c+=d;
 c-=d;
 c%=d;
 cout<<c;
 cout<<endl<<endl;


 //4//
 int r,h;
 cout<<"Enter the radius and height of cylinder"<<endl;
 cin>>r>>h;
 int pi=3.14;
 int volume=pi*r*r*h;
 cout<<volume;
 

 //5//
 char a,b;
 cout<<"Enter two characters :"<<endl;
 cin>>a>>b;
 cout<<b-a<<endl;

}
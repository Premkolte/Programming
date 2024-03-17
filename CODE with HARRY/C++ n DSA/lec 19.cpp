#include<iostream>
using namespace std;

//volume of cube 
int volume(int a){
	return(a*a*a);
}

//volume of cylinder
int volume(int r,int h){
	return(3.14*r*r*h);
}

//volume of cuboid
int volume(int b,int h, int l){
	return(h*l*b);
}

int main()
{
	cout<<"volume of cube "<<volume(5);
	cout<<"\nvolume of cylinder "<<volume(5,7);
	cout<<"\nvolume of cuboid "<<volume(3,4,5);
}





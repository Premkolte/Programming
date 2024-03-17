#include<iostream>
using namespace std;

void sumNavg(int a,int b,int *sum,float *avg){
	*sum=a+b;
	*avg=float(a+b)/2;
}

int main()
{
	int i,j,sum;
	float avg;
	
	i=3;
	j=5;
	
	sumNavg(i,j,&sum,&avg);
 	cout<<"sum "<<sum<<" avg "<<avg;

}



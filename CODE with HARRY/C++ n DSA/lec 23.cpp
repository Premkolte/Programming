#include<iostream>
using namespace std;

class Dukaan{
	int itemId[100];
	int itemPrice[100];
	int counter=0;
	
	public :
		
		/*void initcounter(void)
		{
			 counter=0;
		}*/
		void getPrice(void);
		void displayPrice(void);
};

void Dukaan::getPrice(void){
	cout<<"enter the id of your item no ";
	cin>>itemId[counter];
	cout<<"enter the price of your item ";
	cin>>itemPrice[counter];
	counter ++;
}

void Dukaan::displayPrice(){
	for(int i=0;i<counter ;i++)
	{
		cout<<"\nthe price of item with Id "<<itemId[i]<<"  is "<<itemPrice[i];
	}
}

int main()
{
	Dukaan GaneshStore;
	GaneshStore.getPrice();
	GaneshStore.getPrice();
	GaneshStore.getPrice();
	GaneshStore.displayPrice();		
}

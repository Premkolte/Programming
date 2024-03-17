#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
	int data;
	struct Node * next;
};

void linkedlistTrasversal(struct Node *ptr){
	while(ptr!=NULL){
		cout<<"element is : "<<ptr->data<<"\n";
		ptr=ptr->next;
	}
}

int main()
{
	struct Node * head;
	struct Node * second;
	struct Node * third;
	
	head = (struct Node *) malloc(sizeof (struct Node));
	second = (struct Node *) malloc(sizeof (struct Node));
	third = (struct Node *) malloc(sizeof (struct Node));
	
	head->data = 7;
	head->next = second;
	
	second-> data= 11;
	second->next = third;
	
	third->data = 66;
	third->next=NULL;
	
	linkedlistTrasversal(head);
	
	
}


#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
	int data;
	struct Node * next;
};

void linkedlistTrasversal(struct Node *ptr){
	while(ptr!=NULL){
		cout<<"\nelement is : "<<ptr->data<<"\n";
		ptr=ptr->next;
	}
}

struct Node * deleteFirst(struct Node * head){
	struct Node * ptr = head;
	head = head->next;
	free(ptr);
	return head;
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
	
	cout<<"linked list before deletion";
	linkedlistTrasversal(head);
	
	head = deleteFirst(head); //for deletijng first element in LL 
	
	cout<<"linked list after deletion";
	linkedlistTrasversal(head);
}


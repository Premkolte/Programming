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

struct Node * insertAtFirst(struct Node * head,int data){
	struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
	ptr->next=head;
	ptr->data=data;
	return ptr;
}

struct Node * insertAtIndex(struct Node * head,int data,int index){
	struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
	struct Node * p =head;
	int i=0;
	
	while(i!=index-1){
		p = p->next;
		i++;
	}
	ptr->data=data;
	ptr->next = p->next;
	p->next = ptr;
	return head;
	
}

struct Node * insertAtEnd(struct Node * head,int data){
	struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
	ptr->data=data;
	struct Node * p = head;
	
	while(p->next!=NULL){
		p = p->next;
	}
	
	p->next=ptr;
	ptr->next= NULL;
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
	
	linkedlistTrasversal(head);
	
	//head = insertAtFirst(head,56);
	//linkedlistTrasversal(head);
	
	//head = insertAtIndex(head,56,1);
	//linkedlistTrasversal(head);
	
	head = insertAtEnd(head,56);
	linkedlistTrasversal(head);
} 



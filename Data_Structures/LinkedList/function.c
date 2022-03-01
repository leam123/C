#include <stdio.h>
#include <stdlib.h>
#include "header.h"
struct node* insertRear(struct node *head, int data){
	struct node *newNode, *p;
	newNode = malloc(sizeof(struct node));
	newNode->data = data;
	if(head == NULL){
		newNode->next = head;
		head = newNode;
	}else{
		p=head;
		while(p->next != NULL)
			p=p->next;
		newNode->next =p->next;
		p->next = newNode;
	}
	return head;
}


struct node* insertFront(struct node *head, int data){
	struct node *newNode;
	newNode = malloc(sizeof(struct node));
	newNode->data = data;
	newNode->next=head;
	head = newNode;
}

struct node* insertPos(struct node *head, int data, int pos){
	struct node *newNode, *p;
	int ctr=1;
	newNode = malloc(sizeof(struct node));
	newNode->data = data;
	if(pos == 1)
		head = insertFront(head, data);
	else if(pos == count(head)+1)
		head = insertRear(head, data);
	else if (pos > count(head))
		printf("Invalid position");
	else{								//middle
		p= head;
		while(ctr < pos - 1 ){
			ctr++;
			p= p->next;
		}
		newNode->next =p->next;
		p->next = newNode;
	}
	return head;
}



int contains(struct node *head, int num){
	struct node *p;
	p=head;
	while(p!=NULL){
		if(num == p->data)
			return 1;
		p = p->next;
	}
	return 0;
}


int count(struct node *head){
	struct node *p;
	int ctr=0;
	p=head;
	while(p!=NULL){
		ctr++;  //sum += p->data;
		p = p->next;
	}
	return ctr;
}

void display(struct node *head){
	struct node *p;
	p=head;
	while(p!=NULL){
		printf(" %d ",p->data); //102030
		p = p->next;
	}
}

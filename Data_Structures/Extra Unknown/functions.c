#include <stdio.h>
#include <stdlib.h>
#include "header.h"

struct node *insertEnd(struct node *head, int data){
	struct node *p;
	struct node *newNode;
	
	newNode = malloc(sizeof(struct node));
	newNode->data = data;
	if(head == NULL){
		newNode->next = head;
		head = newNode;
	}
	else{
		p = head;
		while(p->next!=NULL){
			p = p->next;
		}
		newNode->next = p->next;
		p->next = newNode;
	}
	return head;
}
void reverse(struct node *head){
	struct node *next = NULL;
	struct node *prev=NULL;
	struct node *curr = head;
	struct node *p;
	while(curr!=NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	
	head = prev;
	
	p = head;
	
	while(p!=NULL){
		printf("%d ",p->data);
		p = p->next;
	}
}
void display(struct node *head)
{
	struct node *p = head;
	
	while(p!=NULL){
		printf("%d\t",p->data);
		p = p->next;
	}
}
void threeHighest(struct node *head, int data){
	struct node *p = head;
	int h1 = p->data;
	int h2 = p->next->data;
	int h3 = p->next->next->data;
	
	while(p!=NULL){
		if(p->data > h1){
			h3 = h2;
			h2 = h1;
			h1 = p->data;
		}
		else if(p->data > h2 && p->data != h1){
			h3 = h2;
			h2 = p->data;
		}
		else if(p->data > h3 && p->data!= h2 && p->data != h1){
			h3 = p->data;
		}
		p = p->next;
	}
	
	printf("\n%d %d %d",h1,h2,h3);
}
void threeLowest(struct node *head, int data){
	struct node *p = head;
	int l1 = p->data;
	int l2 = p->data;
	int l3 = p->data;
	
	p=head;
	
	while(p!=NULL){
		if(p->data < l1){
			l3 = l2;
			l2 = l1;
			l1 = p->data;
		}
		else if(p->data < l2 && p->data!=l1){
			l3 = l2;
			l2 = p->data;
		}
		else if(p->data < l3 && p->data!=l2 && p->data!=l1){
			l3 = p->data;
		}
		p = p->next;
	}
	
	printf("%d %d %d",l1,l2,l3);
}
int max(struct node *head, int data){
	struct node *p = head;
	int max = p->data;
	while(p!=NULL){
		if(p->data > max){
			max = p->data;
		}
		p = p->next;
	}
	return max;
}
int min(struct node *head, int data){
	struct node *p = head;
	int min = p->data;
	
	while(p!=NULL){
		if(p->data < min){
			min = p->data;
		}
		p = p->next;
	}
	return min;
}
int location(struct node *head, int data){
	struct node *p = head;
	int index = 0;
	while(p!=NULL){
		index++;
		if(p->data == data){
			return index;
		}
		p = p->next;
	}
	return -1;
}
struct node *insertPos(struct node *head, int data, int pos){
	struct node *p;
	struct node *newNode;
	int ctr = 1;
	
	newNode = malloc(sizeof(struct node));
	newNode->data = data;
	
	if(pos==1){
		head = insertFront(head,data);
	}
	else if(pos==count(head)+1){
		head = insertEnd(head,data);
	}
	else if(pos>count(head)){
		printf("Invalid position");
	}
	else{
		p = head;
		while(ctr < pos - 1){
			ctr++;
			p = p->next;
		}
		newNode->next = p->next;
		p->next = newNode;
	}
	
	return head;
}
struct node *insertFront(struct node *head, int data){
	struct node *newNode;
	newNode = malloc(sizeof(struct node));
	newNode->data = data;
	newNode->next = head;
	head = newNode;
	
	return head;
}
void sSort(struct node *head){
	struct node *i, *j;
	int temp;
	
	for(i=head; i->next!=NULL; i=i->next){
		for(j=i->next; j!=NULL; j=j->next){
			if(i->data > j->data){
				temp = i->data;
				i->data = j->data;
				j->data = temp;
			}
		}
	}
}
int count(struct node *head){
	struct node *p=head;
	int count=0;
	while(p!=NULL){
		count++;
		p = p->next;
	}
	return count;
}
int sum(struct node *head){
	struct node *p=head;
	int sum=0;
	while(p!=NULL){
		sum+=p->data;
		p = p->next;
	}
	return sum;
}
float average(struct node *head){
	struct node *p;
	int count=0, sum=0;
	float ave;
	
	p=head;
	while(p!=NULL){
		count++;
		sum+=p->data;
		p = p->next;
	}
	ave = sum/count;
	
	return ave;
}


struct node *deleteEnd(struct node *head){
	struct node *p, *del;
	if(head->next==NULL){
		deleteBegin(head);
	}
	else{
		p = head;
		while(p->next->next != NULL)
			p = p->next;
		del = p->next;
		p->next = NULL;
		del->next = NULL;
		free(del);
	}
	
	return head;
}
struct node *deletePos(struct node *head, int pos){
	struct node *p;
	struct node *del;
	int ctr = 1;
	
	if(pos==1){
		head = deleteBegin(head);
	}
	else if(pos==count(head)){
		head = deleteEnd(head);
	}
	else if(pos>count(head)){
		printf("The index does not exist");
	}
	else{
		p = head;
		while(ctr<pos-1){
			p = p->next;
			ctr++;
		}
		del = p->next;
		p->next = p->next->next;
		del->next = NULL;
		free(del);
	}
	return head;
}
struct node *deleteBegin(struct node *head){
	struct node *p;
	p = head;
	head = head->next;
	p->next = NULL;
	free(p);
	
	return head;
}

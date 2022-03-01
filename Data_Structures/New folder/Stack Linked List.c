#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int data;
	struct node *next;
}stack;

stack *top;
int ctr = 0;

void push(int data);
void pop();
void display();
void displayTop();
void count(int ctr);

int main(){
	//stack *top;
	push(40);
	push(50);
	push(60);
	push(70);
	display();
	displayTop();
	count(ctr);
	pop();
	push(80);
	push(90);
	display();	
	displayTop();
	count(ctr);
	return 0;
}
void push(int data){
	stack *newNode;
	newNode = malloc(sizeof(stack));
	newNode->data = data;
	
	if(top==NULL){
		newNode->next = NULL;
		top = newNode;
	}else{
		newNode->next = top;
		top = newNode;
	}
	ctr++;
}
void pop(){
	stack *temp = top;
	printf("Deleted number: %d\n",temp->data);
	if(temp!=NULL){
		top = temp->next;
		free(temp);
	}
	
	ctr--;
}
void display(){
	stack *temp = top;
	while(temp->next!=NULL){
		printf("%d\n",temp->data);
		temp = temp->next;
	}
		printf("%d\n",temp->data);
}
void displayTop(){
	stack *temp = top;
	if(temp!=NULL){
		printf("Top No.: %d\n",temp->data);
	}
}
void count(int ctr){
	printf("Count: %d\n",ctr);
}

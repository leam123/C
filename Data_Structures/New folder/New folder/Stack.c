#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;		
};

struct node *top;
int count = 0;

void push(int x); //insert/add a value to the stack
void pop(); //delete a value in a stack (top value)
void display();
void countt();
void topElem();
void destroy();

int main(){
	
	push(50);
	push(60);
	push(85);
	push(80);
	
	display();
	pop();
	printf("\n");
	display();
	countt();
	topElem();
	destroy();
	printf("\n");
	display();
	//printf("Stack Destroyed");
		
	return 0;
}
void push(int x){
	struct node *newNode;
	newNode = malloc(sizeof(struct node));
	newNode->data = x;
	
	if(top==NULL){
		newNode->next = NULL;
		top = newNode;
	}else{
		newNode->next = top;
		top = newNode;
	}
	count++;
}
void pop(){
	struct node *temp;
	if(top==NULL){
		printf("Empty List");
	}else{
		temp = top;
		top = temp->next;
		free(temp);
	}
	count--;
}
void display(){
	struct node *temp;
	
	if(top==NULL){
		printf("Empty List");
	}else{
		temp = top;
		while(temp->next != NULL){
			printf("%d\n",temp->data);
			temp = temp->next;
		}
		printf("%d\n",temp->data);
	}
	
}
void countt(){
	printf("\nNumber of Items in the stack: %d",count);
}
void topElem(){
	printf("\nTop Element: %d",top->data);
}
void destroy(){
	struct node *temp;
	while(top!=NULL){
		temp = top;
		top = temp->next;
		temp->next = NULL;
		free(temp);
	}
	//top = NULL;
	printf("\nStack Destroyed.....");
}

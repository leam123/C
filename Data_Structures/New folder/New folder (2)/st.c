#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int data;
	struct node *next;
}node;

typedef struct{
	int count;
	node *top;
}stack;

void push(stack *st,int data);
void pop();
stack *createStack();
void display(stack *st);
void displayTop(stack *st);

int main(){
	stack *st = createStack();
	push(st,40);
	displayTop(st);
	display(st);
	return 0;
}
stack *createStack(){
	stack *st = malloc(sizeof(stack));
	st->count=0;
	return st;
}
void push(stack *st, int data){
	node *newNode = malloc(sizeof(node));
	newNode->data = data;
	
	if(st->top==NULL){
		newNode->next = NULL;
		st->top = newNode;
	}else{
		newNode->next = st->top;
		st->top = newNode;
	}
	st->count++;
}
void displayTop(stack *st){
	printf("Top: %d\n",st->top->data);
}
void display(stack *st){
	//node *temp = st->top;
	while(st->top->next!=NULL){
		printf("%d\n",st->top->data);		//SAAAYYYYOOOPPPP AAANNGGG DDDDIIISSSPPPLLLLAAYYY
		st->top = st->top->next;
	}
	printf("%d\n",st->top->data);
}

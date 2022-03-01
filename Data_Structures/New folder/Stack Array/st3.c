#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct{
	int top;
	int stack[MAX];	
}stack;

stack *createStack(){
	stack *st = malloc(sizeof(stack));
	st->top=-1;
	return st;
}
int isFull(stack *st){
	if(st->top==(MAX-1))
		return 1;
	else
		return 0;
}
int isEmpty(stack *st){
	if(st->top==-1)
		return 1;
	else
		return 0;
}
void push(stack *st, int data){
	if(isFull(st)==1)
		printf("FULL\n");
	else
		st->stack[++st->top] = data;
}
void pop(stack *st){
	if(isEmpty(st)==1)
		printf("EMPTY\n");
	else
		st->stack[st->top--];
}
int peek(stack *st){
	return st->stack[st->top];
}
int main(){
	stack *st = createStack();
	push(st,40);
	push(st,50);
	push(st,60);
	pop(st);
	push(st,70);
	printf("%d\n",peek(st));
	return 0;
}


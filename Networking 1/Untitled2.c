#include <stdio.h>
#include <stdlib.h>

typedef struct{	
	char data;
	struct node *next;
}node;

typedef struct{
	int count;
	node *top;
}stack;

stack *createStack(){
	stack *st = malloc(sizeof(stack));
	st->top = NULL;
	st->count=0;
	
	return st;
}
void push(stack *st, char data){
	node *newNode = malloc(sizeof(node));
	newNode->data = data;
	
	if(isEmpty(st)==1){
		newNode->next = NULL;
		st->top = newNode;
	}else{
		newNode->next = st->top;
		st->top = newNode;
	}
	st->count++;
}
void pop(stack *st){
	
	node *temp = st->top;
	st->top = temp->next;
	temp->next = NULL;
	
	free(temp);
	
	st->count--;
}
int isEmpty(stack *st){
	if(st->count==0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	
	char data[100];
	int i, ans, bal=1;
	
	stack *st = createStack();
	
	do{
		printf("Input character data: ");
		scanf("%s",&data);
	
		//len = strlen(data);
	
		for(i=0; data[i]!='\0'; i++){
			if(data[i] == '(' || data[i] == '{' || data[i] == '['){
				push(st,data[i]);
			}
			else{
				if(data[i] == ')' && st->top->data == '('){
						pop(st);
				}
				else if(data[i] == '}' && st->top->data == '{'){
						pop(st);
				}
				else if(data[i] == ']' && st->top->data == '['){
						pop(st);
				}else{
					bal=0;
					break;
				}
			}
		}
		if(isEmpty(st)==1 && bal==1)
			printf("Valid\n");
		else
			printf("Invalid\n");
			
		printf("Another Expression? ");
		scanf("%d",&ans);
	}while(ans==1);
	
	return 0;
}

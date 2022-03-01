#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int data;
	struct node *next;
}node;

typedef struct{
	node *rear;
	node *front;
	int count;
}queue;

queue *createQueue(){
	queue *q = malloc(sizeof(queue));
	q->front = NULL;
	q->rear = NULL;
	q->count = 0;
	
	return q;
}

void enqueue(queue *q, int num){
	node *newNode = malloc(sizeof(node));
	newNode->data = num;
	
	if(q->rear==NULL){
		q->rear = q->front = newNode;
	}else{
		q->rear->next = newNode;
		q->rear = newNode;
	}
	q->count++;
}
void dequeue(queue *q){
	node *temp = q->front;
	
	if(temp->next!=NULL){
		temp= temp->next;
		free(q->front);
		q->front = temp;
	}else{
		free(q->front);
		q->front = q->rear = NULL;
	}
	q->count--;
}
void peekFront(queue *q){
	printf("Front: %d\n",q->front->data);
}
void peekRear(queue *q){
	printf("Rear: %d\n",q->rear->data);
}
int main(){
	queue *q = createQueue();
	enqueue(q,40);
	enqueue(q,50);
	dequeue(q);
	enqueue(q,60);
	enqueue(q,70);
	peekFront(q);
	peekRear(q);
	return 0;
}

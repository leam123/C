#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(){
	
	struct node *head = NULL;
	int data, pos;
	int ans;
	
	head = insertEnd(head,1);
	head = insertEnd(head,2);
	head = insertEnd(head,3);
	head = insertEnd(head,4);
	head = insertEnd(head,5);
	head = insertPos(head,8,4);
	head = insertFront(head,10);
	head = insertFront(head,15);

	display(head);
	//head = deleteBegin(head);
	//head = deleteEnd(head);
	head = deletePos(head,11); 
	//sSort(head);
	printf("\n");
	display(head);
	
	printf("\n");
	threeHighest(head,data);
	printf("\n");
	threeLowest(head,data);
	printf("\nMax: %d",max(head,data)); 
	printf("\nMin: %d",min(head,data)); 
 	printf("\nLocation: %d",location(head,8));
	printf("\nCount: %d",count(head));
	printf("\nSum: %d",sum(head));
	printf("\nAverage: %.2f",average(head));
	printf("\n");
	reverse(head);
	
	return 0;
}

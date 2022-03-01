#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	struct node *head = NULL;
	head = insertFront(head, 10);
	head = insertFront(head, 20);
	head = insertRear(head, 30);
	head = insertFront(head, 40);
	head = insertPos(head, 50,3);
//	printf("\n %d \n", contains(head, 20));
//	printf("\n %d \n", count(head));
	display(head);
	return 0;
}

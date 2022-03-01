#include <stdio.h>
#include <stdlib.h>
#include "ARRAYOPT.h"
#define MAXSIZE 100

int menu();
int main()
{
	menu();
	return 0;
}
int menu()
{
	int la[MAXSIZE], n, item, k, index, num;
	char ans='n';
	printf("\t\t\t ~~~~~~ARRAY OPERATIONS~~~~~~\n");
	printf("1. CREATEArray\n");
	printf("2. PRINTArray\n");
	printf("3. INSERTAtPos\n");
	printf("4. INSERTFront\n");
	printf("5. REMOVEAtPos\n");
	printf("6. REMOVEItem\n");
	printf("7. REMOVEFront\n");
	printf("8. LOCATEIndx\n");
	printf("9. LOCATEItem\n");
	printf("10. SORT(Ascending & Descending)\n");
	printf("11. EXIT\n");
	
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	do
	{
			printf("Enter a valid number <1-11>: ");
			scanf("%d",&num);
			
			
			switch(num)
			{
				case 1: createArray(la,n);
						break;
				case 2: printArray(la,n);
						break;
				case 3: insertAtPos(la,&n,item,k);
						break;
				case 4: insertFront(la,&n,item);
						break;
				case 5: removeAtPos(la,&n,index);
						break;
				case 6: removeItem(la,n,item);
						break;
				case 7: removeFront(la,&n);
						break;
				case 8: locateIndex(la,n,item);
						break;
				case 9: locateItem(la,n,item);
						break;
				case 10: sortAscending(la,n);
						sortDescending(la,n);
						break;
				case 11: Exit();
						break;
				default: 
						break;				
			}
			printf("Try Again? ");
			scanf("%s",&ans);
	}while(ans=='y' || ans=='Y');
	return 0;
}

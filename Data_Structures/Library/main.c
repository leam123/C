#include <stdio.h>
#include <stdlib.h>
#include "library.h"
#include <string.h>
int main(){
	int choice, issued, type, n=0;
	author name;
	author author;
	book books[100];
	char ans, fname[50], mname[50], lname[50], lastname[50], title[50],accessionNo[50];
	 

	do{
		printf("\n");
		menu();
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:	displayAllBooks(books,n);
					break;
			case 2:	printf("Book Title: ");
					scanf("%s",&title);
					printf("Author's First Name: ");
					scanf("%s",&name.fname);
					printf("Author's Middle Name: ");
					scanf("%s",&name.mname);
					printf("Author's Last Name: ");
					scanf("%s",&name.lname);
					addNewBook(books,name,title,issued,&n);
					break;
			case 3: replaceAuthor(books,&author,fname,mname,lname,n);
					break;
			case 4: printf("Author's Lastname: ");
					scanf("%s",&lastname);
					displayBooks(books,n,lastname);
					break;
			case 5: printf("Book Title: ");
					scanf("%s",&title);
					displayNumberOfBooks(books,title,n);
					break;
			case 6: displayTotalBooks(books,n);
					break;
			case 7: printf("Select Type\n1-Return\n2-Borrow\nEnter Choice: ");
					scanf("%d",&type);
					printf("Input Book Title: ");
					scanf("%s",&title);
					issueBook(books,title,&n,type);
					break;
			default:
					exit(0);
					break;
		}
	}while(choice<8);
	
	return 0;
}

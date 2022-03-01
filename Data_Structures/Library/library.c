#include <stdio.h>
#include <stdlib.h>
#include "library.h"
#include <string.h>

void displayAllBooks(book books[],int n){
	int i=0;
	for(i = 0; i < n ; i++){
		printf("\n---------------------------------------------");
		printf("\nBook Title: %s\nAccession No. %s",books[i].title,books[i].accessionNo);
		printf("\nAuthor's Name: %s %s %s\n",books[i].name.fname,books[i].name.mname,books[i].name.lname);
		printf("Issue: %d\n",books[i].issued);
	}
}
void displayBooks(book books[], int n, char lastname[]){//display books written by an author, Variable n holds the number of books added in an array
		int i;
		for(i=0; i<n; i++){
			if(strcmp(books[i].name.lname,lastname) == 0){
				printf("\nBook Title: %s\nAccession No. %s\n",books[i].title,books[i].accessionNo);
			}
		}
}
/*void displayBook(book books[], int n, char title[]){//display the authors of the book and whether it is issued or not
		int i;
		for(i=0;i<n;i++){
			if(strcmp(title,books[i].title)==0){
				printf("Author's Name: %s %s %s\n",&books[i].name.fname,&books[i].name.mname,&books[i].name.lname);
			}
		}
}*/
void addNewBook(book books[],author name, char title[],int issued, int *n){//adds a new book in an array and updates n by 1	
	char fname[50], mname[50], lname[50], accessionNo[50];
	printf("Accession No.: ");
	scanf("%s",&books[*n].accessionNo);
	strcpy(books[*n].title,title);
	strcpy(books[*n].name.fname,name.fname);
	strcpy(books[*n].name.mname,name.mname);
	strcpy(books[*n].name.lname,name.lname);
	books[*n].issued = 3;
	(*n)++;
}
void replaceAuthor(book books[],author *author, char fname[],char mname[],char lname[],int n){
	int i, count=0;
	char accessionNo[50], title[50];
	printf("Book Title: ");
	scanf("%s",&title);
	for(i=0;i<n;i++){
		if(strcmp(books[i].title,title)==0){
			count++;
		}
	}
	if(count==1){
		for(i=0;i<n;i++){
			if(strcmp(books[i].title,title)==0){
				printf("Author's First Name: ");
				scanf("%s",&author->fname);
				strcpy(books[i].name.fname,author->fname);
				printf("Author's Middle Name: ");
				scanf("%s",&author->mname);
				strcpy(books[i].name.mname,author->mname);
				printf("Author's Last Name: ");
				scanf("%s",&author->lname);
				strcpy(books[i].name.lname,author->lname);
			}//if
		}//for
	}
	if(count>1){
		printf("There are %d books of the same title.\n",count);
		printf("Accession No.: ");
		scanf("%s",&accessionNo);
		for(i=0;i<n;i++){
			if(strcmp(books[i].accessionNo,accessionNo)==0){
				printf("Author's First Name: ");
				scanf("%s",&author->fname);
				strcpy(books[i].name.fname,author->fname);
				printf("Author's Middle Name: ");
				scanf("%s",&author->mname);
				strcpy(books[i].name.mname,author->mname);
				printf("Author's Last Name: ");
				scanf("%s",&author->lname);
				strcpy(books[i].name.lname,author->lname);
			}//if
		}//for
	}
}
void displayNumberOfBooks(book books[], char title[], int n){//displays the total number of books of a particular title
	int count=0, i;
	for(i=0;i<n;i++){
		if(strcmp(books[i].title,title)==0){
			count++;		
		}
	}	
	printf("Total number of books of a particular title: %d\n",count);
}
void displayTotalBooks(book books[], int n){//displays the total number of books in the library
	printf("Total number of books in the library: %d\n",n);
}
int issueBook(book books[], char title[], int *n, int type){
	int i,j, count=0;
	char accessionNo[50];
	for(i=0;i<*n;i++){
		if(strcmp(books[i].title,title)==0){
			count++;
	 	}
	}
	if(count==1){
		for(i=0;i<*n;i++){
			if(strcmp(books[i].title,title)==0){
				if(type==1){
					books[i].issued++;
					break;
				}
				if(type==2){
					books[i].issued--;
					break;
				}
			}//end of if
		}//end of for
	}
	if(count>1){
		printf("There are %d books of the same title.\n",count);
		printf("Accession No.: ");
		scanf("%s",&accessionNo);
		for(i=0;i<*n;i++){
			if(strcmp(books[i].accessionNo,accessionNo)==0){
				if(type==1){
					books[i].issued++;
					break;
				}
				if(type==2){
					books[i].issued--;
					break;
				}
			}//if
		}//for
	}
}
void menu(){
	printf("MENU\n1 - Display book information\n2 - Add a new book\n3 - Replace authors in a book\n");
	printf("4 - Display all the books in the library of a particular author\n");
	printf("5 - Display the number of books of a particular title\n");
	printf("6 - Display the total number of books in the library\n7 - Issue a book\n");
}

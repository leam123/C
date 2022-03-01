#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#define max 10

void addNewProduct(Products *p,Product prod){
	p->product[p->n]=prod;	
	p->n++;

}
void displayProducts(Products p){
	int x;
	for(x=0; x < p.n; x++){
		printf("%s %s %0.2lf %d\n",p.product[x].id,p.product[x].name,p.product[x].price,p.product[x].quantity);
	}
}

int searchProduct(Products p,char name[]){
	int x;
	for(x=0; x < p.n; x++){
		if(strcmp(name,p.product[x].name)==0){
			printf("Record found...\n");
			printf("%s %s %0.2lf %d\n",p.product[x].id,p.product[x].name,p.product[x].price,p.product[x].quantity);
			return 0;
		}
	}
	return -1;
}

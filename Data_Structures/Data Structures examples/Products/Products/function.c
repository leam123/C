#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <string.h>

void assign(Product *prod, char id[],char name[],double price,int quantity){
	strcpy(prod->id,id);
	strcpy(prod->name,name);
	if(checkQuantity(quantity)==1)
		prod->quantity=quantity;  //setQuantity(quantity);
	else
		prod->quantity=0;
	if(checkPrice(price)==1)
		prod->price=price;
	else
		prod->price=0;	
}

int checkQuantity(int qty){
	if(qty < 0)
		return 0;
	else
		return 1;
}
int checkPrice(double p){
	if(p < 0)
		return 0;
	else
		return 1;
}
void display(Product prod){
	printf("%s %s %0.2lf %d\n",prod.id,prod.name,prod.price,prod.quantity);
}

void setQuantity(Product *prod,int quantity){
	if(checkQuantity(quantity) ==1)
		prod->quantity=quantity;
}
void setPrice(Product *prod,double price){
	if(checkPrice(price) ==1)
		prod->price=price;
}


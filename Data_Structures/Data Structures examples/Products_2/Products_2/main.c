#include <stdio.h>
#include <stdlib.h>
#include "header.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	Product p={"p1","mango",45.00,10};
	Product p2={"p1","mango",45.00,10};
	Products products;
	products.n=0;
	addNewProduct(&products,p);
	addNewProduct(&products,p2);
	displayProducts(products);
	x=searchProduct(products,"avocado");
	if(x==-1)
		printf("Not existing...\n");
		
	if(strcmp(p.id ,p2.id)==0 && strcmp(p.name,p2.name)==0&& p.price==p2.price && p.quantity==p2.quantity)
		printf("Equal");
	else
		printf("Not equal");
	return 0;
}

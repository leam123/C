#include <stdio.h>
#include <stdlib.h>
#include "header.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	Product p[10];
	Product x;
	assign(&x,"p1","mango",-2,10);
	display(x);
	setPrice(&x,24.5);
	display(x);



	return 0;
}

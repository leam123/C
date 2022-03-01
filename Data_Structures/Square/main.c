#include <stdio.h>
#include <stdlib.h>
#include "Square.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Square sq;
	//assign(&sq,1,4,4,4,1,1,4,5);
	assign(&sq,1,4,4,4,1,1,4,1); 
	display(sq);
	printf("Its area is: %.2f",area(sq));
	return 0;
}

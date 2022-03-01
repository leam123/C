#include <stdio.h>
void color_equiv (int n);
main ()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	color_equiv (n);
	return 0;
}
void color_equiv (int n)
{
	switch (n)
	{
		case 1:
			printf("Red");
			break;
		case 2:
			printf("Blue");
			break;
		case 3:
			printf("Yellow");
			break;
		default:
			printf("Invalid");
	}
}

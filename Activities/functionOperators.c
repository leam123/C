#include <stdio.h>
#include <stdlib.h>
int addition (int x, int y);
int subtraction (int x, int y);
int multiplication (int x, int y);
float division (int x, int y);
int modulo (int x, int y);
int close ();
int menu (int n);

int main()
{
	int n;
	
	printf("Simple operations with their corresponding number\n");
	printf("1- Addition\n");
	printf("2- Subtraction\n");
	printf("3- Multiplication\n");
	printf("4- Division\n");
	printf("5- Modulo\n");
	printf("6- Exit\n");
	
	menu(n);
	
	return 0;
}

int menu (int n)
{
	int x, y;
	char ans='n';
	
	do
	{
		printf("Choose a number: ");
		scanf("%d",&n);
		
		switch (n)
		{
			case 1: 
					addition(x,y);
					break;
			case 2:
					subtraction(x,y);
					break;
			case 3:
					multiplication(x,y);
					break;
			case 4:
					division(x,y);
					break;
			case 5:
					modulo(x,y);
					break;
			case 6:
					close ();
					break;
			default:
					printf("Invalid number");
					break;
		}
		
		printf("Try again <y-yes, n-no>? ");
		scanf("%s",&ans);
	
	}while(ans=='y');
	
	return 0;	
}

int addition (int x, int y)
{
	char operator;
	
	printf("Enter 1st number: ");
	scanf("%d",&x);
	printf("Enter operator: ");
	scanf("%s",&operator);
		if(operator != '+')
		{	
				for( ; operator != '+'; )
				{
					printf("ERROR!");
					printf("\nEnter another operator: ");
					scanf("%s",&operator);
				}
				
		}
	printf("Enter 2nd number: ");
	scanf("%d",&y);
	
	printf("The sum of %d and %d is: %d\n", x, y, x+y);
	return;
}

int subtraction (int x, int y)
{
	char operator;
	printf("Enter 1st number: ");
	scanf("%d",&x);
	printf("Enter operator: ");
	scanf("%s",&operator);
		if(operator != '-')
		{
			for( ; operator != '-'; )
			{	
				printf("ERROR!");
				printf("\nEnter another operator: ");
				scanf("%s",&operator);
			}
		}
	printf("Enter 2nd number: ");
	scanf("%d",&y);	
	
	printf("The difference of %d and %d is: %d\n", x, y, x-y);
	return;
}

int multiplication (int x, int y)
{
	char operator;
	
	printf("Enter 1st number: ");
	scanf("%d",&x);
	printf("Enter operator: ");
	scanf("%s",&operator);
		if(operator != '*')
		{
			for( ; operator != '*'; )
			{
				printf("ERROR!");
				printf("\nEnter another operator: ");
				scanf("%s",&operator);
			}
		}
	printf("Enter 2nd number: ");
	scanf("%d",&y);	
		
	printf("The product of %d and %d is: %d\n", x, y, x*y);
	return;
}

float division (int x, int y)
{
	char operator, ans='n';
	int n;
	
	printf("Enter 1st number: ");
	scanf("%d",&x);
	printf("Enter operator: ");
	scanf("%s",&operator);
		if(operator != '/')
		{
			for( ; operator != '/'; )
			{
				printf("ERROR!\n");
				printf("\nEnter another operator: ");
				scanf("%s",&operator);
			}
		}
	printf("Enter 2nd number: ");
	scanf("%d",&y);
		if (y<=0 || x<=0) 
			{
				printf("Error\n");
				do
				{
					printf("Try again <y-yes, n-no>? ");
					scanf("%s",&ans);
					menu(n);
				}while(ans=='y');
			}
		
	printf("The quotient of %d and %d is: %.2f\n", x, y, x/(float)y);	//	TYPECASTING
																		//	integer/integer = integer 
																		//	float/integer = float 
																		//	integer/float = float.
				/*****	So we convert denominator to float in our program, you may also write float in the numerator. This EXPLICIT CONVERSION is known as TYPECASTING.	*****/
					
	return;
}

int modulo (int x, int y)
{
	char operator;
	
	printf("Enter 1st number: ");
	scanf("%d",&x);
	printf("Enter operator: ");
	scanf("%s",&operator);
		if(operator != '%')
		{
			for( ; operator != '%'; )
			{
				printf("ERROR!\n");
				printf("\nEnter another operator: ");
				scanf("%s",&operator);
			}
		}
	printf("Enter 2nd number: ");
	scanf("%d",&y);
			
	printf("The remainder of %d and %d is: %d\n", x, y, x%y);
	return;
}

int close ()
{
	exit(0);
}

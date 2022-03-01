#include <stdio.h>
#include <string.h>
int reverse_string (char str[]);
main ()
{
	int ans=0;
	char str[100];
	
	do 
	{
		printf("Enter a string: ");
		scanf("%s",&str);
	
		printf("%s\n",reverse_string (str));
		
		printf("Try again <1-yes, 0-no>? ");
		scanf("%d",&ans);
		
	}while (ans==1);

	return 0;
}
int reverse_string (char str[])
{
	return strrev(str);
	
}

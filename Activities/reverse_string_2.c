#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
void reverse_string (char str[]);
main ()
{
	 
	char str[MAXSIZE],ans='n';
	
	do 
	{
		printf("Enter a string: ");
		scanf("%s",&str);
	
		reverse_string (str);
		
		printf("Try again <1-yes, 0-no>? ");
		scanf("%s",&ans);
		
	}while (ans=='y' || ans=='Y');

	return 0;
}
void reverse_string (char str[])
{
	char str2[MAXSIZE];
	int end, start, count=0;
	
	while(str[count] != '\0')
	{
		count++;
	}
	
	end= count - 1;
	
	for(start=0; start<count; start++)
	{
		str2[start] = str[end];
		end--;
	}
	
	str2[start] = '\0';
	
	printf("%s\n",str2);
	
}

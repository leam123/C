#include <stdio.h>
#include <string.h>
void palindrome_number (int n);
int main()
{
   int n=0, ans=0;
   
   do
   {
		printf("Enter any number: ");
		scanf("%d",&n);
		
		palindrome_number (n);
		
		printf("Try again <1-yes,0-no>? ");
		scanf("%d",&ans);
		
   }while (ans==1);
	
   return 0; 
   
}
void palindrome_number (int n)
{
	int  rev, orig, x;
	
	orig=n;
	
	while (n!=0)
	{
		x=n%10;
		rev=rev*10+x;
		n=n/10;
	}
	if (orig==rev)
	{
		printf("Palindrome\n");
	}
	else
	{
		printf("Not a palindrome\n");
	}
	
 
}


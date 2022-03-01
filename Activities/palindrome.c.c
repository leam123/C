#include <stdio.h>
#include <string.h>
void palindrome_or_not (char str[]);
int main()
{
   char str[100];
   int ans=0;
   
   do
   {
		printf("Enter any string: ");
		scanf("%s",&str);
		
		palindrome_or_not (str);
		
		printf("Try again <1-yes,0-no>? ");
		scanf("%d",&ans);
		
   }while (ans==1);
	
   return 0; 
   
}
void palindrome_or_not (char str[])
{
	int begin, middle, end, len= 0;
	
	while ( str[len] != '\0' )
	{
		len++;
	}
     
   end = len - 1;
   middle = len/2;
 
   for( begin = 0 ; begin < middle ; begin++ )
   {
      if ( str[begin] != str[end] )
      {
         printf("Not a palindrome.\n");
         break;
      }
      end--;
   }
   
   if( begin == middle )
   {
   		printf("Palindrome.\n");
   }
     
}
   
 

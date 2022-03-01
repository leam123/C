#include <stdio.h>
int main ()
{
    int i, n, arr[100], ecount=0,ocount=0;
    printf("How many elements? ");
    scanf("%d",&n);
    
    printf("Enter %d numbers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
           ecount++;
        }
        else
        {
            ocount++;
        }
    }
    
   printf("Even: %d\n",ecount);
   printf("Odd: %d",ocount);
   
   return 0;
}


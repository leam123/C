#include <stdio.h>
int powerofTwo(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    if(powerofTwo(n)==1)
    {
        printf("POWER OF 2\n");
    }
    else
    {
        printf(" not POWER OF 2\n");
    }
    return 0;
}
int powerofTwo(int n)
{
	if(n==0)
		return 0;
		
    while(n >= 2)
    {
        if(n%2==1)
            return 0;
            n /= 2;
    }
    return 1;
}


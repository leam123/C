#include <stdio.h>
void number_pattern (int n);
main ()
{
    int n=0;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    number_pattern (n);
    return 0;
}
void number_pattern (int n)
{
    int i, j;

    for(i=0;i<=n;i++)						
        {									
            for(j=1; j<=i; j++)
                {
                    printf("%d",j);
                }
            printf("\n");
        }
}

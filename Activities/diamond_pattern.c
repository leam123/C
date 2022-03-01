#include <stdio.h>
void diamond_pattern (int n);
main ()
{
    int n=0;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    diamond_pattern (n);
    return 0;
}
void diamond_pattern (int n)
{
    int i, j, k;

    for(i=0;i<n;i++)						// loop for the upper part of the diamond/ first layer
        {									
            for(j=n - 1; j>=i; j--)
                {
                    printf(" ");
                }
            for(k=0;k<=i;k++)
                {
                    printf("* ");
                }
            printf("\n");
        }
        
    for(i=1; i<n; i++) 					// loop for the second part of the diamond/ second layer
        {
            for(j=0; j<=i; j++)
                {
                    printf(" ");
                }
                
            for(k=n - 1; k>=i; k--)
                {
                    printf("* ");
                }
            printf ("\n");
        }
}

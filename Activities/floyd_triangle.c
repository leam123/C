#include <stdio.h>
void floyd_triangle (int n);
main ()
{
    int n=0;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    floyd_triangle (n);
    return 0;
}
void floyd_triangle (int n)
{
    int i, j, k=1;

    for(i=0;i<=n;i++)					
        {									
            for(j=1;j<=i; j++)
                {
                    printf("%d",k);
                    k++;
                }
            printf("\n");
        }
        
}

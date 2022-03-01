#include <stdio.h>
#include <stdlib.h>
void sum_of_matrices(int a[][], int b[][], int *r, int *c);
int main()
{
	int i, a[100][100], b[100][100], j, r, c;
	printf("Enter rows: ");
	scanf("%d",&r);
	printf("Enter columns: ");
	scanf("%d",&c);
	printf("Enter elements of the first matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	printf("Enter elements of the second matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}	
	}
	sum_of_matrices(a,b,&r,&c);
	return 0;
}
void sum_of_matrices(int a[][], int b[][], int *r, int *c)
{
	int i, j, c[100][100];
	printf("Sum of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			c[i][j]=a[i][j] + b[i][j];
			printf("%d ",c[i][j]);
		}	
	}
	printf("\n");
}

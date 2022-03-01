#include <stdio.h>
void composite(int n);
int main()
{
	int n;
	
	printf("Enter a range of numbers: ");
	scanf("%d",&n);
	
	composite(n);
	
	return 0;
}
void composite(int n)
{
	int i, j, composite;
	
	for(i=2;i<=n;i++)
	{
		composite=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				composite=0;
				break;
			}
		}
		if(composite==0)
		{
			printf("%d ",i);
		}
	}
	
}

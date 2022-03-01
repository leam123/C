#include <stdio.h>
#include <stdlib.h>
void sortAscending(int la[], int n);
int main()
{
    int i, n, la[100], index, num;
    
    printf("Enter number of elements: ");
    scanf("%d",&n);
    
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&la[i]);
    }
    
    sortAscending(la,n);
    return 0;
}
void sortAscending(int la[], int n)
{
	int i, j, temp;
	for(i=1; i<n; i++)
	{
		temp=la[i];
		j=i - 1;
		
		while(temp<la[j] && j>=0)
		{
			la[j + 1]=la[j];
			j--;
		}
		la[j + 1]=temp;
		
	}
	
	printf("ARRAY list in ASCENDING order : "); 
	for(i=0;i<n;i++)
    {
       printf("%d ",la[i]);
    }
	
}

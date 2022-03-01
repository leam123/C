#include <stdio.h>
#include <stdlib.h>

void createArray(int la[], int n)
{
	int i, j, k;
	printf("Enter %d elements\n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&la[i]);
		if(la[i]==la[i - 1])
		{
			printf("Error\n");
			n++;
		}
 	}
 	for(i=0;i<n;i++)
 	{
 		for(j=i + 1;j<n;j++)
 		{
 			if(la[i]==la[j])
 			{
 				for(k=j;k<n;k++)
 				{
 					la[k]=la[k + 1];	
				}
				n--;
				j--;
			}
		}
	}
 	
}
void printArray(int *la, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%3d",la[i]);
	}
	printf("\n");
}
int insertAtPos(int *la, int *n, int item, int k)
{
	int i;
	printf("Enter number to be inserted: ");
	scanf("%d",&item);
	printf("Enter position: ");
	scanf("%d",&k);
	for(i=(*n);i>=k;i--)
	{
		la[i]=la[i - 1];
	}
	la[k - 1]=item;
	(*n)++;
}
void insertFront(int *la, int *n, int item)
{
	int i;
	printf("Enter number to be inserted: ");
	scanf("%d",&item);
	for(i=(*n);i>=0;i--)
	{
		la[i]=la[i - 1];
	}
	la[0]=item;
	(*n)++;
}
void removeAtPos(int *la, int *n, int index)
{
	int i;
	printf("Enter position<index> to be removed: ");
	scanf("%d",&index);
	for(i=index; i<(*n) - 1;i++)
	{
		la[i]=la[i + 1];
	}
	(*n)--;
}
int removeItem(int la[], int n, int item)
{
	int i;
	printf("Enter number to be removed: ");
	scanf("%d",&item);
	for(i=item - 1; i<n - 1;i++)
	{
		la[i]=la[i + 1];
	}
	n--;
}
int removeFront(int la[], int *n)
{
	int i;
	for(i=0;i<(*n);i++)
	{
		la[i]=la[i + 1];
	}
	(*n)--;
}
int locateIndex(int la[], int n, int item)
{
	int i;
	printf("Enter index to be located: ");
	scanf("%d",&item);
	for(i=0;i<n;i++)
	{
		if(la[i]==item)
		{
			printf("Located at index %d\n",i);
		}
	}
	return -1;
}
int locateItem(int la[], int n, int item)
{
	int i, first=0, last=n - 1, mid=(first + last)/2;
	printf("Enter number to be located: ");
	scanf("%d",&item);
	while (first <= last)
	{
		if(item>la[mid])
		{
			first=mid + 1;
		}
		else if(item==la[mid])
		{
			return 1;
		}
		else
		{
			last=mid - 1;
		}
		mid=(first + last)/2;
	}
	if(first>last)
	{
		return 0;
	}
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
       printf("%4d",la[i]);
    }
    printf("\n");
}
void sortDescending(int la[], int n)
{
	int i, j, temp;
	for(i=1; i<n; i++)
	{
		temp=la[i];
		j=i - 1;
		
		while(temp>la[j] && j>=0)
		{
			la[j + 1]=la[j];
			j--;
		}
		la[j + 1]=temp;
	}
	printf("ARRAY list in DESCENDING order : "); 
	for(i=0;i<n;i++)
    {
       printf("%4d",la[i]);
    }
    printf("\n");
}
int Exit()
{
	exit (0);
}


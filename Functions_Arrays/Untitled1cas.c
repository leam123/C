#include <stdio.h>
#include <stdlib.h>
void function(int a1[],int size);
int main()
{
	int i, a1[100], size;
	printf("Enter size: ");
	scanf("%d",&size);
	printf("Enter %d elements\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a1[i]);
	}
	function(a1,size);
	return 0;
}
void function(int a1[],int size)
{
	int i, sum=0, oddnum=0, evennum=0, zero=0;
	float ave=0.0;
	for(i=0;i<size;i++)
	{
		if(a1[i]==0)
		{
			zero++;
		}
		else if(a1[i]%2!=0)
		{
			oddnum++;
		}
		else if(a1[i]%2==0)
		{
			evennum++;
		}
		
		sum+=a1[i];
		ave=(float)sum/size;
	}
	printf("Sum: %d\n",sum);
	printf("Average: %.2f\n",ave);
	printf("Even: %d\n",evennum);
	printf("Odd: %d\n",oddnum);
	printf("Zero: %d",zero);
	
}


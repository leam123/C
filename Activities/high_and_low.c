#include <stdio.h>
void high_and_low (int x, int y, int z);
main ()
{
	int x=0, y=0, z=0, ans=0;
	
	do
	{
		printf("Enter 3 Values: \n");
		scanf("%d\n%d\n%d",&x,&y,&z);
	
		high_and_low (x,y,z);
	
		printf("Try again <1-yes, 0-no>?  ");
		scanf("%d",&ans);	
		
		system ("PAUSE"); // used in C or C++ to not directly close the program after the execution.
	}while(ans==1);
	 
	return 0;
}
void high_and_low (int x, int y, int z)
{
	int high=x, low=z;
			
	if(high<y)
		{
			printf("highest: %d\n",y);
			if(low>x)
				{
					printf("lowest: %d\n",x);
				}
		}
	else if(high<z)
		{
			printf("highest: %d\n",z);
			if(low>y)
				{
					printf("lowest: %d\n",y);
				}
		}
	else
		{
			printf("highest: %d\n",x);
			printf("lowest: %d\n",z);
		}
}

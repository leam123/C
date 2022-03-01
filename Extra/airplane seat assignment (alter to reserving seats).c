#include <stdio.h>
#include <stdlib.h>

void class_seats();

int main()
{
	printf("Welcome to MGM Airlines!\n");
	printf("\n");
	printf("Please type 1 for 'First Class' seats\n");
	printf("Please type 2 for 'Economy Class' seats\n");
	printf("\n");

    class_seats();

    return 0;	
}
void class_seats()
{
    int first_class=0;
	int economy_class=0;
	int choice=0, plane_seats[10]={0}, i=0;
	char ans='n';
	
	for(i=0; i<10; i++)	
	{
		printf("Choice: ");
		scanf("%d",&choice);
		
		if(choice==1)
		{
			if(first_class < 5)
			{
		    	plane_seats[first_class++];

    			printf("_________________________________________\n");
    			printf("|   Boarding Pass                        |\n");
    			printf("|   First Class Section                  |\n");
    			printf("|  	SEAT # %d                    |\n",first_class);
    			printf("|________________________________________|\n");
			}
			else if(first_class >= 5 && economy_class < 5)
			{
				printf("The First Class section is full.\n");
				printf("Would you like to sit instead in the Economy Class section <Y>es / <N>o ? ");
				scanf("%s",&ans);
			
				if(ans=='Y' || ans=='y')
				{
					plane_seats[economy_class++];

    				printf("_________________________________________\n");
    				printf("|   Boarding Pass                        |\n");
					printf("|   Economy Class Section                |\n");
    				printf("|  	SEAT # %d                       |\n",economy_class);
					printf("|________________________________________|\n");
				}
				else 
				{
				    printf("Sorry but First Class section seats are all taken.\n");
                    printf("Next flight will resume in 3 hours.\n");	
				}
			}
		}
					
		if(choice==2)
		{
			if(economy_class < 5)
			{
				plane_seats[economy_class++];

    			printf("_________________________________________\n");
    			printf("|   Boarding Pass                        |\n");
    			printf("|   Economy Class Section                |\n");
				printf("|  	SEAT # %d                       |\n",economy_class);
    			printf("|________________________________________|\n");
			}
			else if(economy_class >= 5 && first_class < 5)
			{
		    	printf("The Economy Class section is full.\n");
				printf("Would you like to sit instead in the First Class section <Y>es / <N>o ? ");
				scanf("%s",&ans);
			
				if(ans=='Y' || ans=='y')
				{
					plane_seats[first_class++];

    				printf("_________________________________________\n");
    				printf("|   Boarding Pass                        |\n");
    				printf("|   First Class Section                	 |\n");
    				printf("|  	SEAT # %d                       |\n",first_class);
    				printf("|________________________________________|\n");
				}
				else 
				{
				    printf("Sorry but Economy Class section seats are all taken.\n");
                    printf("Next flight will resume in 3 hours.\n");				    
				}
			}
		}
		else if(choice != 1 && choice != 2)
	    {
		    printf("No class have this type number\n");
	    }
	}

    
	if(first_class == 5 && economy_class == 5)
    {
	 printf("All seats have been taken.\n");
     printf("Next flight will resume in 3 hours.\n");
    }
	
}

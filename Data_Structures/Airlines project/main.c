#include <stdio.h>
#include <stdlib.h>
#include "airline.h"
int main()
{
	int seats[10], seatType=0;
	int count=0, seat=0;
	char ans='y';

	initSeats(seats,10);
	printf("Welcome to MGM Airlines\n");
	displaySeats(seats,10);
	printf("\n");
	
	do
	{
		printf("\n\n1-First class\n");
		printf("2-Economy: ");
		scanf("%d",&seatType);
		seat = assignSeat(seats,seatType);
		if(seat>0)
		{
			if(seatType==1)
			{
				boardPass1(seat);
				displaySeats(seats,10);
				count++;
			}
			if(seatType==2)
			{
				boardPass2(seat);
				displaySeats(seats,10);
				count++;
			}
		}
		else
		{
			if(seatType==1)
				{
					printf("\nFirst Class is full. Would you like to transfer to Economy class <Y or N>? ");
					scanf("%s",&ans);
					if(ans=='y' || ans=='Y')
					{
						seatType=2;
						seat = assignSeat(seats,seatType);
						boardPass2(seat);
						displaySeats(seats,10);
						count++;
					}	
				}
			else if(seatType==2) 
				{
					printf("\nEconomy Class is full. Would you like to transfer to First class <Y or N>? ");
					scanf("%s",&ans);
					if(ans=='y' || ans=='Y')
					{
						seatType=1;
						seat = assignSeat(seats,seatType);
						boardPass1(seat);
						displaySeats(seats,10);
						count++;
					}	
				}
		}
	}while(count<10 && ans=='y');
	exit(0);
	return 0;
}


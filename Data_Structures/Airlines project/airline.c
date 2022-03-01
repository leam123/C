void initSeats(int seats[], int size)
{
	int i=0;
	for( ; i<size; i++)
	{
		seats[i]=0;
	}	
}
void displaySeats(int seats[],int size)
{
	int first=0, economy=0;
	printf("\nFirst Class: ");
	for(first=0; first<5; first++)
	{  
		printf("[%d] ",seats[first]);
	}
	printf("\nEconomy: ");
	for(economy=5; economy<size; economy++)
	{
		printf("[%d] ",seats[economy]);
	}
}
int assignSeat(int seats[],int seatType)
{
	int seat = -1;
	char ans;
	int mid=10/2;
	int count=0;
	
		switch(seatType)
		{
			case 1: 
				seat = assignFirstClass(seats,10);
				break;
			case 2:
				seat = assignEconomy(seats,10);
				break;
			default:
				printf("Invalid class number, Please try again: ");
				break;
		}

	return seat;
}
int assignFirstClass(int seats[], int size)
{
	int first=0, seat = 0;
	for( ;first<5;first++)
	{
		if(seats[first]==0)
		{
			seats[first]=1;
			seat = first + 1;
			break;
		}
	}
	return seat;
}
int assignEconomy(int seats[], int size)
{
	int seat=0;
	int economy=0; 
	for(economy=5;economy<size;economy++)
	{
		if(seats[economy]==0)
		{
			seats[economy]=1;
			seat = economy + 1;
			break;
		}
	}
	return seat;
}
void boardPass1(int seat)
{
	int i=0;
	putchar(218);
	for(i=0;i<23;i++)
	{
		putchar(196);
	}
	putchar(191);
	printf("\n");
	putchar(172);
	printf(" Board Pass\t");
	putchar(172);
	printf("\n");
	putchar(172);
	printf(" First Class Section\t");
	putchar(172);
	printf("\n");
	putchar(172);
	printf("Seat #%d\t\t",seat);
	putchar(172);
	printf("\n");
	putchar(192);
	for(i=0;i<23;i++)
	{
		putchar(196);
	}
	putchar(217);
	printf("\n");
}
void boardPass2(int seat)
{
	int i=0;
	putchar(218);
	for(i=0;i<23;i++)
	{
		putchar(196);
	}
	putchar(191);
	printf("\n");
	putchar(179);
	printf(" Board Pass\t");
	putchar(179);
	printf("\n");
	putchar(179);
	printf(" Economy Section\t");
	putchar(179);
	printf("\n");
	putchar(179);
	printf("Seat #%d\t\t",seat);
	putchar(179);
	printf("\n");
	putchar(192);
	for(i=0;i<23;i++)
	{
		putchar(196);
	}
	putchar(217);
	printf("\n");
}
void exit()
{
	printf("\nNext Flight leave in 3 hours.");
}


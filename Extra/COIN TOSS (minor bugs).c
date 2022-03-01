#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HEAD 1
#define TAIL 0

void instructions();
void game(char guess, char coin);

int main()
{
	char guess;
	char coin;
	
	instructions();
	game(guess,coin);
	
	return 0;
}
void instructions()
{
	char choice='n';
	printf("\t\t\t COIN TOSS \t\t\t");
	printf("\nThis is a guessing game of head or tail.");
	printf("\nYou, as a player, have to guess what the computer will generate.");
	printf("\n\t\t\t T - for tail, H - for head \t\t\t");
	printf("\n");
	printf("Do you want to play? ");
	scanf("%s",&choice);
	printf("\n");
}
void game(char guess, char coin)
{
	int n=0, i=0;
	char ans='n';
	
	srand (time(NULL)); 	//generate random numbers
	
	printf("How many tries do you want? ");
	scanf("%d",&n);
	
	printf("What is your guess <H/T>? ");
	scanf("%s",&guess);
	
	for(i=0; i<=n; i++)
	{
		printf("What is your guess <H/T>? ");
	scanf("%s",&guess);
	
		if(rand() % 2 == 0)
		{
			coin = 'H';
		}
	 	else if(rand() % 2 != 0)	
		{
			coin = 'T';
		}	
	}	
			
		if(guess==coin)
			{
				printf("YOU GOT IT RIGHT!!\n");
			}
			else
			{
				printf("SORRY...\n");
			}
	
}

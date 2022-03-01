#include <stdio.h>
#include <time.h>
void guessing_game (int guess);
main ()
{
	int guess=0;
	
	printf("Welcome to a simple game of guessing the number.\n");
	printf("The player only gets 10 chances to guess the number\n");
	printf("In these simple game, the player only have to guess a number from 1-100\n");
	printf("Goodluck, player!\n");
	
	guessing_game (guess);

	return 0;
}
void guessing_game (int guess)
{
	int retry=0;
	srand (time(NULL));   //generate random numbers
	int random=rand () % 100;   //generate random numbers
	
	for(retry=10; retry>=1; retry--)
	{
		printf("What is your guess: ");
		scanf("%d",&guess);
		if(guess==random)
		{
			printf("Good job! You got it right!");
			break;
		}
		else if(guess>random)
		{
			printf("It's to high! Lower\n");
		}
		else
		{
			printf("It's to low! Higher\n");
		}
	}
	if(retry>10)
	{
		printf("Sorry maximum retries have been reached...\n");
		printf("The correct number is %d", random);
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char board[3][3]={'1', '2', '3', '4', '5', '6', '7', '8', '9'};
void game_instructions();
int player1_name(char str1[]);
int player2_name(char str2[]);
void display_board();
int board_initialize();
void player1_move();
void player2_move();
int winner();

main()
{
    char str1[100], str2[100], winmove=' ';
    char board[3][3]={'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int choice;
    
    game_instructions();
    player1_name(str1);
    player2_name(str2);
	printf("\t\t\t\t\tTHIS IS THE GAME BOARD IN WHICH YOU ARE REFER TO THE NUMBER OF WHICH YOU WANT TO PUT 'X' OR 'O'"); 
	printf("\n");  
    display_board();
    board_initialize();
    do
    {
    	player1_move();
    	winmove=winner();
    	if(winmove!= ' ')
    	{
    		break;
		}
    	player2_move();
    	winmove=winner();
	}while(winmove== ' ');
    
    if(winmove== 'X')
    {
    	printf("PLAYER 1 WINS!\n");
	}
	else if(winmove== 'O')
	{
		printf("PLAYER 2 WINS!\n");
	}
	
    return 0;
}
void game_instructions()
{
    printf(" \t\t\t TIC\tTAC\tTOE \t\t\ ");
    printf("\nPlayer1 is assigned as 'X' ");
    printf("\nPlayer2 is assigned as 'O' ");
    printf("\nSelect a cell number from 1-9 in which you want to move.");
    printf("\nThe first to make a line(digaonal, horizontal, vertical) of X's or O's will be the winner."); 
    printf("\n");
    printf("\nExample below:\n");
    printf("\t\t\t O | X | X \n");
    printf("\t\t\t------------ \n");
    printf("\t\t\t O | X | X \n");
    printf("\t\t\t------------ \n");
    printf("\t\t\t X | O | O \n");
    
}
int player1_name(char str1[])
{
    printf("Enter Player1's name: ");
    scanf("%s",&str1);
    
    return str1;
}
int player2_name(char str2[])
{
    printf("Enter Player2's name: ");
    scanf("%s",&str2);
    
    return str2;
}
void display_board()
{
    printf("\n");
    printf("\t\t\t %c | %c | %c \t\t\t\n",board[0][0],board[0][1],board[0][2]);
    printf("\t\t\t------------\t\t\t\n");
    printf("\t\t\t %c | %c | %c \t\t\t\n",board[1][0],board[1][1],board[1][2]);
    printf("\t\t\t------------\t\t\t\n");
    printf("\t\t\t %c | %c | %c \t\t\t\n",board[2][0],board[2][1],board[2][2]);
    printf("\n");
}
int board_initialize()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            board[i][j]=' ';
        }
    }
    return board;
}
void player1_move()
{
  int choice;
  
  printf("PLAYER1 enter your number: ");
  scanf("%d",&choice);
  
       if(choice==1)
        {
            if(board[0][0]!=' ')
            {
                printf("Error!\n");
                player1_move(); 
            }
            board[0][0]='X';
        }
        else if(choice==2)
        {
            if(board[0][1]!=' ')
            {
                printf("Error!\n");
                player1_move(); 
            }
            board[0][1]='X';
        }
        else if(choice==3)
        {
            if(board[0][2]!=' ')
            {
                printf("Error!\n");
                player1_move(); 
            }
            board[0][2]='X';
        }
        else if(choice==4)
        {
            if(board[1][0]!=' ')
            {
                printf("Error!\n");
                player1_move(); 
            }
            board[1][0]='X';
        }
        else if(choice==5)
        {
            if(board[1][1]!=' ')
            {
                printf("Error!\n");
                player1_move(); 
            }
            board[1][1]='X';
        }
        else if(choice==6)
        {
            if(board[1][2]!=' ')
            {
                printf("Error!\n");
                player1_move(); 
            }
            board[1][2]='X';
        }
        else if(choice==7)
        {
            if(board[2][0]!=' ')
            {
                printf("Error!\n");
                player1_move(); 
            }
            board[2][0]='X';
        }
        else if(choice==8)
        {
            if(board[2][1]!=' ')
            {
                printf("Error!\n");
                player1_move(); 
            }
            board[2][1]='X';
        }
        else if(choice==9)
        {
            if(board[2][2]!=' ')
            {
                printf("Error!\n");
                player1_move(); 
            }
            board[2][2]='X';
        }
        else if(choice>9)
        {
            printf("INVALID!\n");
            do
            {
               player1_move(); 
            }while(choice<0);  
        }
        
        display_board();
}
void player2_move()
{
  int choice;
  
  printf("PLAYER2 enter number: ");
  scanf("%d",&choice);
  
        if(choice==1)
        {
            if(board[0][0]!=' ')
            {
                printf("Error!\n");
                player2_move(); 
            }
            board[0][0]='O';
        }
        else if(choice==2)
        {
            if(board[0][1]!=' ')
            {
                printf("Error!\n");
                player2_move(); 
            }
            board[0][1]='O';
        }
        else if(choice==3)
        {
             if(board[0][2]!=' ')
            {
                printf("Error!\n");
                player2_move(); 
            }
            board[0][2]='O';
        }
        else if(choice==4)
        {
             if(board[1][0]!=' ')
            {
                printf("Error!\n");
                player2_move();
            }
            board[1][0]='O';
        }
        else if(choice==5)
        {
             if(board[1][1]!=' ')
            {
                printf("Error!\n");
                player2_move(); 
            }
            board[1][1]='O';
        }
        else if(choice==6)
        {
             if(board[1][2]!=' ')
            {
                printf("Error!\n");
                do
                {
                   player2_move(); 
                }while(choice>0);
            }
            board[1][2]='O';
        }
        else if(choice==7)
        {
             if(board[2][0]!=' ')
            {
                printf("Error!\n");
                player2_move(); 
            }
            board[2][0]='O';
        }
        else if(choice==8)
        {
             if(board[2][1]!=' ')
            {
                printf("Error!\n");
                player2_move(); 
            }
            board[2][1]='O';
        }
        else if(choice==9)
        {
             if(board[2][2]!=' ')
            {
                printf("Error!\n");
                player2_move(); 
            }
            board[2][2]='O';
        }
        else if(choice>9)
        {
            printf("INVALID!\n");
            do
            {
               player2_move(); 
            }while(choice<0);
        }
        
        display_board();
}
int winner()
{
    int i;
    
    for(i=0;i<3;i++)
    {
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][2]==board[i][0])
        {
            return board[i][0];
        }
        else if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[2][i]==board[0][i])
        {
            return board[0][i];
        }
        else if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[2][2]==board[0][0])
        {
            return board[0][0];
        }
        else if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[2][0]==board[0][2])
        {
            return board[0][2];
        }
    }
    return ' ';
}

#include<stdio.h>
#include<conio.h>

//void printboard();

char board[]={'0','1','2','3','4','5','6','7','8','9'};

void main()
{
    printboard();
    int player=1;
    int p1;
    int status=-1;
    
    while (status=-1)
    {   
        player=(player%2==0) ?  2 : 1 ;
        char mark=(player=1) ? 'X':'O';

        printf("enter the no for player 1 \n",player);
        scanf("%d",&p1);

        if(p1<1 || p1>9 ){
        printf("invalid input");
        }

        board[p1]=mark;
        printboard();
    
    player++;
    }
}

void printboard()
{
printf("\n\n");
printf("< < <  TIC TAC TOE GAME   > > >\n\n");
printf("      |      |      \n");
printf("   %c  |   %c  |   %c   \n",board[1],board[2],board[3]);
printf("______|______|______\n");
printf("      |      |      \n");
printf("   %c  |   %c  |   %c   \n",board[4],board[5],board[6]);
printf("______|______|______\n");
printf("      |      |      \n");
printf("   %c  |   %c  |   %c   \n",board[7],board[8],board[9]);
printf("      |      |      \n");
printf("\n\n");
}


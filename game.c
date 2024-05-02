#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>

char board[10]={'0','1','2','3','4','5','6','7','8','9'};

int checkwin();
void drawBoard();

int main()
 {
     int player=1,i;
     int chioce;
     char mark;// X,O
     
     
    do{
        drawBoard();
        player=(player%2)?1:2;
        printf("Player %d,enter choice:",player);
        scanf("%d",&chioce);
        mark=(player==1)?'X':'O';
         if(chioce==1 && board[1]=='1'){
            board[1]=mark;
         }
        else if(chioce==2 && board[2]=='2')
        {
         board[2]=mark;
       }
      else if(chioce==3 && board[3]=='3')
        {
         board[3]=mark;
      }
         else if(chioce==4 && board[4]=='4')
        {
           board[4]=mark;
        }
        else if(chioce==5 && board[5]=='5')
        {
            board[5]=mark;
        }
         else if(chioce==6 && board[6]=='6')
         {
            board[6]=mark;
         }
         else if(chioce==7 && board[7]=='7')
        {
            board[7]=mark;
         }
         else if(chioce==8 && board[8]=='8')
        {
           board[8]=mark;
         }
         else if(chioce==9 && board[9]=='9')
         {
           board[9]=mark;
         }
         else
        {
           printf("invalid option");
            player--;
        }
       i=checkwin();
        player++;



    }while(i==-1);

    drawBoard();

    if(i==1)
    {
        printf("==>Player %d won",--player);

    }
    else
     {
         printf("==>Game draw");
     }
     return 0;
}
 int checkwin()
{
     if(board[1]==board[2] && board[2]==board[3])
       return 1;
     else if(board[4]==board[5] && board[5]==board[7])
      return 1;
    else if(board[7]==board[8] && board[8]==board[9])
     return 1;
   else if(board[1]==board[4] && board[4]==board[7])
     return 1;
     else if(board[2]==board[5] && board[5]==board[8])
       return 1;
    else if(board[3]==board[6] && board[6]==board[9])
      return 1;
    else if(board[1]==board[5] && board[5]==board[9])
       return 1;
     else if(board[3]==board[5] && board[5]==board[7])
       return 1;
     else if(board[1]!='1' && board[2]!='2' && board[3]!='3' && board[4]!='4' && board[5]!='5' && board[6]!='6' &&
    board[7]!='7' && board[8]!='8' && board[9]!='9')
      return 0;
    else
    {
        return -1;
    }
}


void drawBoard()
{
    printf("\t\t\t-------------\n");
    printf("\t\t\t|Tic Tac Toe|");
    printf("\n\t\t\t-------------\n");
    printf("Player1 (X)-Player2 (O)\n\n\n");
    
    printf("   %c|   %c|  %c\n",board[1],board[2],board[3]);
    printf("____|____|____   \n");
    // printf("    |    |     \n");
    printf("   %c|   %c|  %c\n",board[4],board[5],board[6]);
    printf("____|____|____   \n");
    printf("   %c|   %c|  %c\n",board[7],board[8],board[9]);
    printf("____|____|____   \n");
    
}
    

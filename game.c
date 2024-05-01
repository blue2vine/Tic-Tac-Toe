#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>

char board[10]={"0","1","2","4","5","6","7","8","9"};
int checkwin();
void drawBoard();

int main()
{
    int player=1,i,choice;
    char marks;// X,O
    do{
        drawBoard();
        player=(player%2)?1:2;
        printf("Player %d,enter choice:",player);
        scanf("%d",&chioce);
        mark=(player==1)?'X':'O'
        if(chioce==1 && board[1]=="1")
        {
           board[1]=mark;
        }
        else if(chioce==2 && board[2]=="2")
        {
           board[2]=mark;
        }
        else if(chioce==3 && board[3]=="3")
        {
           board[3]=mark;
        }
        else if(chioce==4 && board[4]=="4")
        {
           board[4]=mark;
        }
        else if(chioce==5 && board[5]=="5")
        {
           board[5]=mark;
        }
        else if(chioce==6 && board[6]=="6")
        {
           board[6]=mark;
        }
        else if(chioce==7 && board[1]=="7")
        {
           board[7]=mark;
        }
        else if(chioce==8 && board[8]=="8")
        {
           board[8]=mark;
        }
        else if(chioce==9 && board[9]=="9")
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
        printf("==>Game draw")
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
}
    

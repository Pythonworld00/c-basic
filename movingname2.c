#include<stdio.h>
#include<conio.h>
#include<windows.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main()
{
    int x=50,y=30;
    char ch;
    gotoxy(x,y);
    printf("SajidAhmed");
    while(1)
    {
        ch=getch();
        switch(ch)
        {
            case 'w':
            {y--;
            break;}
            case 's':
            {y++;
            break;}
            case 'a':
            {x-=2;
            break;}
            case 'y':
            {x+=2;
            break;}
            case 'h':
            {x-=2;y--;
            break;}
            case 'g':
            {x+=2;y--;
            break;}
            case 'j':
            {y++;x-=2;
            break;}
            case 'm':
            {y++;x+=2;
            break;}
            case 27:
                exit (0);

        }
        system("cls");
        gotoxy(x,y);
        printf("SajidAhmed");


    }
}




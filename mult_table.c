#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1;
printf("Enter a positive integer:\t");
scanf("%d",&n);
    while(i<=20)
    {
        printf("%d\n",(i*n));
        i++;
    }

getch();
}

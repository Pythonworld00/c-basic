#include<stdio.h>
#include<conio.h>
int main()
{
    int p,t;
    float r,CI;
    printf("Enter the principle amount:\t");
    scanf("%d",&p);
    printf("Enter the rate of interest:\t");
    scanf("%f",&r);
    printf("Enter the time period:\t");
    scanf("%d",&t);
    CI=p*(1+r/100)*t;
    printf("Compound Interest:%f",CI);
    getch();
}

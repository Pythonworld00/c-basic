#include<stdio.h>
#include<conio.h>
int main()
{
    int p,t;
    float r,SI;
    printf("Enter the principle amount:\t");
    scanf("%d",&p);
    printf("Enter the rate of interest:\t");
    scanf("%f",&r);
    printf("Enter the time period:\t");
    scanf("%d",&t);
    SI=p*r*t/100;
    printf("simple interest:%f",SI);
    getch();
}

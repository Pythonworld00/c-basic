#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    float a,b,c,g,i,m;
    printf("enter two numbers");
    scanf("%f%f",&a,&b);
    printf("what operation do you want.....????\n1add,\n2subtract,\n3multiply\n4divide");
    c=a+b;
    g=a-b;
    i=a*b;
    m=a/b;
    scanf("%d",&n);
    switch(n)
    {
        case 1:
           printf("%f",c);
           break;
        case 2:
           printf("%f",g);
           break;
        case 3:
            printf("%f",i);
            break;
        case 4:
            printf("%f",m);
            break;
    default:
        printf("wrong input");
        break;
    }
  getch();
}

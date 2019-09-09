#include<stdio.h>
#include<conio.h>
 int main()
 {

     int i,arr[5],sum=0;
     for(i=0;i<5;i++)
     {
         arr[i]=i+2;
     }
     for(i=0;i<5;i++)
        {sum=sum+arr[i];}
    printf("sum:\t%d",sum);
   getch();
 }

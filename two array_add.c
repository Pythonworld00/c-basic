#include<stdio.h>
#include<conio.h>
int main()
{
    int i,arr1[8],arr2[8],arraysum[8];
    for(i=0;i<=7;i++)
    {
            arr1[i]=i+2;
            printf("%d\t",arr1[i]);
    }
    printf("\n");
      for(i=0;i<=7;i++)
      {
            arr2[i]=i+5;
            printf("%d\t",arr2[i]);
      }
        printf("\nSum of the arrays\n");
        for(i=0;i<=7;i++)
        {
            arraysum[i]=arr1[i]+arr2[i];
            printf("%d\t",arraysum[i]);
        }

 getch();
}

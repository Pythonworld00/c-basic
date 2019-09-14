#include<stdio.h>
#include<conio.h>
void main()
{

    int a,b;
    printf("if you want to calculate area press 1\n");
    printf("if you want to calculate perimeter press 2\n");
    scanf("%d",&a);
    printf("which shape you want\n");
    printf("\n press 1 for circle \n press 2 for square \n press 3 for rectangle \n press 4 for triangle\n");
    scanf("%d",&b);
    switch(a)
    {
    case 1://calculate area
        {
            switch(b)
                {
                case 1://for circle
                    {
                        float r,area;
                        printf("\n you have selected circle\n");
                        printf("enter the radius\n");
                        scanf("%f",&r);
                        area=3.14*r*r;
                        printf("area of circle is:%f\n",area);
                        break;
                    }
                case 2://for square
                    {
                        float s,area;
                        printf("\n you have selected square \n");
                        printf("enter the side");
                        scanf("%f",&s);
                        area=s*s;
                        printf("area of square is: %f\n",area);
                        break;
                    }
                case 3://for rectangles
                    {
                        float l,b,area;
                        printf("\n you have selected rectangle\n");
                        printf("enter the length");
                        scanf("%f",&l);
                        printf("enter the breath");
                        scanf("%f",&b);
                        area=l*b;
                        printf("area of rectangle is: %f\n",area);
                        break;
                    }
                case 4://for triangle
                    {
                        float l,b,h,area;
                        printf("\n you have selected triangle\n");
                        printf("enter the base");
                        scanf("%f",&l);
                        printf("enter the height");
                        scanf("%f",&h);
                        area=0.5*l*b;
                        printf("area of the triangle is :%f",area);
                        break;

                    }
                default:
                    {
                        break;
                    }


                }
                break;
        }
    case 2://calculate perimeter
        {
            switch(b)
            {
                case 1://for circle
                    {
                        float d,c;
                        printf("\n you have selected circle\n");
                        printf("enter the diameter");
                        scanf("%f",&d);
                        c=3.14*d;
                        printf("circumference of circle is:\n",&c);
                        break;

                    }
                case 2://for square
                    {
                        float s,p;
                        printf("\nyou have selected square\n");
                        printf("enter the side");
                        scanf("%f",&s);
                        p=4*s;
                        printf("perimeter of square is: %f\n",p);
                        break;

                    }
                case 3://for rectangles
                    {
                        float l,b,p;
                        printf("\n you have selected rectangle\n");
                        printf("enter the length");
                        scanf("%f",&l);
                        printf("enter the breath");
                        scanf("%f",&b);
                        p=2*(l+b);
                        printf("perimeter of rectangle is: %f\n",p);
                        break;

                    }
                case 4://for triangle
                    {
                        float l,b,h,p;
                        printf("\n you have selected triangle\n");
                        printf("enter the lengthof first side");
                        scanf("%f",&l);
                        printf("enter the length of second side");
                        scanf("%f",&b);
                        printf("enter the length of third side");
                        scanf("%f",&h);
                        p=l+b+h;
                        printf("perimeter of triangle:%f\n",p);
                        break;

                    }
                default:
                    {
                        break;
                    }

                }
        }

        }
     getch();
    }

#include <stdio.h>


int main() 

{

	int a,b,c;

	printf("enter three numbers:");

	scanf("%d %d %d",&a,&b,&c);

	printf("\n");

	if(a==b && b==c)

	{

	    printf("all are equal");

	}

	else if(a==b)

	{

	    if(a>c)

	    {
	        
            printf("a is equal to b equal to %d and is greater than c=%d",a,c);

	    }
	    
      else
	    
       {
	      
      printf("a is equal to b equal %d but c =%d is greatest",a,c);
       }
	       
	 
    }
	 else if(a==c)

	 { if (a>b)

	     {
	
              printf("a is equal to c equal to %d and is greater than b=%d",a,b);

	     }
	     
          else
	     
            {
	 
             printf("a is equal to c equal to %d but b=%d is greatest",a,b);

	    }
	 
         }
	
        else if(c==b)
	
       { if(c>a)
	    
                 {
                  printf("c is equal to b equal to%d and is greater than a=%d",c,a);

	         }
	    
           else
	    
           
              {  
                printf("c is equal to %d but a =%d is greatest",c,a);

	      }
	 
       }

       else


          if(a>b && b>c)

       {
    
        printf("a=%d is greatest",a);

       }
    
        else if(b>c)
    
     {
  
      printf("b=%d is greatest",b);

     }
   
   else   
    {
 
     printf("c=%d is greatest",c);

    }

} 

return 0;

}

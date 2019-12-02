#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b)
	{
		printf("%d ",c);
	 }
	else
	{ 
		if (b==c)
	    {
		    printf("%d ",a);
	 } 
     }
    else{ 
    	    if (a==c)
            {
     	        printf("%d ",b);
             } 
         }
    else {
    	     if (a==b && b==c)
    	     {
    	     	printf("All numbers all equal");
    	     }
    	   }  
    else {
    	     if (a!=b && b!=c)
    	     {
    	        printf("All numbers are unequal");
    	     }
    }	     
 }     
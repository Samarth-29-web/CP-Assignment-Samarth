#include <stdio.h>
int main()
{
	int i,j;
	float n;
	printf("Enter the strength of each line:");
	scanf("%f",&n);
	for ( i = 1; i <=10 ; i++ )
	{
		for ( j = 1; j<=n ; j++ )
		{
			if(i>=1 && i<=3)
	         {
	           if(j<(n/2.0) )
	           {
	           	   printf("0");
	           }	
	           else printf("*");
	          }
	        else if(i>=4 && i<8)
	             {
                     printf("*");
	              }
	        else if(i<=10)
	             {
                     if(j<(n-5))
                     {
                     	printf("*");
                     }
                     else printf("0");
	              }
	     }
		printf("\n");
	 }
 }

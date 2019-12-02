#include <stdio.h>
int main()
{
	int i,j;
	float n;
	printf("Enter the strength of each line: ");
	scanf("%f",&n);
	for (i = 1; i <=4; i++)
	{
		for (j=1 ; j<=n ; j++)
		{
			if (i%2!=0)
			{	
			if(j%2!=0)
	        printf("0");
	        else printf("*");
		     }
		    else 
		     {
		     	if(j%2==0)
		     	printf("0");
                else printf("*");		     
              }
         }     
         printf("\n");    
	 }
 }
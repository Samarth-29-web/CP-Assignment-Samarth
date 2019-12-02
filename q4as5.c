#include <stdio.h>
int main()
{
	int i,j;
	float n;
	printf("Enter the strength of each line: ");
	scanf("%f",&n);
	for (i = 1; i <=4; i++)
	{
		for (j=0 ; j<=n ; j++)
		{
			if (i%2!=0)
			{
                printf("0");
             }
            else 
            {
            	if(j%3==0 || j%5==0)
            		printf("0");
            	else printf("*");
             }
		 }
            printf("\n");    
	 }
 }
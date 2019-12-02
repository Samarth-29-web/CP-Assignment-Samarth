#include <stdio.h>
int main()
{
	int n=0;
	for (int i = 1; i<=10 ;i++)	
	{
		for(int j=1;j<=15;j++)
		{
			if(i<=2)
			{
				if(j==1)
					printf("0");
				else 
				{
					if(j%2==0)
						printf("0");
					else printf("*");
				}
			}
			else
			{ 
				if(i%2==1)
			    {
				    if(j<=n)
	     		    printf("*");
	     		    else if(j==n+1)
					printf("0");
					else if(j%2==0)
						printf("0");
					else printf("*");
				 }
				else 
				{
					if(j<=n)
					printf("0");
				    else if(j==n+1)
				    printf("0");
				    else if(j%2==0)
				    printf("0");
				    else printf("*");
                 }
		     } 
         } n+=1;
       printf("\n");
     }
}
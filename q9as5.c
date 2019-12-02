#include <stdio.h>
int main()
{
	int i,j,k=10,m,n;
	for ( i = 1; i <10 ; i++ )
	{
		for ( j = 1; j<=20 ; j++ )
		{
			if(i<=3)
				printf("*");
			else
			if(((i+j)>=10 && (i+j)<=21) && (i>3 || j<13))
				printf("0");
			else printf("*");
		     }
	     printf("\n");
	 }
 }
 
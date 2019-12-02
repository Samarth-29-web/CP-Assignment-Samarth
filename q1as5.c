#include <stdio.h>
int main()
{
	int i,j;
	for ( i = 1; i <=6 ; i++ )
	{
		for ( j = 1; j<=10 ; j++ )
		{
			if(i%2!=0)
			{
				printf("*");
			}
			else 
			{
				if(j%2!=0)
				{
					printf("*");
				}
			    else printf("0");
			}
		}
		printf("\n");
	}
}

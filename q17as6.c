#include <stdio.h>
int main()
{
	for(int i=1;i<=4;i++)
	{
		for( int j=1;j<=i+1;j++)
		{
			if(j==i+1)
				printf("%c",97);
			else printf("%c",65);
		}
 
     }
 }
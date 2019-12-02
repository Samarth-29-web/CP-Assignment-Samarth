#include <stdio.h>
int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=(i*(i+1))/2.0;j++)
		{
         printf("%c",65);
		 }
		printf("\n");
	}
 }
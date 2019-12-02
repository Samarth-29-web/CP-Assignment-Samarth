#include <stdio.h>
int main()
{
	int n=0;
	for(int i=1;i<=6;i++)
	{
		for( int j=0;j<=6-i;j++)
		{
			printf("%c",65+j*i);
		 } 

         printf("\n");
	} 
}
#include <stdio.h>
int main()
{
	int n=1;
	for(int i=1;i<=6;i++)
	{
		for( int j=1;j<=i;j++)
		{
			printf("%c",85-n+1);
			n++;
			}  
        printf("\n");
     }    
 } 
 
#include <stdio.h>
int main()
{
	int i,j,n=8;
	for ( i = 1; i <=1 ; i++ )
	{
		for ( j = 1; j<=20 ; j++ )
		{
			printf("*");
			
		 } printf("\n");
	 }	 
	 for(i=1;i<=9;i++)
	 {
	 	for(j=1;j<=20;j++)
	 	{
			if(i+j<9 || i+j>=n)
	     	printf("*");
			else
				 printf("0");
	 
	 	 }
	 	 n+=3;
	 	printf("\n");
      }  
 }
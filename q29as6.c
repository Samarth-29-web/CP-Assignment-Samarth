#include <stdio.h>
int main()
{
	int n=0;
	for(int i=0;i<=5;i++)
	{
		for( int j=0;j<=5;j++)
		{
			if(j<(10/2)-i)
				printf(" ");
			else
			{
				if(j<=(10/2))
				{	
					printf("%c",65+j);
				 }	
		     } 
		 }     
      printf("\n");
   	 } 
 }
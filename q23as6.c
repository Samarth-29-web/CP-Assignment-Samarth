#include <stdio.h>
int main()
{
	for(int i=1;i<=6;i++)
	{
		for( int j=1;j<=6;j++)
		{
			if(j<=i)
				printf("%c",96+j);
			else 
				printf("%c",64+j);
         }

	 printf("\n");
	}
}
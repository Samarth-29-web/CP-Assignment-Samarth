#include <stdio.h>
int main()
{
	for (int i = 0; i<10 ;i++)	
	{
		for(int j=1;j<=20;j++)
		{
			if((i+j)<7 || j>=12)
				printf("0");
			else printf("*");
		}
		printf("\n");
	}

}
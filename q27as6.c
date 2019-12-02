#include <stdio.h>
int main()
{
	int n=0;
	for(int i=0;i<=6;i++)
	{
		for( int j=1;j<=6-i;j++)
		{
			for(int n=0;n<=i;n++)
			printf("%c",65+j+i-1);
		 } 
      printf("\n");
	} 
}
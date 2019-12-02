#include <stdio.h>
int main()
{
	int i,j,n=0;
	for(int i=1;i<=6;i++)
	{
		for( int j=1;j<=i;j++)
		{
			printf("%d",(j*(j+1))/2);
			}
		n+=(j+i);
		printf("\n");
	} 
}
 
#include <stdio.h>
int main()
{
	int n=0;
	for(int i=1;i<=7;i++)
	{
		for( int j=0;j<32;j+=(i+3))
		{
			printf("%d,",j);
		}
		printf("\n");
	}
}
 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		printf("%d ",a );
	}
	 else if (c>a)
	{
		printf("%d ",c);
	}
	else printf("%d ",b);
  }
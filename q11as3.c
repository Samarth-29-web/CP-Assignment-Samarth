#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	if ((a>b && b>c) || (c>b && b>a))
	{
        printf("%d ",b);
	}
	if ((b>a && a>c) || (c>a && a>b))
	{
		printf("%d",a);
	}
    if ((b>c && c>a) || (a>c && c>b))
    {
    	printf("%d",c);
    }

 }






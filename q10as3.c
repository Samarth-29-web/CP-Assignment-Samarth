#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && c>b)
        printf("%d",b);
    else if (b>a && c>a)
    	printf("%d",a);
    else if (b>c && a>c)
    	printf("%d",c);
 }
 
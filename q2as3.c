#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a>b && a>c && a>d)
    {
    	printf("%d ",a);
    }
    else if(c>a && c>b && c>d )
    {
    	
    	printf("%d ",c);
    }
    else if (d>a && d>b && d>c)
    {
    	printf("%d ",d);
    }
    else printf("%d ",b);
	}
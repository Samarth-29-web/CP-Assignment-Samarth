#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d,e,n=0;
	printf("Enter five numbers: ");
	for (int i = 1; i <= 5 ; ++i)
	{
	    scanf("%d",&a);
	    n=a/10;
	    printf("%d",n);
	}
 }
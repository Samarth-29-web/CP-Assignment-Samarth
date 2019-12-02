#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d,e,n1,n2,n3,n4,n5;
	printf("Enter five numbers: ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	for (int i = 1; i <= 5 ; i++) 
	{
	    n1=a%100;n2=b%100;n3=c%100;n4=d%100;n5=e%100;
	    printf("Sum=%d",n1+n2+n3+n4+n5);
     }
 }    
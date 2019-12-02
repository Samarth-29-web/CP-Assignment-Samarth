#include <stdio.h>
int main()
{
	int a,out,s,o1,o2,sum;
	printf("Enter a number=");
	scanf("%d",&a);
    out=a%100;
    s=a/10;
    o1=out/10;
    o2=a%10;
    sum=o1+o2;
    printf("Sum=%d\n",sum);
 }
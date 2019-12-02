#include<stdio.h>
int main()
{
	int a,out,out1;
	printf("Enter a number:");
	scanf("%d",&a);
	out=a%100;
	out1=out/10;
	printf("Output=%d",out1);
	}
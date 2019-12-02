#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	float s,area;
	printf("Enter the length of the sides:");
	scanf("%d %d %d",&a,&b,&c);
	s=(a+b+c)*0.5;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area=%lf",area);
}
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	float c,d,slope;
	printf("Enter the coefficients of x and y : ");
    scanf("%d %d ",&a,&b);
    c=-a/b;
    d=-a%b;
    slope=c+d;
    printf("Slope=%f",slope);
 }
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	float a,b,c;
	float c1,c2,r;
	printf("Enter the values of a,b and c:");
	scanf("%f %f %f",&a,&b,&c);
	c1=-a/2;
	c2=-b/2;
	r=sqrt(fabs((a*a)/4+(b*b)/4-c));
	printf("Centre=%f",c1);
	printf(",%f",c2);
	printf("Radius=%f",r);
 }
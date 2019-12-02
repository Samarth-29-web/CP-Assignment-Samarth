#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	float a,b,c,p,q,r;
    float x,y;
    printf("Enter the coefficients of x and y in line1:");
    scanf("%f %f",&a,&b);
    printf("Enter the value of constant in line1:");
    scanf("%f",&c);
    printf("Enter the coefficients of x and y in line2:");
    scanf("%f %f",&p,&q);
    printf("Enter the value of constant in line2:");
	scanf("%f",&r);
	x=((c*q)-(b*r))/((b*p)-(a*q));
	y=((c*p)-(a*r))/((a*q)-(b*p));
	printf("Point=%f,",x);
	printf("%f",y);
  }
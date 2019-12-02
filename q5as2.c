#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d,e;
	float dist;
	printf("Enter the coordinates of the point:");
	scanf("%d %d",&a,&b);
	printf("Enter the coefficients of x and y :");
	scanf("%d %d",&c,&d);
	printf("Enter the value of constant:");
    scanf("%d",&e);
    dist=fabs(((a*c)+(b*d)+e)/sqrt((c*c)+(d*d)));
    printf("Distance:%f",dist);
 }
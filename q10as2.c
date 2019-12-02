#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	float a,b,r,l,x;
	printf("Enter the coordinates of the centre:");
	scanf("%f %f",&a,&b);
	printf("Enter the radius;");
	scanf("%f",&r);
	printf("Enter the value of x:");
    scanf("%f",&x);
    l=2*sqrt(fabs((r*r)-(x-a)*(x-a)));
    printf("Length=%f ",l);
  }
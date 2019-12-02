#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	float a,b,slope;
	printf("Enter the coefficients of x and y: ");
	scanf("%f %f",&a,&b);
	if (b==0)
	{
		printf("Line is vertical ");
	}
	else {
		    slope=-a/b;
	        printf("Slope=%f ",slope);
          }
}
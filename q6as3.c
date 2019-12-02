#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	float a,b,c,r1,r2,rt1,rt2,D;
	printf("Enter the values of a,b and c: ");
	scanf("%f %f %f",&a,&b,&c);
	D=(b*b)-4*a*c;
	if(D==0)
	{
        r1=(-b/(2*a) + sqrt(D)/(2*a));
        printf("Root=%f",r1);
	}
	else if (D>0)
	{
		r1=(-b/(2*a) + sqrt(D)/(2*a));
		r2=(-b/(2*a) - sqrt(D)/(2*a));
		printf("Roots=%f , %f ",r1,r2);
	}
	else if (D<0)
	{
        rt1=-b/(2*a);
        rt2=sqrt(fabs(D))/(2*a);
        r1=rt1+rt2;
        r2=rt1-rt2;
        printf("Roots=%f + %fi,%f - %fi",rt1,rt2,rt1,rt2);

	}
	}
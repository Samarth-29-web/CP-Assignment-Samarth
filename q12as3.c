#include <stdio.h>
int main()
{
	double p,q,r,a,b,c,d,e,f;
	printf("Enter values :");
	scanf("%lf %lf %lf %lf %lf %lf",&p,&q,&r,&a,&b,&c);
	d = (a*p + b*q +c)/sqrt(a*a+b*b) ;
    f=sqrt(r*r - d*d);
	if(d<r || d>-r)
	{
		printf("Line and circle intersect.");
	if(d>0)
	    printf("%lf",f*d);
	else 
        printf("%lf",-f*d);
       }
	else 
		printf("Not intersection.");

 }
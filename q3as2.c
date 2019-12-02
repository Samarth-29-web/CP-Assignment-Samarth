#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d,e,f;
	float d1,d2,d3,s,area;
	printf("Enter the coordinates:");
	scanf("%d %d %d %d %d %d ",&a,&b,&c,&d,&e,&f);
	d1=sqrt((a-c)*(a-c) + (b-d)*(b-d));
	d2=sqrt((a-e)*(a-e) + (b-f)*(b-f));
	d3=sqrt((c-e)*(c-e) + (d-f)*(d-f));
	s=(d1+d2+d3)*0.5;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area=%f",area);
  }
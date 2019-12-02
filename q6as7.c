#include <stdio.h>
#include <math.h>
int main()
{
	float i,j,k,l,m,n,p;
	printf("Enter four numbers: ");
	scanf("%f %f %f",&i,&j,&k);
	p=sqrt((i*i)+(j*j)+(k*k));
	printf("%fi+%fj+%fk\n",(i/p),(j/p),(k/p));
 }
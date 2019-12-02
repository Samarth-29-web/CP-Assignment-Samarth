#include <stdio.h>
int main()
{
	float i,j,k,l,m,n,p;
	printf("Enter four numbers: ");
	scanf("%f %f %f %f %f %f",&i,&j,&k,&l,&m,&n);
	p=(i*l)+(j*m)+(k*n);
	printf("Product=%f\n",p);
 }
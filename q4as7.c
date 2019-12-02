#include <stdio.h>
int main()
{
	float i,j,k,l,m,n;
	printf("Enter four numbers: ");
	scanf("%f %f %f %f",&i,&j,&k,&l);
	m=(i+k)/2.0;
	n=(j+l)/2.0;
	printf("Co-ordinates=%f,%f",m,n);
 }
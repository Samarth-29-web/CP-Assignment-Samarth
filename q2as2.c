#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d,dist;
	printf("Enter the coordinates:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	dist=sqrt((a-c)*(a-c) + (b-d)*(b-d));
	printf("Distance=%d",dist);
  }
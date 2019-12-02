#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
	printf("Enter the sides in descending order: ");
	scanf("%d %d %d",&a,&b,&c);
	if ((a*a)==(b*b)+(c*c))
	{
		printf("A=90deg");
	}
	else printf("Not a right angled triangle \n");
  }
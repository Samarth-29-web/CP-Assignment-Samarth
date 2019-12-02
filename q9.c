#include <stdio.h>
int main()
{
	int a,s1,s2,d1,d2;
	printf("Enter a number:");
	scanf("%d",&a);
    s1=a/100;
    d1=a%10;
    printf("Output=%d",s1);
    printf("%d",d1 );
  }
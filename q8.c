#include<stdio.h>
int main()
{
	int a,s,s1,s2,out;
	printf("Enter a number:");
	scanf("%d",&a);
	s=a%10;
	s1=a/10;
    s2=s*2;
    out=s1+s2;
    printf("Output=%d",s1 );
    printf("%d\n",s2);
    
    
    }
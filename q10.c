#include<stdio.h>
int main()
{
    int a,s1,s2,d1,d2;
    printf("Enter a number:");
    scanf("%d",&a);
    s1=a/100;
    s2=a%100;
    d1=s2/10;
    d2=s2%10;
    printf("Output=");
    printf("%d", s1);
    printf("%d", d2);
    printf("%d", d1);
    return 0;

 }
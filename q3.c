#include<stdio.h>
void main()
{
    int a,b,c,x,func;
    printf("Enter the values of a,b,c,x:");
    scanf("%d %d %d %d",&a,&b,&c,&x);
    func=a*x*x+b*x+c;
    printf("f(%d",x);
    printf(")=");
    printf("%d",func);
}
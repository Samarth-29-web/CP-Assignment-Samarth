#include <stdio.h>
int main()
{
	int i,s;
	for (int i = 1;i<=100;i++)
	{
	  s=i%10;
	  if(s>5 && s<8)
	  {
	    printf("%d ",i);
	   }     
	 }
 }    
#include <stdio.h>
int main()
{
	int i,s,p;
	for (int i = 1;i<100;i++)
	{
	  s=i%10;
	  p=i/10;
	  if((s+p)%7==0)
	  {
	    printf("%d ",i);
	   }     
	 }
 }    
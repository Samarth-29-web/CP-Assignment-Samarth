#include <stdio.h>
int main()
{
	int i;
	for (int i = 1;i<=100;i++)
	{
		if (i<20 || i>90 || (i>50 && i<70))
		{
			printf("%d ",i);
		 }
     }
 }    
#include <stdio.h>
int main()
{
	int i;
	for (int i = 1;i<=100;i++)
	{
		if (i<50)
		{
			if (i%2==0)
			{
				printf("%d ",i);
			 }
		 }
		 if (i>50)
		 {
		 	if(i%2!=0)
		 	{
		 		printf("%d ",i);
             }
		  }
     }
 }    
#include <stdio.h>
int main()
{
	int i;
	for (int i = 20;i<=80;i++)
	{
		if (i<=40)
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
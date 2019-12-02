#include <stdio.h>
int main()
{
	int i;
	for (int i = 20; i <=80 ; i++)
	{
		if (i<=40)
		{
			printf("%d ",i);
		}
	  else 
	      { if (i>=50 && i<=80)
         	{
		       if(i%2==0)
		       {
		           printf("%d ",i);	
		        }
	         }
	       }
     }
 }    
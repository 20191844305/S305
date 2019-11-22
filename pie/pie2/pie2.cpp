#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
	{
	 float pie=0,n=1,i=1.0,j=1.0;
	 while(fabs(i)>=1e-6)
		{
		 pie+=i;
		 j=j+2;
		 n=-n;
		 i=n/j;
		}
	 pie=4*pie;
	 printf("pie:%.6f\n",pie);
	 return 0;
	}
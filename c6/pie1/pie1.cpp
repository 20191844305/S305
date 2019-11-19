#include<stdio.h>
#include<math.h>
int main()
	{
     float pie=1,n=1;
	 int i;
	 for(i=1;i<=100;i++,n++)
		{
		 if(i%2==0)
			pie*=(n/(n+1));
		 else
			pie*=((n+1)/n);
		}
	 pie=2*pie;
	 printf("pie:%.7f\n",pie);
	 return 0;
	}


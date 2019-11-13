#include<stdio.h>
#include<math.h>
int main()
	{
	 int sign=1,times=0;
	 double pi=0.0,n=1.0,term=1.0;  
	 while(fabs(term)>=1e-6)
		{
		 pi=pi+term;
		 n=n+2;
	     sign=-sign;
		 term=sign/n;
		 times++;
		}
	 pi=pi*4;
	 printf("pi=%10.8f\n",pi);
	 printf("times=%d\n",times);
	 return 0;
	}
//pi=3.14159865;times=500000

#include<stdio.h>
#include<math.h>
int main()
	{
	 int sign=1,times=0;
	 double pi=0.0,n=1.0,term=1.0;  
	 while(fabs(term)>=1e-8)
		{
		 pi=pi+term;
		 n=n+2;
	     sign=-sign;
		 term=sign/n;
		 times++;
		}
	 pi=pi*4;
	 printf("pi=%10.8f\n",pi);
	 printf("times=%d\n",times);
	 return 0;
	}
//pi=3.14159263;times=50000000


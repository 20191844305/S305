#include<stdio.h>
#include<math.h>
int main()
	{
	 int a,b,n,number[101];
     for(a=1;b<=100;a++)
	     number[a]=a;
		 number[1]=0;
	 for(a=2;a<sqrt(100);a++)
     for(b=a+1;b<=100;b++)
		{
		 if(number[a]!=0&&number[b]==0)
			if(number[b]%number[a]==0)
				number[b]=0;
		}
	 printf("\n");
	 for(a=2,n=0;a<=100;a++)
		{
		 if(number[a]!=0)
			{printf("%5d",number[a]);
		     a++;
			}
		 if(n==10)
			{printf("\n");
		     n=0;
			}
		}
	 printf("\n");
	 return 0;
	}



#include<stdio.h>
int main()
	{
	 int a,b=0,n,i=1,sum=0;
	 printf("«Î ‰»Îa,n:");
     scanf("%d%d",&a,&n);
	   while(i<=n)
	   {
		b=b+a;
		sum=sum+b;
		a=a*10;
		i++;
	    printf("a+aa++aaa+...=%d\n",sum);
	   }
	 return 0;
	}
		
	 
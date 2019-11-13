#include<stdio.h>
int main()
	{
	 int m,n,bei,yue,a;
	 printf("请输入两个正整数:");
	 scanf("%d,%d",&m,&n);
	 if(n<m)
		{
		 a=n;
		 n=m;
		 m=a;
		}
	 bei=n*m;
	 while(m!=0)
		{
		 yue=n%m;
		 n=m;
		 m=yue;
		}
	 printf("最大公约数:%d\n",n);
	 printf("最小公倍数:%d\n",bei/n);
	 return 0;
	}
#include<stdio.h>
int main()
	{
	 int a[3][3],sum=0,i,j;
	 printf("ÊäÈëÊı¾İ:\n");
	 for(i=0;i<3;i++)
		 for(j=0;j<3;j++)
			 scanf("%3d",&a[i][j]);
		 for(i=0;i<3;i++)
			 sum=sum+a[i][i];
		 printf("sum=%5d\n",sum);
		 return 0;
	}

	 
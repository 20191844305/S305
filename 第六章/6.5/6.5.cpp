#include<stdio.h>
int main()
	{
	 int a[5],i,j;
	 printf("ÇëÊäÈëÊı¾İ:\n");
	 for(i=0;i<5;i++)
		 scanf("%d",&a[i]);
	 
	 for(i=0;i<5;i++);
	 
	 for(i=0;i<5/2;i++)
		{
		 j=a[i];
		 a[i]=a[5-i-1];
		 a[5-i-1]=j;
		}
	 printf("\na:\n");
	 for(i=0;i<5;i++)
		 printf("%5d",a[i]);
	 printf("\n");
	 return 0;
	}



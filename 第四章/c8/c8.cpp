#include<stdio.h>
#include<math.h>
int main()
	{
	 int num,place;
	 printf("请输入一个不超过五位的整数:");
	 scanf("%d",&num);
	 if(num>9999)
	    place=5;
	 else if(num>999)
		     place=4;
	 else if(num>99)
		     place=3;
	 else if(num>9)
		     place=2;
	 else place=1;
	 printf("位数:%d\n",place);
	 return 0;
	}
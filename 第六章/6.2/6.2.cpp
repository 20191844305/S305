#include<stdio.h>
int main()
	{
	 int a,b,c,min,n[11];
		 printf("ÇëÊäÈëÊı¾İ:\n");
		 for(a=1;a<=10;a++)
			{
			 printf("n[%d]=",a);
			 scanf("%d",&n[a]);
			}
		 for(a=1;a<=9;a++)
			{min=a;
		     for(b=a+1;b<=10;b++)
				 if(n[min]>n[b])
					 min=b;
				 c=n[a];
				 n[a]=n[min];
				 n[min]=c;
			}
		 printf("ÅÅĞò:\n");
		 for(a=1;a<=10;a++)
			 printf("%5d",n[a]);
		 printf("\n");
		 return 0;
	}

		 

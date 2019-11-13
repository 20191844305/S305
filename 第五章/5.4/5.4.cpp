#include<stdio.h>
int main()
	{
	 char c;
	 int number=0,word=0,character=0,space=0;
	 printf("请输入一行字符:\n");
	 while((c=getchar()!='\n'))
		{
		 if(c>='a'&&c<='z'||c>='A'&&c<='Z')
			 word++;
		 else if(c==' ')
			     space++;
		 else if(c>='0'&&c<='9')
			     number++;
		 else character++;
		}
	 printf("数字数:%d\n字符数:%d\n字母数:%d\n空格数:%\n",number,character,word,space);
	 return 0;
	}

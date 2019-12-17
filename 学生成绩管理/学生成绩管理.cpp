// 学生成绩管理.cpp : Defines the entry point for the console application.
//

typedef struct tagStudent
	{
	 char name[100];
	 int age;
	 int num;
	 int scorea;
	}

typedef struct tagNode
	{
	 Student stu;
	 struct tagNode*pNext;
	}

Node*g_pHead=NULL;

void Input();
void Print();
void Save();
void Read();
void Count();
void Find();
void ave()




int main()
	{
	 while(1)
		{
		  
		  printf("\t\t1.录入学生信息\n");
		  printf("\t\t2.打印学生信息\n");
		  printf("\t\t3.保存学生信息\n");
		  printf("\t\t4.读取学生信息\n");
		  printf("\t\t5.统计人数\n");
		  printf("\t\t6.平均分\n");
		  printf("\t\t7.查找学生信息");
		  
		  
		  printf("\t\t0.退出");



		  char ch;
		  scanf("%c",&ch);
		  ch=_getch();


		  switch(ch)
			{
				case'1':Input();
					break;
				case'2':Print();
					break;
				case'3':Save();
					break;
				case'4':Read();
					break;
				case'5':printf("人数:%d\n",count);
					break;
				case'6':ave();
					break;
				case'7':
					{
					 Node*pNode=Find();
					 if(pNode!=NULL)
						{
						 printf("学号:%d\t姓名:%s\t年龄:%d\t成绩:%d\n",pNode->stu.num,pNode->stu.name,pNode->stu.age,pNode->stu.scorea);
						}
					 break;
					}
				
				
				case'0':printf("\n");return 0;break;
				default;
		 		printf("输入有误\n");
				break;
			}
		}
	 return 0;
	}




void Input()
	{
	 priintf("输入学生信息:姓名 学号 年龄 成绩\n");
	 Node*p;
	 p=g_pHead;
	 while(g_pHead!=NULL && p->pNext!=NULL)
		{
		 p=p->pNext;
		}
	 Node*pNewNode=pNewNode->pNext=NULL;
	 if(g_pHead==NULL)
		{
		 g_pHead=pNewNode;
		 p=g_pHead;
		}
	 else
		{
		 p->pNext=pNewNode;
		}
	 scanf("%s %d %d %d",pNewNode->stu.name,&pNewNode->stu.num，&pNewNode->stu.age,&pNewNode->stu.scorea);
	 system("cls");
	 printf("\n");
	}




void Print()
	{
	 system("cls");
	 printf("打印学生信息\n");
	 Node*p;
	 p=g_pHead;
	 while(p!=NULL)
		{
		 printf("学号:%d\t姓名:%s\t年龄:%d\t成绩:%d\n",p->stu.num,p->stu.name,p->stu.age,p->stu.scorea);
		}
	}


void Save()
	{
	 system("cls");
	 FILE*pFile=fopen("C:\\学生信息.txt","w");
	 if(pFile==0)
		{
		 printf("\n");
		 return;
		}

	 Node*p;
	 p=g_pHead;
	 while(p!=NULL)
		{
		 fprintf(pFile,"%d %s %d %d\n",p->stu.num,p->stu.name,p->stu.age,p->stu.scorea);
		 p=p->pNext;
		}
	 printf("\n");
	 fclose(pFile);
	}



void Read()
	{
	 system("cls");
	 Node*p,*p2;
	 p=p2=g_pHead;
	 while(p2!=NULL)
		{
		 p=p->pNext;
		 free(p2);
		 p2=p;
		}
	 g_pHead=NULL;
	 FILE*pFile=fopen("C:\\学生信息.txt","r");
	 if(pFile==0)
		{
		 printf("\n");
		 return;
		}
	 while(!feof(pFile))
		{
		 Node*pTemp=(Node*)malloc(sizeo(Node));
		 fscanf(pFile,"%d %s %d %d\n",&pTemp->stu.num,&pTemp->stu.name,&pTemp->stu.age,&pTemp->stu.scorea);
		 if(g_pHead==NULL)
			{
				g_pHead=pTemp;
				p=g_pHead;
			}
		 else
			{
			 p->pNext=pTemp;
			 p=p->pNext;
			 p->pNext=NULL;
			}
		}
	 fclose(pFile);
	}


void Count()
	{
	 system("cls");
	 int nCount=0;
	 Read();
	 Node*p;
	 p=g_pHead;
	 while(p!=NULL)
		{
		 nCount++;
		 p=p->pNext;
		}
	 return nCount;
	}

void ave(){
{
	int i,n;
	double sum=0;
	
	scanf("%d",&n);

	for(i=0;i<100;i++){
		sum=sum+a[n][i];
	
	
	printf("%7.2f\n", (sum/100));
}
	
void Find()
	{
	 system("cls");
	 int num;
	 printf("输入学号:\n");
	 scanf("%d",&num);
	 Read();
	 Node*p;
	 p=g_pHead;
	 while(p!=NULL)
		{
		 if(p->stu.num==num)
			{
			 return p;
			}
		 p=p->pNext;
		}
	 if(p==NULL)
		{
		 printf("查无此人\n");
		 return NULL;
		}
	 return NULL;
	}

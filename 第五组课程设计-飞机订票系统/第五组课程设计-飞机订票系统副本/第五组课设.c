#include<stdio.h> //��׼���롢���ͷ�ļ�
#include<string.h> //�����ַ�����������ͷ�ļ�
#include<stdlib.h> //������̬�洢���ͷź���ͷ�ļ�
#include<conio.h>
#define N 10000
struct air //����ṹ������
{
	char num[20];
	char start[20];
	char over[20];
	char time[10];
	int count;
}s[N];
int i;
int m=0,t=0;
#define PRINT "%-4s%12s%12s%10s%12d\n",s[i].num,s[i].start,s[i].over,s[i].time,s[i].count //���������ʽ
void input(); //���뺽����Ϣ
void print(); //���������Ϣ
void save(); //���溽����Ϣ
void read(); //��ȡ������Ϣ
void search(); //���Һ�����Ϣ
void shanchu(); //ɾ��������Ϣ
void dingpiao(); //��Ʊ��Ϣ
void tuipiao(); //��Ʊ��Ϣ
void xiugai(); //�޸���Ϣ
void fujia();
void main()
{
    system("color 5F");
	int j,y,x;
	int no,i,a=0;
	char f[200];
	char c[200]="123456";
	printf("��ѡ��������ݣ�\n\n"
           "    \t\t\t\t   ************************ \n\n"
           "    \t\t\t\t           1������Ա        \n\n"
           "    \t\t\t\t           2���û�          \n\n"
           "    \t\t\t\t   ************************\n\n");
	scanf("%d",&y);
	system("cls");
	switch(y)
	{
	case 1:
		printf("����������:\n\n");
	for(j=0;j<3;j++)
		{
			for(i=0;i<6;i++)
			{
				f[i]=getch();
				printf("*");
			}
			f[6]='\0';
			printf("\n");//��ȡ����
			if(strcmp(f,c)==0)
			{
				printf("��������ɹ�\n\n");
				do
                {
                    system("cls");
                   printf("\n");

				printf("\t                     ��---���ã���ӭ�����й��񺽹���ϵͳ��---��\n");
				printf("\t================================================================================\n");


					printf("\t                      * -------- �� 1.���뺽����Ϣ ��-------- *\n\n"
						"\t                      * -------- �� 2.���������Ϣ ��-------- *\n\n"
						"\t                      * -------- �� 3.�޸ĺ�����Ϣ ��-------- *\n\n"
						"\t                      * -------- �� 4.���Һ�����Ϣ ��-------- *\n\n"
						"\t                      * -------- �� 5.ɾ��������Ϣ ��-------- *\n\n"
						"\t                      * -------- �� 6.��Ʊ��Ϣ     ��-------- *\n\n"
						"\t                      * -------- �� 7.��Ʊ��Ϣ     ��-------- *\n\n"
                        "\t                      * -------- �� 8.���ӷ���     ��-------- *\n\n"
						"\t                      * -------- �� 0.�˳�         ��-------- *\n\n");
					printf("\t================================================================================\n");
					printf("����0-7��ѡ���Իس���������\n\n");
					scanf("%d",&x);
					switch(x)
					{
					case 1: input();//��������ģ��
						break;
					case 2:print();//���ô�ӡģ��
						break;
					case 3:xiugai();//�����޸�ģ��
						break;
					case 4:search();//���ò���ģ��
						break;
					case 5:shanchu(); //����ɾ��ģ��
						break;
					case 6:dingpiao();//���ö�Ʊģ��
						break;
					case 7:tuipiao();//������Ʊģ��
						break;
                    case 8:fujia();
                        break;
					case 0:;
						break;
					}
				}
				while(x!=0);//�жϽ���
            }
			else
			{
				if(j<2)
				{
                     printf("�����������!�������������Ƿ���ȷ!���������룬������%d�λ���\n\n",j+1);
				}
				else
				{
					printf("����3���������!�������������Ƿ���ȷ!лл!�ټ�!\n\n");
					exit(1);
				}
			}
		}


				printf("ллʹ�ã��ټ���\n");break;
	case 2:
	    do
        {
            system("cls");
            printf("\n");
		printf("\t                    ��---���ã���ӭ�����й��񺽹���ϵͳ��---��\n");
		printf("\t================================================================================\n");


			printf("\t                     * -------- �� 1.���������Ϣ ��-------- *\n\n"
				"\t                     * -------- �� 2.���Һ�����Ϣ ��-------- *\n\n"
				"\t                     * -------- �� 3.��Ʊ         ��-------- *\n\n"
				"\t                     * -------- �� 4.��Ʊ         ��-------- *\n\n"
                "\t                     * -------- �� 5.���ӷ���     ��-------- *\n\n"
				"\t                     * -------- �� 0.�˳�         ��-------- *\n\n");
			printf("\t================================================================================\n");
			printf("����0-4��ѡ���Իس���������\n\n");
			scanf("%d",&j);
			switch(j)
			{
			case 1: print();//���ô�ӡģ��
				break;
			case 2:search();//���ò���ģ��
				break;
			case 3:dingpiao();//���ö�Ʊģ��
				break;
			case 4:tuipiao();//������Ʊģ��
				break;
            case 5:fujia();
                break;
			case 0:;
				break;
			}
		}
		while(j!=0); //�жϽ���
		printf("ллʹ�ã��ټ���\n");
		break;
    }
}


//����������
void input()//��ӡģ�����
{
	int no,i,a=0;
	//int d;
	char f[200];
	char c[200]="123456";
	//char a;
	printf("����������:\n\n");
	for(i=0;i<6;i++)
	{
		f[i]=getch();
		printf("*");
	}
	f[6]='\0';
	printf("\n");//��ȡ����
        if(strcmp(f,c)!=0)
		printf("�����������!�������������Ƿ���ȷ!лл!�ټ�!\n\n");

	else
	{
		a=1;

	if(a==1)
	{
		printf("��������ɹ�");
		system("cls");
		printf("���������뺽����Ϣ(��Ʊ��Ϊ0�Իس���������):\n\n"); //��ӡ��ʾ��Ϣ
		printf("--------------------------------------------------------------------------\n");
		printf("�����            ��ʼվ               �յ�վ                 ʱ��            ��Ʊ��\n");
		for(i=0;i<N;i++)
		{
			scanf("%s%s%s%s%d",s[i].num,s[i].start,s[i].over,s[i].time,&s[i].count);
			m++;
			no=s[i].count;
			if(no==0)
			{
				printf("��%d��������Ϣ�ɹ�¼�� ",m);
				//printf("�Ƿ�Ҫ��������밴1�������밴2\n\n");
				//scanf("%d",&d);
			    print();//�������ĺ�����Ϣ
			    break;

			}
		}
		save();

	}
	}
		//printf("�����������!�������������Ƿ���ȷ!лл!�ټ�!\n\n");
}
void save()//����ģ�����
{
	FILE *fp,*fp1;//�����ļ�ָ��
	if((fp=fopen("D:\\�ɻ�Ʊ����.txt","wb"))==NULL)//���ļ����ж��Ƿ����
	{
		printf("�����ļ�ʧ��!\n\n");//��ӡ������ʾ
		getchar();
		return;
	}
    if((fp1=fopen("D:\\�ɻ�Ʊ����1.txt","wb"))==NULL)//���ļ����ж��Ƿ����
	{
		printf("�����ļ�ʧ��!\n\n");//��ӡ������ʾ
		getchar();
		return;
	}

	for(i=0;i<m;i++)
		if(fwrite(&s[i],sizeof(struct air),1,fp)==0)//���ļ�д�����ݣ����ж��Ƿ����
			printf("���ļ���������ʧ��!\n\n");
		fprintf(fp1,"%d",m);
		fclose(fp);//�ر��ļ�
		fclose(fp1);//�ر��ļ�
}

void read()//���ļ���ȡ��Ϣģ��
{
	FILE *fp,*fp1;//�����ļ�ָ��
	if((fp=fopen("D:\\�ɻ�Ʊ����.txt","rb"))==NULL)//���ļ������ж��Ƿ����
	{
		printf("���������ļ��Ƿ���ڣ������������ס�˵�");//��ӡ������ʾ
		getchar();
	}
	if((fp1=fopen("D:\\�ɻ�Ʊ����1.txt","rb"))==NULL)//���ļ����ж��Ƿ����
	{
		printf("�����ļ�ʧ��!\n\n");//��ӡ������ʾ
		getchar();
		return;
	}
	fscanf(fp1,"%d",&m);
	fclose(fp1);//�ر��ļ�
	for(i=0;i<m;i++)
	{
		fread(&s[i],sizeof(struct air),1,fp);//���ļ��ж�ȡ��Ϣ
	}
	fclose(fp);//�ر��ļ�
}
void print()//��ӡģ��
{
	char w;
	read();//���ö�ȡ�ļ�����
	printf("�����       ��ʼվ      �յ�վ     ʱ��       ��Ʊ��\n");
	for(i=0;i<m-1;i++)
	{
		printf(PRINT);//��ӡ��Ϣ
	}
	printf("�밴������س������������ϲ�˵���:\n");
    w=getch();
    //system("cls")��
}

void search()//��ѯģ��
{
    system("cls");
	char name1[20];
	char name2[20];
	char ii;
	char no[10];
	int n;



		printf("��ѡ����ҷ�ʽ��\n\n");//��ӡ��ѯ��ʽ�˵�
		printf("1.������Ų���\n\n"
			"2.���յ�վ����\n\n"
			"3.�����߲���\n\n"
			"0.����\n\n");
		printf("����0-3��ѡ��\n\n");
		scanf("%d",&n);//��ȡ���ҷ�ʽ
		system("cls");
		if(n==0)
			return 0;
		switch(n)
		{
		case 1:
			printf("�����뺽��ţ�\n");
			scanf("%s",no);//�����
			break;
		case 2:
			printf("�������յ�վ���ƣ�\n");
			scanf("%s",name2);//��ȡ�յ�վ
			break;
		case 3:
			printf("��������ʼվ���ƣ�\n");
			scanf("%s",name1);//��ȡ��ʼվ
			printf("�������յ�վ���ƣ�\n");
			scanf("%s",name2);//�յ�վ
			break;
		}
		read();//���ö�ȡ����
		for(i=0;i<m;i++)
		{
			if(strcmp(s[i].start,name1)==0||(strcmp(s[i].over,name2)==0)||(strcmp(s[i].num,no)==0))//���յ�վ��ʼվ�ж��������
			{
				printf("\n���Һ�����Ϣ�ɹ�!\n");
				printf("�����       ��ʼվ      �յ�վ     ʱ��       ��Ʊ��\n");
				printf(PRINT);
				printf("û������Ҫ����Ϣ�������ϣ�\n\n");
				printf("�밴����������ϲ�Ŀ¼\n\n");

				ii=getch();
				break;
			}
			/*if(s[i].num==no)//��������ж��������
			{
				printf("\n���Һ�����Ϣ�ɹ�!\n");
				printf("����� ��ʼվ �յ�վ ʱ�� ��Ʊ��\n");
				printf(PRINT);//��ӡ��Ϣ
				break;
			} */
		}


      //(strcmp(ii,"no")==0)

}
	//�жϽ���
void shanchu()//ɾ��ģ��
{
    system("cls");
    //stem("color,9F");
	char name1[20];
	char name2[20];
	char ii[10];
	char f[20];//��������
	char no[20];
	char b;
	char c[20]="123456";
	int n,a;
	printf("����������:\n\n");
	for(i=0;i<6;i++)
	{
		f[i]=getch();
		printf("*");
	}
	f[6]='\0';
	printf("\n");//��ȡ����
	system("cls");
    if(strcmp(f,c)!=0)
        printf("�����������!�������������Ƿ���ȷ!лл!�ټ�!\n\n");

	else
	{
		a=1;
	}

	if(a==1)
	{
	    do
		{
			printf("��ѡ��ɾ���Է�ʽ�س���������\n\n");//��ӡɾ����ʽ�˵�
			printf("*1.�������ɾ��\n\n"
				"*2.������ɾ��\n\n"
				"*0.����\n\n");
			printf("����0-2��ѡ���Իس���������\n");
			scanf("%d",&n);//��ȡɾ����ʽ
			if(n==0)
				break; //����ѭ��
			switch(n)
			{
			case 1:
				printf("�����뺽��ţ�\n");
				scanf("%s",no);//��ȡ�����
				read();//���ö�ȡ����
				break;//����ѭ��
			case 2:
				printf("��������ʼվ ���ƣ�\n");
				scanf("%s",name1);//��ȡ��ʼվ
				printf("�������յ�վ���ƣ�\n");
				scanf("%s",name2);//��ȡ�յ�վ
				read();//���ö�ȡ����
				break;//����ѭ��
			}
			for(i=0;i<m;i++)
			{
				if((strcmp(s[i].num,no)==0||(strcmp(s[i].start,name1)==0)&&strcmp(s[i].over,name2)==0))//�ж�������Ϣ�Ƿ����
				{
					s[i]=s[m-1];
					m--;
				}
			}
            printf("������ϻ�û�������Ϣ\n\n");
			printf("�Ƿ����ɾ��\n");
			printf("�����yes��no�Իس�������\n");
			scanf("%s",ii); //��ȡ�Ƿ������Ϣ
			save(); //���ö�ȡ����
			if(!strcmp(ii,"yes")) //�ж��Ƿ����ɾ��
				printf("�밴������Իس�������\n");
			    b=getch();
			    system("cls");
			    break;
		}while(n!=1&&n!=2&&n!=3&&n!=4&&n!=0);
	}
}

void dingpiao()//��Ʊģ��
{
    system("cls");
	int n;
	char a[10];
	do
	{
		search();//���ò�ѯģ��
		printf("��������Ҫ���Ļ�Ʊ���Իس���������\n");
		scanf("%d",&n);//��ȡ������Ʊ��
		if(n<0)
		{
			printf("��������Ч�Ļ�Ʊ����\n");//�жϻ�Ʊ���Ƿ����
			break;
		}
		if(s[i].count!=0&&s[i].count>=n)//�ж��Ƿ����
		{
			s[i].count=s[i].count-n;
			save();//���ñ��溯��
			printf("��Ʊ�ɹ�!\n\n");
			break;
		}
		if(s[i].count<n)//�ж��Ƿ����
		{
			printf("��������Ч�Ļ�Ʊ����\n");
			break;
		}
		printf("�Ƿ������ ������yes��no�Իس�������:\n");//�ж��Ƿ������Ʊ
		scanf("%s",a);
	}while(!strcmp(a,"yes"));//�жϽ���
    t=n;
}
void tuipiao()//��Ʊģ��
{
    system("cls");
	int n;
	char a[10];
	do
	{
		search();//���ò�ѯģ��
		printf("��������Ҫ�˵Ļ�Ʊ��Ŀ��\n");
		scanf("%d",&n);//��������Ʊ��
		if((n<0)||(n>t) )//�ж�Ʊ���Ƿ���Ч
          {
           printf("��������Ч�Ļ�Ʊ����\n");
          }
		else
		{
		    s[i].count=s[i].count+n;
		    save(); //���ñ���ģ��
		    printf("��Ʊ�ɹ�!\n\n");
		}
		printf("�Ƿ������ �����yes��no�Իس�������:\n\n");//�ж��Ƿ������Ʊ
		scanf("%s",a);
	}
	while(!strcmp(a,"yes"));//�жϲ�����ѭ��
	getchar();
}
void xiugai() //�޸�ģ��
{
    system("cls");
	struct xiu //����ṹ��
	{
		char no[20];
		char name1[20];
		char name2[20];
		char time[20];
		int count;
	}x[1];
	char j[10];
	char f[20];//��������
	char b;
	char c[20]="123456";
	int n,a;
	printf("����������:\n\n");
	for(i=0;i<6;i++)
	{
		f[i]=getch();
		printf("*");
	}
	f[6]='\0';
	printf("\n");//��ȡ����
	system("cls");
    if(strcmp(f,c)!=0)
        printf("�����������!�������������Ƿ���ȷ!лл!�ټ�!\n\n");

	else
	{
		a=1;
	}

	if(a==1)
	{
        read();//���ö�ȡģ��
		do
		{
			printf( "��ѡ���޸ķ�ʽ��\n\n"
				"*1,��������޸�:\n\n"
				"*2,�������޸�: \n\n");
			printf("����1---2���޸��Իس���������\n\n");
			scanf("%d",&n);//��ȡ�޸ķ�ʽ
			switch(n)
			{
			case 1:printf("�����뺽��ţ�\n");
				scanf("%s",x[0].no);//��ȡ�����
				break;
			case 2:printf("��������ʼվ��\n");
				scanf("%s",x[0].name1);//��ȡ��ʼվ
				printf("�������յ�վ��\n");
				scanf("%s",x[0].name2);//��ȡ�յ�վ
				break;
			}
			for(i=0;i<m;i++)
			{
				if((strcmp(s[i].start,x[0].name1)==0)&&(strcmp(s[i].over,x[0].name2)==0))//�ж��������
				{
					printf("�����        ��ʼվ        �յ�վ        ʱ��        ��Ʊ��\n");
					printf(PRINT);
					break;
				}
				if(strcmp(s[i].num,x[0].no)==0)//�ж��������
				{
					printf("�����        ��ʼվ        �յ�վ        ʱ��        ��Ʊ��\n");
					printf(PRINT);
					break;
				}
			}
			//x[0].no=0; //���ṹ���еĺ�Ϊ��
		printf("�������º���š���ʼվ���յ�վ��ʱ�䣨���ڼ�������Ʊ����\n");
			scanf("%s%s%s%s%d",x[0].no,x[0].name1,x[0].name2,x[0].time,&x[0].count);//���������ʽ
			strcpy(s[i].num,x[0].no);//�滻�����
			strcpy(s[i].start,x[0].name1);//�滻��ʼվ
			strcpy(s[i].over,x[0].name2);//�滻�յ�վ
			strcpy(s[i].time,x[0].time);//�滻ʱ��
			s[i].count=x[0].count;//�滻��Ʊ��
			save();//���ñ���ģ��
			printf("�Ƿ�����������yes��no�Իس�������:\n\n");
			scanf("%s",j);
		}while(strcmp(j,"yes")==0);
	}
}
void fujia()
{
    char d,q,p;
	int a,b,c;
	printf("��ѡ������Ҫ�ķ���:\n");
	printf("\t\t     ------* 1.�ɻ����շ��� *---------\n\n"
		   "\t\t     ------* 2. �ӻ�����    *---------\n\n"
		   "\t\t     ------* 3.��ϵ�ͷ�     *---------\n\n");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		    printf("\t\t     -------�Ƿ���Ҫ����ɻ����գ�\n\n"
				   "\t\t     ------* 1.��       *2.��     \n\n");
		    scanf("%d",&b);
			if (b==1)
            {

                    printf("�����ɹ�! лл�ݹ�!\n\n");
                    printf("������������ϲ�˵�\n");
			        p=getch();

            }

            else if(b==2)
                printf("��������  \n");

            break;
	case 2:
		   printf("\t\t     -------�Ƿ���Ҫ�ӻ�����?\n"
				   "\t\t    ------* 1.��       *2.��     \n");
		    scanf("%d",&c);
			if (c==1)
            {

			    printf("�����ɹ�! лл�ݹ�!\n\n");
			    printf("������������ϲ�˵�\n");
			    d=getch();
            }
			else if(c==2)
                printf("��������  \\n");
            break;


	case 3:
		  printf("  \t----* �ͷ��绰��95339  -----\n\n"
			     "  \t�绰���߽�24СʱΪ�����񣬻�ӭ�µ�!\n"
                            "  \t���ǽ��߳�Ϊ������!");
          printf("������������ϲ�˵�\n");
			    q=getch();
                             break;
	}
}




#include<stdio.h>
#include <time.h>
#include<string.h>
 void menu()//���ֲ˵�ҳ�� 
{
	printf("*********************************\n");
	printf("******        1. play       *****\n");
	printf("******        0. exit       *****\n");
	printf("*********************************\n");
}

void game()//��Ϸ���� 
{
	//���������
	//NULL-��ʼ��ָ��
	//int a = 0;
	//int* p = NULL;
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;//0-32767      ����һ�����ֵ   randû�������������� 
	//printf("%d\n", ret);
	//������
	while(1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if(guess>ret)
		{
			printf("�´���\n");
		}
		else if(guess<ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//srandû�������������� 
	do 
	{
		//��ӡ�˵�
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);//���Ϊ0��ѭ�����˳���Ϸ�������0��Ҫô����Ϸ��Ҫô����ѡ�� 
	return 0;
}

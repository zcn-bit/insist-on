#include<stdio.h>
#include <time.h>
#include<string.h>
 void menu()//呈现菜单页面 
{
	printf("*********************************\n");
	printf("******        1. play       *****\n");
	printf("******        0. exit       *****\n");
	printf("*********************************\n");
}

void game()//游戏操作 
{
	//生成随机数
	//NULL-初始化指针
	//int a = 0;
	//int* p = NULL;
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;//0-32767      给出一个随机值   rand没有声明？？？？ 
	//printf("%d\n", ret);
	//猜数字
	while(1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if(guess>ret)
		{
			printf("猜大了\n");
		}
		else if(guess<ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//srand没有声明？？？？ 
	do 
	{
		//打印菜单
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input);//如果为0不循环，退出游戏。如果非0，要么玩游戏，要么重新选择 
	return 0;
}

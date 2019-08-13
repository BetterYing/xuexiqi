#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("*************************\n");
	printf("*********1.play**********\n");
	printf("*********0.exit**********\n");
	printf("*************************\n");

}
void game()
{

	char mine[ROWS][COLS] = { 0 };
	char mineInfo[ROWS][COLS] = { 0 };

	InitBoard(mine, ROWS, COLS, '0');

	InitBoard(mineInfo, ROWS, COLS, '*');

	ShowBoard(mineInfo, ROW, COL);

	SetMine(mine, ROW, COL);

	//ShowBoard(mine, ROW, COL);

	FindMine(mine, mineInfo, ROW, COL);


}



int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入选择：");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请输入正确数字\n");
			break;
		}

	} while (input);
	system("pause");
	return 0;
}
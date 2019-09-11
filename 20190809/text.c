#define _CRT_SECURE_NO_WARNINGS
#include"game.h"


void menu(){
	printf("**********************\n");
	printf("*********1.play*******\n");
	printf("*********0.exit*******\n");
	printf("**********************\n");
}
void game(){
	char ret = 0;
	char board[3][3] = { 0 };
	InitBoard(board, 3, 3);
	ShowBoard(board, 3, 3);
	while (1){
		PlayerMove(board, 3, 3);
		ret = IsWin(board, 3, 3);
		if (ret != ' '){
			break;
		}
		ShowBoard(board, 3, 3);
		ComputerMove(board, 3, 3);
		ret = IsWin(board, 3, 3);
		if (ret != ' '){
			break;
		}
		ShowBoard(board, 3, 3);
	}
		if (ret == 'Q'){
			printf("平局\n");
		} else if (ret == 'X') {
			printf("玩家胜出\n");
		} else if (ret == 'O') {
			printf("电脑胜出\n");
		}
}

int main(){
	int input = 0;
		srand((unsigned int)time(NULL));
		do{
			menu();
			printf("请选择：");
			scanf("%d", &input);
			switch (input){
			case 1:
				game();
				break;
			case 0:
				printf("游戏退出！\n");
				break;
			default:
				printf("输入有误，重新输入。\n");
				break;
			}
		} while (input);
		system("pause");
		return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>
#include<math.h>
#include <stdlib.h>

int main1(){
	int  a, b;
	int tem = 0;
	printf("要交换的数：");
	scanf("%d%d", &a, &b);
	tem = a;
	a = b;
	b = tem;
	printf("交换后的：%d %d\n",a,b);
	system("pause");
	return 0;
}

int main2(){

	int a, b;
	printf("要交换的数：");
	scanf("%d%d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("交换后的：%d %d\n", a, b);
	system("pause");
	return 0;
}


int main3(){
	int arr[10] = { -1, 3, 2, 5, 7, -8, 10, 23, 13, 17 };
	int i = 0;
	int max = 0x80000000;
	for (i = 0; i < 10; i++){

		if (max<arr[i]){
			max = arr[i];
		}
	}
	printf("%d\n", max);
	system("pause");
	return 0;
}


int main4(){
	int a, b, c;
	printf("输入要排列的数：");
	scanf("%d%d%d", &a, &b,&c);
	if (a > b){
		if (b > c){
			printf("%d %d %d\n", a, b, c);
		}
		else if (a > c) {
			printf("%d %d %d\n", a, c, b);
		}
		else{
			printf("%d %d %d\n", c, a, b);
		}

	}
	else {
		if (b < c){
			printf("%d %d %d\n", c, b, a);
		}
		else if (a < c) {
			printf("%d %d %d\n", b, c, a);
		}
		else{
			printf("%d %d %d\n", b, a, c);
		}

	}
	system("pause");
	return 0;
}

int main5(){
	int a, b;
	int c;
	scanf("%d%d", &a, &b);
	while (c = a%b){
		a = b;
		b = c;
	}
	printf("%d\n", b);
	system("pause");
	return 0;
}


int main6(){
	int i = 0;
	int n = 0;
	for (n = 100; n <= 200; n++){
		int tmp = sqrt(n);
		for (i = 2; i <= tmp; i++){
			if (n%i==0){
				break;
			}
		}
		if (i == tmp + 1)
		{
			printf("%d\n", n);
		}
	}
	system("pause");
	return 0;
}

int main7(){
	int i = 0;
	int j = 0;
	int n = 9;
	for (i = 1; i <= n; i++){
		for (j = 1; j <= i; j++){
			printf("%d*%d=%-3d ", j, i, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}


int main8(){

	int i = 0;
	for (i = 1000; i <= 2000; i++){
		if (i % 400 == 0 || i % 100 != 0 && i % 4 == 0){
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}

//猜数字/////////////////////////
int menu(){
	printf("*****************************\n");
	printf("***********1.play************\n");
	printf("***********0.exit************\n");
	printf("*****************************\n");
}
void game(){
	int randnum = rand() % 100 + 1;
	int input = 0;
	while (1){
		printf("请输入猜的数字： ");
		scanf("%d", &input);
		if (input > randnum){
			printf("猜大了\n");

		}
		else if (input < randnum){
			printf("猜小了\n");
		}
		else{
			printf("猜对了！\n");
			break;
		}
	}
}

int main9(){
	int num = 0;
	srand((unsigned)time(NULL));
	do{
		menu();
		printf("请输入选择：");
		scanf("%d", &num);
		switch (num){
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("重新输入：\n");
			break;
		}
	} while (num);
	system("pause");
	return 0;
}

int main10(){
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++){
		if (i % 10 == 9)
		{
			count++;
		}
		if (i/10 == 9){
			count++;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}

//2. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。 
int main11(){
	int i = 0;
	double tmp = 1;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++){
		tmp = flag * 1.0 / i;
		sum = sum + tmp;
		flag = -flag;
	}
	printf("%lf\n", sum);
	system("pause");
	return 0;
}






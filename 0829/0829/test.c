#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>


//表达式求值

//输入描述:
//一行三个数a，b，c(1 <= a, b, c <= 10)
//1 + 2 * 3 = 7
//1 * (2 + 3) = 5
//1 * 2 * 3 = 6
//(1 + 2) * 3 = 9
//输出描述 :
//	 能够获得的最大值
int Max(int a, int b){
	(a + b) > (a*b) ? (a + b) : (a*b);
}
//int Max(int a, int b){
//	if ((a + b)>(a*b))
//		return a + b;
//	else
//		return a*b;
//}
int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	int max1;
	int max2;
	scanf("%d %d %d", &a, &b, &c);
	max1 = Max(Max(a, b), c);
	max2 = Max(Max(a, c), b);
	if (max1>max2)
		max2 = max1;
	printf("%d\n", max2);
	system("pause");
	return 0;
}


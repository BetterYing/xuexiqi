#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>


//被3整除

int main(){
	int r = 0;
	int l = 0;
	printf("输入数列区间：");
	scanf("%d %d", &l, &r);
	int count = 0, count1 = 0, result = 0;
	while (l % 3 != 1){
		if (l % 3 == 0){
			l--;
			count++;
		}
		if (l % 3 == 2){
			l--;
		}
	}
	while (r % 3 != 1){
		if (r % 3 == 0){
			count1++;
			r--;
		}
		if (r % 3 == 2){
			count1++;
			r--;
		}
	}
	result = (r - l) / 3 * 2 - count + count1;
	printf("%d\n", result);
	system("pause");
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<windows.h>

//1.一个数组中只有两个数字是出现一次， 
//其他所有数字都出现了两次。
//找出这两个数字，编程实现。

int main1(){
	int arr[10] = { 1, 4, 6, 3, 6, 10, 3, 4, 1, 9 };
	int i = 0;
	int ret = 0;
	int tem = 0;
	int x = 0;
	int y = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < len; i++){
        ret = ret^arr[i];
	}
	for (i = 0; i < 32; i++){
		if ((ret >> i) & 1 == 1){
			tem = i;
			break;
		}
	}
	for (i = 0; i < len; i++){
		if (1 == ((arr[i] >> tem) & 1)){
			x ^= arr[i];
		}
		else{
			y ^= arr[i];
		}
	}
	printf("%d %d\n", x, y);
	system("pause");
	return 0;
}


//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。

int main2(){
	int money = 20;
	int total = money;
	int empty = money;
	while (empty >= 2){
		total = total + empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d \n", total);
	system("pause");
	return 0;
}



//模拟实现strcpy 

char *mystrcpy(char *str, const char *arr){
	char *ret = str;  //将目的指针保留，因为执行完下面的语句，目的指针dest已经指向字符串末尾
	while (*str++ = *arr++); 
		return ret;
}
int main3(){
	char arr1[100] = { 0 };
	char arr2[] = "hello world!!!";
	mystrcpy(arr1, arr2);
	printf("%s \n", arr1);
	system("pause");
	return 0;
}


//模拟实现strcat 
char *mystrcat(char *str, const char *arr){

	char *ret = str;  
	while (*str){
		str++;
	}
	while (*arr != '\0') {
		*str++ = *arr++;
	}
	return ret;
}
int main(){
	char arr1[100] = "abcde";
	char arr2[100] = "fghijk";
	int ret=mystrcat(arr1, arr2);
	printf("%s \n", ret);
	system("pause");
	return 0;
}



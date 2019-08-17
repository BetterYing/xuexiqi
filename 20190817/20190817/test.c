#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<time.h>

int main1(){
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 5, 4, 3, 2, 1 };
	int i = 0;
	for (i = 0; i < 5; i++){
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++){
		printf("%d ", arr2[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++){
		int tem = 0;
		tem = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tem;
	}
	for (i = 0; i < 5; i++){
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++){
		printf("%d ", arr2[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}


int main2(){
	int n=6;
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++){
		for (j = 1; j <= n - i; j++){
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++){
			printf("*");
		}
		printf("\n");
	}
	for (i = n-1; i >0; i--){

		for (j = 1; j <= n - i; j++){
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++){
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字

int mysum(int n,int m){
	int i;
	int tem = 0;
	int sum = 0;
	for (i = 0; i <m; i++){
		tem = tem * 10 + n;
		sum = sum + tem;
	}
	return sum;
}
int main3(){
	int ret=mysum(2, 5);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

int binsearch(int arr[],int left,int right, int key){
	int mid = 0;
	while (left <= right){
		mid = (left + right) / 2;
		if (arr[mid] < key){
			left = mid + 1;
		}
		else if (arr[mid] > key){
			right = mid - 1;
		}
		else{
			return mid;
		}
	}
	return -1;
}
int main4(){
	int arr[10] = { 2, 4, 6, 8, 12, 15, 23, 28, 33, 45 };
	int left = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	int right = len - 1;
	int ret = binsearch(arr, 0, len - 1, 45);
	printf("%d\n", ret);
	system("pause");
	return 0;
}


int main5(){
	char arr1[] = "hello world...";
	char arr2[] = "##############";

	//char arr2[] = "**************";
	int left = 0;
	int right = strlen(arr1) - 1;
	printf("%s\n", arr2);
	while (left <= right){
		Sleep(1000);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
	}

	system("pause");
	return 0;
}

//strcmp比较字符串是否相等；
int  main6(){
	char psw[] = "123456";
	int count = 3;
	int i = 0;
	for (i = 0; i < 3; i++){
		printf("请输入密码：");
		scanf("%s", psw);
		if (strcmp(psw, "123456") == 0){
			printf("log in\n");
			break;
		}
		else{
			count--;
			printf("你还有%d次机会\n", count);
		}
	}
	system("pause");
	return 0;
}


int main7(){
	printf("%d", printf("%d", printf("%d", 56)));
	//printf("%d", 43);
	//printf("%d ", printf("%d", 43));
	system("pause");
	return 0;
}



int main8(){
	char arr[20] = "hello";
	int ret = strlen(strcat(arr, "bit"));
	printf("%d\n", ret);
	system("pause");
	return 0;
}

int print(int num){
	if (num > 9){
		print(num / 10);
	}
	printf("%d ", num % 10);
}
int main9(){
	print(956);
	printf("\n");
	system("pause");
	return 0;
}



int main10(){
	int arr[3][4] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			arr[i][j] = i * 4 + j;
		}
	}
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			printf("%d", arr[i][j]);
		}
	}
	system("pause");
	return 0;
}


void bubblesort(int arr[],int len ){
	int i = 0;
	int j = 0;
	for (i = 0; i < len - 1; i ++ ){
		for (j = 0; j < len - 1 - i; j++){
			if (arr[j]>arr[j + 1]){
				int tem = 0;
				tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
			}
		}
	}
}
int main(){
	int arr[6] = { 2, 4, 5, 1, 9, 22 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubblesort(arr, len);
	for (int i = 0; i < len; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}





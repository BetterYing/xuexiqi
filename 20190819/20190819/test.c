#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>
#include<math.h>
#include <string.h>

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。

int mul(int n){
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++){
		for (j = 1; j <= i; j++){
			printf("%d*%d=%3d ", j, i,i*j);
		}
	printf("\n");
	}
}
int main1(){
	int n = 0;
	mul(12);
	printf("\n");
	system("pause");
	return 0;
}

int swap(int *pi, int *pj){
	int tem = 0;
	tem =*pi;
	*pi = *pj;
	*pj = tem;

}
int main2(){
	int i = 29;
	int j = 56;
	swap(&i,& j);
	printf("%d %d\n", i, j);
	system("pause");
	return 0;
}

//实现一个函数判断year是不是润年
int leapyear(int year){
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
		printf("%d\n", year);
	}
}
int main3(){
	int year = 0;
	for (year = 1000; year < 2000; year++){
		leapyear(year);
	}
	system("pause");
	return 0;
}


//实现一个函数，判断一个数是不是素数

int prime(int n){
	int i = 0;
	for (i = 2; i <= sqrt(n); i++){
		if (n%i == 0){
			return 0;
		}
	}
	return 1;
}
int main4(){
	int n = 6;
	int ret=prime(n);
	if (ret == 1){
		printf("is prime\n");
	}
	else {
		printf("not prime\n");
	}
	system("pause");
	return 0;
}

/*创建一个数组，
实现函数init（）初始化数组、
实现empty（）清空数组、
实现reverse（）函数完成数组元素的逆置。
要求：自己设计函数的参数，返回值*/

void init(int *str, int *dst, int n){
	int i = 0;
	for (i = 0; i < n; i++){
		dst[i] = str[i];
	}
}
void empty(int *dst, int n){
	memset(dst, 0, sizeof(int)*n);   //清谁，清成啥，清多长；
}
void reverse(int *dst,int n){
	int i = 0;
	int j = 0;
	for (i = 0, j = n - 1; i < j; i++, j--){
		swap(dst + i, dst + j);
	}
}

void print(int *dst, int n){
	int i = 0;
	for (i = 0; i < n; i++){
		printf("%d ", dst[i]);
	}
	printf ("\n");

}

int main5(){
	int str[] = { 1, 3, 4, 5, 6, 7, 8, 9 };
	int dst[8] ;
	init(str, dst, 8);
	print(dst, 8);
	reverse(dst, 8);
	print(dst, 8);
	empty(dst, 8);
	print(dst, 8);
	/*reverse(dst, 8);
	print(dst, 8);
*/
	system("pause");
	return 0;
}

void main6(void)
{
	char buffer[] = "This is a test of the memset function";

	printf("Before: %s\n", buffer);
	memset(buffer, '*', 4);
	printf("After:  %s\n", buffer);
	system("pause");
	return 0;
}

void self(int n){
	int i, j;
	int sum = 0;
	int m = 1;
	int flag = 10;
	for (i = 0; i < n; i++){
		if (flag == i){
			m++;
			flag *= 10;
		}
		for (j = i; j; j /= 10){
			sum += pow(j % 10, m);
		}
		if (sum == i){
			printf("%d\n", sum);
		}
		sum = 0;
	}
}

int main7(){

	self(1000000);
	system("pause");
	return 0;
}


int isSmallLetter(char ch){
	return ch >= 'a' && ch <= 'z';
}
void func(){
	char ch;
	while (1){
		ch = getchar();
		if (ch >= 'A' && ch <= 'Z'){
			ch += 'a' - 'A';
		}
		else if (isSmallLetter(ch)){
			ch -= 'a' - 'A';
		}
		else if (isdigit(ch)){
			continue;
		}
		else if (ch == '#'){
			break;
		}
	putchar(ch);
	}
}
int main(){
	func();
	system("pause");
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>


//递归和非递归分别实现求第n个斐波那契数
int fib1(int n){

	if (n <= 2){
		return 1;
	}
	else{
		return fib(n - 1) + fib(n - 2);
	}
}
int fib(int n){
	int f1 = 1;
	int f2 = 1;
	int f3;
	int i = 0;
	if (n <= 2){
		return 1;
	}
	for (i = 0; i < n; i++){
		f3 = f1 + f2;
		f2 = f1;
		f3 = f2;
	}
}
int main1(){
	int n = 4;
	int ret = fib(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

//编写一个函数实现n^k，使用递归实现 

int func(int n,int m){
	if (m == 1){
		return n;
	}
	else if(m == 0){
		return 1;
	}
	else{
		return n*func(n, m - 1);
	}
}
int main2(){
	int n , m ;
	int ret = func(2, 2);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

// 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，

int digitsum(int n){
	if (n == 0){
		return 0;
	}
	return n % 10 + digitsum(n / 10);
}
int main3(){
	int ret = digitsum(1234);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

int main4(){
	int a = 4;
	int b = 7;
	int f1=a | b;
	int f2=a&b;
	int f3=a^b;
	printf("%d %d %d\n", f1, f2, f3);
	system("pause");
	return 0;
}

int main5(){
	int num = 3;
	int i = 0; 
	int count = 0;
	for (i = 0; i < 32; i++){
		if (((num >> i) & 1 )== 1){
			count++;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}

int main6(){
	int num =3;
	int count = 0;
	while (num){
		count++;
		num = num&(num - 1);
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}



int main7(){
	int a = -10;
	int *p = NULL;
	printf("%d\n", !2);
	printf("%d\n", !0);
	a = -a;
	p = &a;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof int);

	system("pause");
	return 0;

}

int main8(){
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++&&++b&&d++;
	i = a++ || ++b || d++;
	printf("%d %d %d %d\n", a, b, c, d);
	system("pause");
	return 0;
}


void test1(){
	printf("hehe\n");
}
void test2(const char *str){
	printf("%s\n", str);
}
int main9(){
	test1();
	test2("haha");
	system("pause");
	return 0;
}


int main10(){
	int n = 10;
	char *pc = (char*)&n;
	int *pi = &n;
	printf("%d\n", &n);
	printf("%d\n", pc);
	printf("%d\n", pc+1);
	printf("%d\n",pi);
	printf("%d\n", pi+1);
	system("pause");
	return 0;
}

int check(){
	int i = 1;
	return (*(char *)&i);
}

int main11(){
	int ret = check();
	if (ret == 1){
		printf("小端\n");
	}
	else{
		printf("大端\n");
	}
	system("pause");
	return 0;
}

int main12(){
	char a = -1;
	signed  b = -1;
	unsigned c = -1;
	printf("%d %d %d\n", a, b, c);
	system("pause");
	return 0;
}


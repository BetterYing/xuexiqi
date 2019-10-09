#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include <string.h>
#include<stdlib.h>

int rece(char *p){
	if (*p != '\0'){
		p++;
		rece(*p);
		printf("%c", *(p - 1));
	}
}
int main(){
	char* str = "hello";
	rece(str);
	system("pause");
	return 0;
}


#if 0
//递归实现strlen
int MyStr(char *p){
	if (*p == '\0'){
		return 0;
	}
	return 1 + MyStr(p + 1);
}
int main(){
	char arr[20] = "hello world";
	printf("%d\n", MyStr(arr));
	system("pause");
	return 0;
}



//非递归实现strlen
int main(){
	char arr[20] = "hello";
	int ret = strlen(strcat(arr, "bit"));
	printf("%d\n",ret);
	system("pause");
	return 0;

}





int prime_num(int num){
	int i;
	for (i = 2; i <= sqrt(num); i++){
		if (num % i == 0){                                
			return 0;
		}
	}
	return 1;            
}
int main(){
	int num=15;
	int ret = 0;
	ret = prime_num(num);
	if (ret == 1){
		printf("是素数\n", num);
	} else{
		printf("不是素数\n", num);
	}
	system("pause");
	return 0;
}






//非递归实现求第n个斐波那契数
int fib(int n){
	int f1 = 1;
	int f2 = 1;
	int f3 = 0;
	int i = 0;
	for (i = 3; i <= n; i++){
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	return f3;
}


int main(){
	int ret = fib(5);
	printf("%d\n", ret);

	system("pause");
	return 0;
}



//递归实现求第n个斐波那契数
int fib(int n){
	if (n <= 2){
		return 1;
	} else{
		return fib(n - 1) + fib(n - 2);
	}
}
int main(){
	int ret = fib(5);
	printf("%d\n", ret);

	system("pause");
	return 0;
}


//实现一个函数判断year是不是润年
int Year(int x){
	if (x % 400 == 0 || (x % 100 != 0 && x % 4 == 0)){
		printf("是闰年");
	} else{
		printf("不是闰年");
	}
	
}


int main(){
	int i = 2004;
	Year(i);
	printf("\n");
	system("pause");
	return 0;
}







//打印乘法口诀表
int mul(int n){
	int i=0;//列
	int j=0;//行
	
	for (i = 1; i <= n; i++){
		for (j = 1; j <= i; j++){
			int mull = i*j;
			printf("%2d*%2d=%2d ",j,i,mull);
		}
		printf("\n");
	}

}
int main(){
	int n = 10;
	mul(n);
	printf("\n");
	system("pause");
	return 0;
}


#endif












//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//
//int init(int n){
//	if (n == 0){
//		return 0;
//	}
//	else{
//		return 1;
//	}
//
//
//}





#if 0
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，

int DigitSum(int n){
	if (n > 9){
		return (n % 10) + DigitSum(n / 10);
	}
	else if (n <= 9 ){
		return n;
	}
	else{
		return 0;
	}
}
int main(){
	int n = 19;

	int ret = DigitSum(n);

	printf("%d\n",ret);
	system("pause");

	return 0;
}




//使用函数实现两个数的交换。
int swap(int *px, int*py){
	int tem = 0;
	tem = *px;
	*px= *py;
	*py = tem;
}
int main(){
	int temp = 0;
	int a = 5;
	int b = 10;
	printf("%d %d\n", a, b);
	swap(&a, &b);
	printf("%d %d\n",a,b);
	system("pause");
	return 0;
}



void print(int n){
	if (n > 9){	
		print(n/10);
	}
	printf("%d ", n % 10);

}
int main(){
	int n = 1234567;
	print(n);
	printf("\n");
	system("pause");
	return 0;
}




//非递归分别求n的阶乘
int main(){
	int i = 0;
	int n = 5;
	int mul = 1;
	for (i = 1; i <= n; i++){
		mul = mul*i;
	}
	printf("%d\n",mul);
	system("pause");
	return 0;
}



//递归实现求n的阶乘
int Fac(int n){
	if (n == 1){
		return 1;
	}
	else if (n == 0){
		return 0;
	}
	else return n*Fac(n - 1);
}
int main(){
	int n = 1;
	int ret = Fac(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}



//编写一个函数实现n^k，使用递归实现
int Cf(int n,int k){
	
	if (k == 0){
		return 1;
	}
	else if (k == 1){
		return n;
	}
	return n*Cf(n, k-1);
}

int main(){
	int n = 3;
	int k = 2;
	int ret = Cf(n, k);
	printf("%d\n", ret);
	system("pause");
	return 0;
}


void func(unsigned int n){
	if (n > 9){
		func(n / 10);
	}
	printf("%d ", n % 10);

}
int main(){
	int num = 3456;
	func(num);
	printf("\n");
	system("pause");
	return 0;
	
}


int year(int x){
	if (x % 400 == 0 || (x % 100 != 0 && x % 4 == 0)){
		return 1;//是
	}

	return 0;

}


void num(int *x){
	(*x)++;
}
int main(){
	int a = 1985; 
	//num(&a);
	 year(a);

	printf("是闰年%d\n");

	system("pause");
	return 0;
}

#endif

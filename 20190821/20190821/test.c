#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<assert.h>
#include<string.h>

void print_arr1(int arr[3][5], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void print_arr2(int(*arr)[5], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main1(){

	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print_arr1(arr, 3, 5);
	print_arr2(arr, 3, 5);

	system("pause");
	return 0;
}

int add(int a, int b){

	return a + b;
}
int sub(int a, int b){

	return a - b;
}
int mul(int a, int b){

	return a * b;
}
int Div(int a, int b){

	return a / b;
}
int main2(){
	int x, y;
	int input = 1;
	int ret = 0;
	int(*p[5])(int x, int y) = { 0, add, sub, mul, Div };
	while (input){
		printf("****************************\n");
		printf("    1:add               2:sub         \n");
		printf("    3:mul               4:div          \n");
		printf("****************************\n");
		printf("ÇëÑ¡Ôñ£º");
		scanf("%d", &input);

		if (input <= 4 && input >= 1){
			printf("ÇëÊäÈë²Ù×÷Êý£º");
			scanf("%d %d", &x, &y);
			ret = (*p[input])(x, y);
		}
		else{
			printf("ÊäÈë´íÎó£¡");
	 	
		}
	printf("ret=%d\n", ret);
	}

	system("pause");
	return 0;
}

int int_cmp1(const void * p1, const void *p2){
	return (*(int *)p1 > *(int *)p2);
}
int main3(){
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	qsort(arr, len, sizeof(int), int_cmp1);
	for (i = 0; i < len; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}


int int_cmp(const void * p1, const void *p2){
	return (*(int *)p1 > *(int *)p2);
}
void Swap(void *p1, void *p2, int size){
	int i = 0;
	for (i = 0; i < size; i++){
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}
void bubble(void *base, int count, int size, int(*cmp)(void *, void *)){
	int i = 0;
	int j = 0;
	for (i = 0; i < count - 1; i++){
		for (j = 0; j < count - i - 1; j++){
			if (cmp((char *)base + j*size, (char *)base + (j + 1)*size)>0){

				Swap((char *)base + j*size, (char*)base + (j + 1)*size, size);
			}
		}
	}
}
int main4(){
	//int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
	char *arr[] = { "aaaa", "dddd", "cccc", "bbbb" };
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, len, sizeof(int), int_cmp);
	for (i = 0; i < len; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}


int main5(){
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));    //16
	//printf("%d\n", sizeof(a+0));   //4
	//printf("%d\n", sizeof*a);       //4
	//printf("%d\n", sizeof(a+1));  //4
	//printf("%d\n", sizeof(a[1]));   //4
	//printf("%d\n", sizeof(&a));    //4
	//printf("%d\n", sizeof(*&a));   //16
	//printf("%d\n", sizeof(&a+1));  //4
	//printf("%d\n", sizeof(&a[0]));    //4
	//printf("%d\n", sizeof(&a[0]+1));  //4

	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr+0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr+1));
	printf("%d\n", sizeof(&arr[0]+1));


	system("pause");
	return 0;
}


int main6(){
	int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int *)(&a + 1);
	printf("%d, %d\n", *(a + 1), *(ptr - 1));
	system("pause");
	return 0;
}

struct Test{
	int num;
	char  *pcname;
	short sdate;
	char cha[2];
	short sba[4];
}*p;
int main7(){
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);

	system("pause");
	return 0;
}

int main8(){
	int a[4] = { 1, 2, 3, 4 };
	int *ptr = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);
	printf("%x,%x\n", ptr[-1], *ptr2);

	system("pause");
	return 0;
}


char *Strcpy(char *dest, char *src){
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while ((*dest++ = *src++)){
		;
	}
	return ret;
}

//int Strcmp(char *src, char*dest){
//
//	int ret = 0;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (!(ret = *(unsigned char *)src - *(unsigned char*)dest && *dest)){
//		++src, ++dest;
//	}
//	if (ret < 0){
//		ret = -1;
//	}
//	else if (ret>0){
//		ret = 1;
//	}
//	return (ret);
//}



char *Strcat(char *dest, char *src){
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest){
		dest++;
	}
	while (*dest++ = *src++){
		;
	}
}

int main(){
	
	char dest[100] = "haha";
	char src[100] = "hehe";
	
	//Strcpy(dest, src);
	//Strcat(dest, src);
	//Strcmp(src, dest);
	printf("%s", dest);

	system("pause");
	return 0;
}
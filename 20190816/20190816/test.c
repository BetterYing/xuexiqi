#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<windows.h>

//1.һ��������ֻ�����������ǳ���һ�Σ� 
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�

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


//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�

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



//ģ��ʵ��strcpy 

char *mystrcpy(char *str, const char *arr){
	char *ret = str;  //��Ŀ��ָ�뱣������Ϊִ�����������䣬Ŀ��ָ��dest�Ѿ�ָ���ַ���ĩβ
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


//ģ��ʵ��strcat 
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



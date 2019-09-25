#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<windows.h>
int main(){
	int n = 0x7FFFFFFF;
	int m;
	int i;
	int arr[10000];
	int k, min;
	for (i = 0; i < n; i++){
		arr[i] = 0;
	}
	scanf("%d %d", &n, &m);
	for (i = 1; i <= m; i++){
		scanf("%d", &k);
		arr[k]++;
	}
	min = arr[1];
	for (i = 1; i <= n; i++){
		if (min > arr[i]){
			min = arr[i];
		}
	}
	printf("%d", min);
	system("pause");
	return 0;

}


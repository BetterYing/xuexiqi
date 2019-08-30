#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int size = 0;
long *dp = NULL;

long func(int num){

	if (NULL == dp){
		dp = (long *)malloc(sizeof(long));
		*dp = 1;
		size = 1;
	}

	if (size >= num)
		return dp[num - 1];

	long *dptmp = (long *)malloc(num * sizeof(long));
	memmove(dptmp, dp, size*sizeof(long));
	free(dp);
	dp = dptmp;

	while (size < num){
		long ways = 0;
		int i = 1;
		while (size - i >= 0){
			ways += dp[size - i];
			ways %= 1000000000L + 3;
			i *= 2;
		}
		if (size - i == -1){
			ways += 1;
			ways %= 1000000000L + 3;
		}
		dp[size] = ways;
		size++;
	}

	return dp[num - 1];
}

int main(void){
	int datacount;
	scanf("%d", &datacount);
	int data;
	while (datacount--){
		scanf("%d", &data);
		printf("%ld\n", func(data));
	}
	if (size != 0)
		free(dp);
	system("pause");
	return 0;
}


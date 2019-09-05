#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>


int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	int ret = n - k;
	unsigned long long count = 0;
	if (k == 0)
		count = (long long)n*n;
	else{
		for (int i = 1; i <= ret; i++){
			count += i;
			int j = n % (i + k) - k + 1;
			int z = (n / (i + k) - 1)*i;
			if (j >= 0)
				count = count + j + z;
			else
				count = count + z;
		}
	}
	printf("%llu\n", count);
	system("pause");
	return 0;
}


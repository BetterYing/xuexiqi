#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <windows.h>

void MatchSport()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int E = 0;
	for (A = 1; A <= 5; A++)
	for (B = 1; B <= 5; B++)
	for (C = 1; C <= 5; C++)
	for (D = 1; D <= 5; D++)
	for (E = 1; E <= 5; E++)
	{
		if (((B == 2) + (A == 3) == 1 &&
			(B == 2) + (E == 4) == 1 &&
			(C == 1) + (D == 2) == 1 &&
			(C == 5) + (D == 3) == 1 &&
			(E == 4) + (A == 1) == 1) == 1)

		if (120 == A*B*C*D*E)
		{
			printf("A=%d  B=%d  C=%d  D=%d  E=%d\n", A, B, C, D, E);
		}
	}
}
int main()
{
	MatchSport();
	system("pause");
	return 0;
}




#if 0
int main()
{
	int A = 0, B = 0, C = 0, D = 0;
	int FD;
	int i;
	for (i = 1; i <= 4; i++)
	{

		if (i == 1)
		{
			A = 1; C = 1; FD = 1; D = 0;
		}
		if (i == 2) 
		{
			A = 0; C = 0; FD = 1; D = 0;
		}
		if (i == 3) 
		{
			A = 0; C = 1; FD = 0; D = 0;
		}
		if (i == 4) 
		{
			A = 0; C = 1; FD = 1; D = 1;
		}
		if (A + B + C + D + FD == 1 && FD == D)
			printf("A=%d B=%d C=%d D=%d\n", A, B, C, D);
	}
	system("pause");
	return 0;
}





//获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。
int main()
{
	int num = 30;
	int i = 0;
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", ((num >> i) & 1));
	}
	
	printf("\n");
	for (i = 30; i >=0; i -= 2)
	{
		printf("%d ", ((num >> i) & 1));
	}
	printf("\n");
	system("pause");
	return 0;
}






//在屏幕上打印杨辉三角。 
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1


int func(int arr[10][10])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i][0] = arr[i][i] = 1;
		for (j = 1; j <= i; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 0; i<10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}

}
int main()
{
	int arr[10][10] = { 0 };
	func(arr);
	system("pause");
	return 0;
}











//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
int func(int a,int b)
{
	int ret = a^b;
	int count = 0;
	while (ret)
	{
		ret = ret&(ret - 1);
		count++;
	}
	return count;
}

int main()
{
	int count =0;
	int n = 1999;
	int m = 2299;
	int ret=func(n, m);
	printf("%d\n", ret);
	system("pause");
	return 0;
}



// 输出一个整数的每一位。 

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ",n%10);
}

int main()
{
	int n = 5678;
	print(n);
	printf("\n");
	system("pause");
	return 0;
}




int main()
{
	int num = -1;
	int i = 0;
	int count = 0;
	while (num != 0)
	{
		count++;
		num = num&(num - 1);
	}
	printf("%d \n", count);

	system("pause");
	return 0;
}

#endif
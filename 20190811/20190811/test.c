#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<windows.h>
#include <math.h>
#include <assert.h>

//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。

int my_strlen(const char *str)
{
	int count = 0;
	assert(str);
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse(char a[], int left, int right)
{
	while (left<right)
	{
		char tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		left++;
		right--;
	}
}
char* reverse_string(char a[])
{
	int i = 0;
	int left = 0;
	int right = my_strlen(a) - 1;
	reverse(a, left, right);
	while (a[i] != '\0')
	{
		left = i;
		while ((a[i] != '\0') && (a[i] != ' '))
		{
			i++;
		}
		right = i - 1;
		reverse(a, left, right);
		if (a[i] != '\0')
		{
			i++;
		}
	}
	return a;
}
int main()
{
	char a[]="student a am i";
	reverse_string(a);
	printf("%s\n",a);
	system("pause");
	return 0;
}



#if 0
unsigned int reverse_bit(unsigned int value)
{
	int arr[32] = { 0 };
	unsigned int sum = 0;
	for (int i = 0; i < 32; i++)
	{
		arr[i] = value & 1;
		value = value >> 1;
	}
	for (int i = 0; i < 32; i++)
	{
		sum = sum + arr[i] * pow(2, 32 - 1 - i);
	}
	return sum;
}
int main()
{
	int num = 0;
	printf("请输入要翻转的数：");
	scanf("%d", &num);
	unsigned int ret = reverse_bit(num);
	printf("翻转二进制后的值为：");
	printf("%u\n", ret);
	system("pause");
	return 0;

}



//判断一个字符串是否为另外一个字符串旋转之后的字符串
void swap(char* x, char* y)
{
	char tmp = *x;
	*x = *y;
	*y = tmp;
}
void turn(char arr[])
{
	int num = 0;
	int i = 0;
	int j = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("请输入要左旋的字符数:\n");
	scanf("%d", &num);
	num = num % 4;
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < len - 1; j++)
		{
			swap(&arr[j], &arr[j + 1]);
		}
	}
	printf("ARR1左旋后的值：%s\n", arr);

}

int Exchange(char* arr1, char* arr2)
{
	int i = 0;
	int len = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < len; i++)
	{
		if (arr1[i] != arr2[i])
		{
			printf("不相等\n");
			return 0;
		}
		else
		{
			printf("相等\n");
		}
	}
	return 1;
}


int main()
{
	char arr1[] = { "ABCD" };
	char arr2[] = { "BCAD" };

	turn(arr1);
	Exchange(arr1, arr2);
	system("pause");
	return 0;
}




////1.实现一个函数，可以左旋字符串中的k个字符。 
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

void swap(char* x, char* y)
{
	char tmp = *x;
	*x = *y;
	*y = tmp;
}
void turn(char arr[])
{
	int num = 0;
	int i = 0;
	int j = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("请输入要左旋的字符数:\n");
	scanf("%d", &num);
	num = num % 4;
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < len - 1; j++)
		{
			swap(&arr[j], &arr[j + 1]);
		}
	}
	printf("%s\n", arr);

}
int main()
{
	char arr[] = { "ABCD" };
	turn(arr);
	system("pause");
	return 0;
}





//调整数组使奇数全部都位于偶数前面
void func(int arr[], int len)
{
	int i = 0;
	int j = 0;
	int tem = 0;
	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (arr[i] % 2 == 1 && arr[j] % 2 != 1)
			{
				tem = arr[i];
				arr[i] = arr[j];
				arr[j] = tem;
			}
			continue;
		}
	}
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[8] = { 1, 3, 6, 7, 4, 9, 8, 2 };
	int len = sizeof(arr) / sizeof(arr[0]);
	func(arr, len);
	system("pause");
	return 0;
}



////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);

int yang(int arr[][3],int data)
{
	int x = 0;
	int y = 2;
	while ((x <= 2) && (y >= 0))
	{
		if (arr[x][y] < data)
		{
			x++;
		}
		else if (arr[x][y]>data)
		{
			y--;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[][3] = { 1, 2, 3 , 4, 5, 6 ,7, 8, 9 }；
	int k;
	scanf("%d", &k);
	if (yang(arr, k)) 
	{
		printf("找到了!\n");
	}
	else
	{
		printf("没找到!\n");
	}
	system("pause");
	return 0;
}




////编程实现： 
//一组数据中只有一个数字出现了一次。
//其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
int main()
{
	int arr[7] = { 1, 3, 4, 6, 4, 3, 1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int ret = 0;
	for (i = 0; i < len; i++)
	{
		ret ^= arr[i];
	}
	printf("%d\n",ret);
	system("pause"); 
	return 0;
}


//2.不使用（a+b）/2这种方式，求两个数的平均值。 
int main()
{
	int a = 25;
	int b = 5;
	printf("%d\n", (a&b) + ((a^b) >> 1));

	system("pause");
	return 0;
}






int main()
{
	int arr[10] = { 8, 4, 7, 0, -1, 9, 2, -3, 3, 1 };
	int max = 0x80000000;
	int sec = 0x80000000;
	int i;

	for (i = 0; i < 10; i++)
	{
		if (max < arr[i])
		{
			sec = max;
			max = arr[i];
		}
		else if (sec < arr[i])
		{
			sec = arr[i];
		}
	}

	printf("%d\n", sec);
	system("pause");
	return 0;
}
#endif
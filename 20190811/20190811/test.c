#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<windows.h>
#include <math.h>
#include <assert.h>

//��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���

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
	printf("������Ҫ��ת������");
	scanf("%d", &num);
	unsigned int ret = reverse_bit(num);
	printf("��ת�����ƺ��ֵΪ��");
	printf("%u\n", ret);
	system("pause");
	return 0;

}



//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
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
	printf("������Ҫ�������ַ���:\n");
	scanf("%d", &num);
	num = num % 4;
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < len - 1; j++)
		{
			swap(&arr[j], &arr[j + 1]);
		}
	}
	printf("ARR1�������ֵ��%s\n", arr);

}

int Exchange(char* arr1, char* arr2)
{
	int i = 0;
	int len = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < len; i++)
	{
		if (arr1[i] != arr2[i])
		{
			printf("�����\n");
			return 0;
		}
		else
		{
			printf("���\n");
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




////1.ʵ��һ�����������������ַ����е�k���ַ��� 
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

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
	printf("������Ҫ�������ַ���:\n");
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





//��������ʹ����ȫ����λ��ż��ǰ��
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



////���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);

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
	int arr[][3] = { 1, 2, 3 , 4, 5, 6 ,7, 8, 9 }��
	int k;
	scanf("%d", &k);
	if (yang(arr, k)) 
	{
		printf("�ҵ���!\n");
	}
	else
	{
		printf("û�ҵ�!\n");
	}
	system("pause");
	return 0;
}




////���ʵ�֣� 
//һ��������ֻ��һ�����ֳ�����һ�Ρ�
//�����������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
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


//2.��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ�� 
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
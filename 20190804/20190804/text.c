#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>

int main()
{
	int i, flag = 1;
	double tmp = 1, sum = 0;

	for (i = 1; i <= 100; i++)
	{
		tmp = flag * 1.0 / i;
		sum += tmp;
		flag = -flag;
	}

	printf("%lf\n", sum);
	system("pause");
	return 0;
}






//û����
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int smal = a < b ? a : b;
//	int i;
//	int max = 0;
//	for (i = 0; i <= smal; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			max = i;
//		}
//	}
//	if (max == 1)
//	{
//		printf("��������\n");
//		return 0;
//	}
//	printf("��Լ��:%d\n",max);
//	system("pause");
//	return 0;
//}






///û��

//int main()
//{
//	int a, b, c;
//	if (a > b)
//	{
//		if (b > c)
//		{
//			printf("%d %d %d\n", a, b, c);
//		}
//		if (b < c)
//		{
//			printf("%d %d %d\n", a, c, b);
//		}
//		if (a < c)
//		{
//			printf("%d %d %d\n", c,a,b);
//		}
//		if (a < c)
//		{
//			printf("%d %d %d\n", a,c, b);
//		}
//
//
//
//		if (a < b)
//		{
//			if (b > c)
//			{
//				printf("%d %d %d\n", a, b, c);
//			}
//			if (b < c)
//			{
//				printf("%d %d %d\n", a, c, b);
//			}
//			if (a < c)
//			{
//				printf("%d %d %d\n", c, a, b);
//			}
//			if (a < c)
//			{
//				printf("%d %d %d\n", a, c, b);
//			}
//
//
//
//	}
//
//
//
//	system("pause");
//	return 0;
//}







#if 0



����Сֵ�ʹ�Сֵ
//int main()
//{
//	int arr[5]= { 7, 5, 8, 9, -6 };
//	int min = 0x79999999;// ʮ����32λ��Сֵ= 0x80000000;
//	int sec = 0x79999999;// ʮ����32λ���ֵ= 0x79999999;
//	int i;
//	for (i = 0; i <= 4; i++)
//	{
//		if (min > arr[i])
//		{
//			sec = min;
//			min = arr[i];
//		}
//		else if (sec < arr[i])
//		{
//			sec = arr[i];
//		}
//	}
//	printf("%d %d\n",min,sec);
//	system("pause");
//	return 0;
//}





int main()
{
	int a = 5, b = 5;
	int tem;
	int i=10;

	tem = a^b;
	i = tem^i;
	printf("%d\n", i);

	/*a = a^b;
	b = b^a;
	a = a^b;

	printf("a=%d b=%d\n", a, b);*/
	system("pause");
	return 0;
}




int main()
{

	//���ַ������ݿ��ܻᳬ����Χ��
	/*int a = 5,b = 9;
	int tem;
	printf("a=%d,b=%d\n",a,b);

	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d,b=%d\n", a, b);

	system("pause");
	return 0;*/
}





int main()
{
	int a = 5, b = 10;
	int tem;
	printf("a=%d,b=%d\n", a, b);
	tem = a;
	a = b;
	b = tem;
	printf("a=%d,b=%d\n",a,b);

	system("pause");
	return 0;
}






int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);

	system("pause");
	return 0;
}


int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf( "%d ", i);
		i++;

	}
	printf("\n");
	system("pause");
	return 0;
}




int main()

{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	default:
		printf("��������\n");
		break;
	}
	system("pause");
	return 0;
}



int main()
{
	int i = 0;
	printf("����һ������\n");
	scanf("%d",&i);
	if (i % 2 == 1)
	{
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}
	system("pause");
	return 0;
}




int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
	{
		printf("δ����\n");

	}
	else
	{
		printf("����\n");
	}

	system("pause");
	return 0;
}




int main()
{
	int num = 10;
	int *p = &num;
	*p = 20;
	printf("%p\n", num);
	system("pause");
	return 0;
}

#endif
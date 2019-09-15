#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_COLS 20   //�ܴ��������к�
#define MAX_INPUT 1000  //ÿ�������е���󳤶�

/*
**��ȡ���б�ţ����������Χ�������

*/
int read_column_numbers(int columns[], int max){
	int num = 0;
	int ch;
	/*
	ȡ���б�ţ��������ȡ����С��0����ֹͣ��ȡ
	*/
	while (num < max && scanf("%d", &columns[num]) == 1 && columns[num] >= 0)
		num += 1;
		/*
		ȷ���Ѿ���ȡ�ı��Ϊż��������Ϊ�������ԳɶԵķ�ʽ����
		*/
		if (num % 2 != 0){
			puts("Last column number is not paired.");
			exit(EXIT_FAILURE);
		}
		/*
		���������а������һ�����ֵ��ǲ�������
		*/
		while ((ch = getchar()) != EOF && ch != '\n');

		return num;
}



void rearrange(char *output, char const *input, int n_columns, int const columns[]){
	int col;  //columns ������±�
	int output_col = 0; //����м�����
	int len = strlen(input);   //�����г���
	/*����ÿ���б��*/
	for (col = 0; col < n_columns; col += 2){
		int nchars = columns[col + 1] - columns[col] + 1;
		/*��������н���������������������ͽ�������*/
		if (columns[col] >= len || output_col == MAX_INPUT - 1)
			break;
		/*�����������ݿռ䲻�㣬ֻ���ƿ������ɵ�����*/
		if (output_col + nchars > MAX_INPUT - 1)
			nchars = MAX_INPUT - output_col - 1;

		/*������ص�����*/
		strcpy(output + output_col, input + columns[col], nchars);
		output_col += nchars;
	}
	output[output_col] = '\0';
}

int main(void){
	int n_columns;   //���д�����б��
	int columns[MAX_COLS];  //��Ҫ���������
	char input[MAX_INPUT];  //���������е�����
	char output[MAX_INPUT];  //��������е�����

	n_columns = read_column_numbers(columns, MAX_COLS); //��ȡ�ô��б��

	/*
	**��ȡ������ʹ�ӡʣ���������
	*/
	while (gets(input) != NULL){
		printf("Original input : %s\n", input);
		rearrange(output, input, n_columns, columns);
		printf("Rearrange line : %s\n", output);
	}
	system("pause");
	return EXIT_SUCCESS;
}


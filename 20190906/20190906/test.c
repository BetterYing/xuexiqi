#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<windows.h>

int main(){
	char strget[50], strA[20] = "", strB[20] = "";
	int a, i, index, nall, num, result = 1;
	scanf("%s", strget);
	nall = strlen(strget);
	for (i = 0; i<nall; i++){
		if (strget[i] == ';'){
			a = i;
			break;
		}
	}
	for (i = 0; i<a; i++){
		strA[i] = strget[i];
		strB[i] = strget[nall - a + i];
	}
	num = strlen(strA);
	// printf("%s\n%s\n",strA,strB);
	for (i = 0; i<num; i++){
		if (strA[i] == strB[0]){
			index = i;
			break;
		}
	}
	// printf("%d\n",index);
	for (i = 0; i<index; i++){
		if (strA[i] != strB[num + i - index] || strA[num + i - index] != strB[i]){
			result = 0;

			break;
		}
	}
	if (result)
		printf("true\n");
	else{
		printf("false\n");
	}

	system("pause");
	return 0;
}


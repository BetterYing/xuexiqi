#define _CRT_SECURE_NO_WARNINGS 
#include<windows.h>
#include  "contact.h"


void menu(){
	printf("***************************************\n");
	printf("********   1.add      2.del    ********\n");
	printf("********   3.search   4.modify ********\n");
	printf("********   5.show   6.clear   ********\n");
	printf("********        0.exit        ********\n");
	printf("***************************************\n");
}
int main(){
	menu();
	struct contact people;
	people.count_user = 0;
    int n = 0;
	for (n = 0; n < 7; n++){
		
		printf("ÇëÊäÈëÒª½øÐÐµÄ²Ù×÷£º");
		scanf("%d", &n);
		if (n == 0){
			break;
		} else if (n == 1){
			add_contact(&people);
			break;
		} else if (n == 2){
			del_contact(&people);
			break;
		} else if (n == 3){
			search_contact(&people);
			break;
		} else if (n == 4){
			modify_contact(&people);
			break;
		} else if (n == 5){
			show_contact(&people);
			break;
		} else {
			clear_contact(&people);
			break;
		}
	}
	system("pause");
	return 0;
}


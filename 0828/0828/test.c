#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<assert.h>
#include<string.h>
#define PERSONS_MAX_SIZE 200
#define NAME_MAX_SIZE 1024
#define PHONE_MAX_SIZE 100

typedef struct PersonInfo{
	char name[NAME_MAX_SIZE];
	char phone[PHONE_MAX_SIZE];
}PersonInfo;

typedef struct AddrBook{
	PersonInfo  persons[PERSONS_MAX_SIZE];
	int size;       //当前数组中的有效元素的个数.
}AddrBook;

void  Init(AddrBook* addr_book){
	assert(addr_book != NULL);
	addr_book->size = 0;
	for (int i = 0; i < PERSONS_MAX_SIZE; ++i){
		memset(addr_book->persons[i].name, 0, NAME_MAX_SIZE);
		memset(addr_book->persons[i].phone, 0, PHONE_MAX_SIZE);
	}
}

void Add(AddrBook* addr_book){
	printf("添加新联系人\n");
	if (addr_book->size >= PERSONS_MAX_SIZE){
		printf("当前通讯录已满。\n");
		return;
	}
	PersonInfo* p = &addr_book->persons[addr_book->size];//把当前要放置位置的下标取出来，然后取出对应结构体变量的指针。
	printf("请输入新用户的姓名：");
	scanf("%s",p->name);
	printf("请输入新用户的号码：");
	scanf("%s",p->phone);
	++addr_book->size;

	printf("添加联系人成功。\n");

}


void Remove(AddrBook* addr_book){
	assert(addr_book != NULL);
	printf("删除通讯录中的记录。\n");
	if (addr_book->size == 0){
		printf("当前通讯录为空！\n");
		return;
	}
	printf("请输入要删除的序号:");
	int index = 0;
	scanf("%d", &index);
	if (index < 0 || index >= addr_book->size){
		printf("您的输入有误！[0-%d]\n", addr_book->size - 1);
		return;
	}
	if (index == addr_book->size - 1){
		--addr_book->size;
	}  else {
		PersonInfo* mid = &addr_book->persons[index];
		PersonInfo* last = &addr_book->persons[addr_book->size-1];
		strcpy(mid->name, last->name);
		strcpy(mid->phone, last->phone);
		--addr_book->size;
	}
	printf("删除成功，当前还剩%d条记录！\n", addr_book->size);
}


void Printall(AddrBook* addr_book){
	assert(addr_book != NULL);
	printf("=======================\n");
	for (int i = 0; i < addr_book->size; ++i){
		PersonInfo* p = &addr_book->persons[i];
		printf("[%d]  %s:  %s\n", i,p->name,p->phone );
	}
	printf("当前共有%d条记录\n", addr_book->size);
	printf("=======================\n");
}


void Update(AddrBook* addr_book){
	assert(addr_book != NULL);
	printf("更新联系人记录!\n");
	if (addr_book->size == 0){
		printf("当前通讯录为空，无法修改！\n");
		return;
	}
	printf("请输入要修改联系人记录的序号：");
	int index = 0;
	scanf("%d", &index);
	if (index < 0 || index >= addr_book->size){
		printf("您的输入有误！[0-%d]\n", addr_book->size - 1);
		return;
	}
	PersonInfo* p = &addr_book->persons[index];
	char name[NAME_MAX_SIZE] = { 0 };
	char phone[PHONE_MAX_SIZE] = { 0 };

	printf("当前姓名为：%s\n请输入修改之后的姓名（*表示该字段不修改）：",p->name);
	scanf("%s", name);
	if (strcmp(name, "*") != 0){
		strcpy(p->name, name);
	}
	printf("当前号码为：%s\n请输入修改之后的号码（*表示该字段不修改）：",p->phone);
	scanf("%s", phone);
	if (strcmp(phone, "*") != 0){
		strcpy(p->phone, phone);
	}
	printf("修改完成！\n");
}


int menu(){
	printf("=======================\n");
	printf(" 欢迎进入通讯录程序         \n ");
	printf(" 1.显示全部联系人         \n");
	printf("  2.添加新联系人             \n");
	printf("  3.修改联系人信息      \n ");
	printf(" 4.删除联系人                \n ");
	printf(" 0.退出通讯录程序          \n");
	printf("=======================\n");
	printf("请输入你的选择：");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}



typedef void(*Func)(AddrBook*);
AddrBook addr_book;

int main(){

	Init(&addr_book);
	Func func_table[] = {
		NULL,
		Printall,
		Add,
		Update,
		Remove,
	};
	while (1){
		int choice = menu();
		if (choice<0 || choice>4){
			printf("您的输入有误，请重新输入！\n");
			continue;
		}
		if (choice == 0){
			printf("goodbye\n");
			break;
		}
		system("cls");
		func_table[choice](&addr_book);

	}

	system("pause");
	return 0;
}


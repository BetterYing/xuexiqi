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
	int size;       //��ǰ�����е���ЧԪ�صĸ���.
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
	printf("�������ϵ��\n");
	if (addr_book->size >= PERSONS_MAX_SIZE){
		printf("��ǰͨѶ¼������\n");
		return;
	}
	PersonInfo* p = &addr_book->persons[addr_book->size];//�ѵ�ǰҪ����λ�õ��±�ȡ������Ȼ��ȡ����Ӧ�ṹ�������ָ�롣
	printf("���������û���������");
	scanf("%s", p->name);
	printf("���������û��ĺ��룺");
	scanf("%s", p->phone);
	++addr_book->size;

	printf("�����ϵ�˳ɹ���\n");

}


void Remove(AddrBook* addr_book){
	assert(addr_book != NULL);
	printf("ɾ��ͨѶ¼�еļ�¼��\n");
	if (addr_book->size == 0){
		printf("��ǰͨѶ¼Ϊ�գ�\n");
		return;
	}
	printf("������Ҫɾ�������:");
	int index = 0;
	scanf("%d", &index);
	if (index < 0 || index >= addr_book->size){
		printf("������������[0-%d]\n", addr_book->size - 1);
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
	printf("ɾ���ɹ�����ǰ��ʣ%d����¼��\n", addr_book->size);
}


void Printall(AddrBook* addr_book){
	assert(addr_book != NULL);
	printf("=======================\n");
	for (int i = 0; i < addr_book->size; ++i){
		PersonInfo* p = &addr_book->persons[i];
		printf("[%d]  %s:  %s\n", i,p->name,p->phone );
	}
	printf("��ǰ����%d����¼\n", addr_book->size);
	printf("=======================\n");
}


void Update(AddrBook* addr_book){
	assert(addr_book != NULL);
	printf("������ϵ�˼�¼!\n");
	if (addr_book->size == 0){
		printf("��ǰͨѶ¼Ϊ�գ��޷��޸ģ�\n");
		return;
	}
	printf("������Ҫ�޸���ϵ�˼�¼����ţ�");
	int index = 0;
	scanf("%d", &index);
	if (index < 0 || index >= addr_book->size){
		printf("������������[0-%d]\n", addr_book->size - 1);
		return;
	}
	PersonInfo* p = &addr_book->persons[index];
	char name[NAME_MAX_SIZE] = { 0 };
	char phone[PHONE_MAX_SIZE] = { 0 };

	printf("��ǰ����Ϊ��%s\n�������޸�֮���������*��ʾ���ֶβ��޸ģ���",p->name);
	scanf("%s", p->name);
	if (strcmp(name, "*") != 0){
		strcpy(p->name, name);
	}
	printf("��ǰ����Ϊ��%s\n�������޸�֮��ĺ��루*��ʾ���ֶβ��޸ģ���",p->phone);
	scanf("%s", p->phone);
	if (strcmp(phone, "*") != 0){
		strcpy(p->phone, phone);
	}
	printf("�޸���ɣ�\n");
}


int menu(){
	printf("=======================\n");
	printf(" ��ӭ����ͨѶ¼����         \n ");
	printf(" 1.��ʾȫ����ϵ��         \n");
	printf("  2.�������ϵ��             \n");
	printf("  3.�޸���ϵ����Ϣ      \n ");
	printf(" 4.ɾ����ϵ��                \n ");
	printf(" 0.�˳�ͨѶ¼����          \n");
	printf("=======================\n");
	printf("���������ѡ��");
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
			printf("���������������������룡\n");
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


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"HashTable(Open addressing).h"
#include<string.h>
#include<Windows.h>
#include<conio.h>
struct Sach
{
	char MS[100], name[100];
	int sotrang;
	float gia;
};
int convert(Sach a);
int compare(Sach a, Sach b);
void Menu();
void Show(Sach a);
void ReadFile(HashNode<Sach>* Array[]);
int main() {
	int choice = -1;
	InputHashKey(26);
	HashNode<Sach>** Array = new HashNode<Sach>*[26];
	InitHashTable(Array);
	do
	{
		Menu();
		scanf("%d", &choice);
		switch (choice)
		{
		case 1: {
			ReadFile(Array);
		}break;
		case 2: {
			Sach ms;
			printf("nhap ma so sach: ");
			rewind(stdin);
			gets_s(ms.MS);
			HashNode<Sach>* temp = Find(Array, ms, convert, compare, 1);
			if (temp == NULL)
				printf("khong co");
			else
			{
				printf("\n\t%-10s%-20s%-10s%-10s", "Maso", "ten", "so trang", "gia");
				Show(temp->data);
			}
		}break;
		case 3: {
			Sach temp;
			printf("nhap ma sach: ");
			rewind(stdin);
			gets_s(temp.MS);
			printf("nhap ten sach: ");
			rewind(stdin);
			gets_s(temp.name);
			printf("nhap so trang: ");
			scanf("%d", &temp.sotrang);
			printf("nhap gia sach: ");
			scanf("%f", &temp.gia);
			Array = Insert(Array, temp, convert, compare, 1);
			printf("them thanh cong");
		}break;
		case 4: {
			Array = UpArray(Array, 26);
			printf("\n\ttang thanh cong");
		}
		case 5: {
			Sach ms;
			printf("nhap ma so sach: ");
			rewind(stdin);
			gets_s(ms.MS);
			if (Remove(Array, ms, convert, compare, 1))
				printf("xoa thanh cong");
			else printf("khong xoa dc");
		}break;
		case 6: {
			printf("\n\t%-10s%-20s%-10s%-10s", "Maso", "ten", "so trang", "gia");
			Tranverse(Array, Show);
		}break;
		default:
			break;
		}
		_getch();
		system("cls");
	} while (choice!=0);
}
void Menu() {
	printf("\n\tMenu\n\t1.nhap thong tin\n\t2.tim kiem thong tin sach tu ma\n\t3.them 1 cuon sach\n\t4.tang kich thuoc cua mang bam\n\t5.xoa sach theo ma\n\t6.xuat\n\tnhap lua chon cua ban: ");
}
int compare(Sach a, Sach b) {
	if (_strcmpi(a.MS, b.MS) == 0)
		return 0;
	return 1;
}
int convert(Sach a) {
	int sum = 0;
	for (int i = 0; i < strlen(a.MS); i++)
	{
		sum +=(int) a.MS[i];
	}
	return sum;
}
void Show(Sach a) {
	printf("\n\t%-10s%-20s%-10d%-10.2f", a.MS, a.name, a.sotrang, a.gia);
}
void ReadFile(HashNode<Sach>* Array[]) {
	FILE* L = fopen("Sach.txt", "r");
	char c;
	Sach temp;
	while (fscanf(L,"%[^#]s",temp.MS)!=EOF)
	{
		fscanf(L, "%c", &c);
		fscanf(L, "%[^#]s", temp.name);
		fscanf(L, "%c", &c);
		fscanf(L, "%d", &temp.sotrang);
		fscanf(L, "%c", &c);
		fscanf(L, "%f\n", &temp.gia);
		Array = Insert(Array, temp, convert, compare, 1);
	}
	printf("\n\tdoc thanh cong");
}
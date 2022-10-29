//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include"HashTable(Open addressing).h"
//#include<Windows.h>
//#include<conio.h>
//void show(int a);
//int convert(int a);
//int compare(int a, int b);
//void Menu();
//int main() {
//	InputHashKey(21);
//	HashNode<int>** Hashtable = new HashNode<int>*[21];
//	InitHashTable(Hashtable);
//	int choice = -1;
//	do
//	{
//		Menu();
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1: {
//			int x;
//			printf("\n\tnhap x: ");
//			scanf("%d", &x);
//			Hashtable = Insert(Hashtable, x, convert, compare,1);
//		}break;
//		case 2: {
//			int x;
//			printf("\n\tnhap gia tri can xoa: ");
//			scanf("%d", &x);
//			if (Remove(Hashtable, x, convert, compare,1))
//				printf("xoa thanh cong");
//			else
//				printf("xoa khong thanh cong");
//		}break;
//		case 3: {
//			int x;
//			printf("\n\tnhap gia tri can tim: ");
//			scanf("%d", &x);
//			HashNode<int>* temp = Find(Hashtable, x, convert, compare,1);
//			if (temp == NULL)
//				printf("\n\tkhong co gia tri trong hashtable");
//			else
//				printf("\n\tco gia tri %d trong hashtable", temp->data);
//		}break;
//		case 4: {
//			printf("\n\tbang bam: ");
//			Tranverse(Hashtable, show);
//		}break;
//		default:
//			break;
//		}
//		_getch();
//		system("cls");
//	} while (choice!=0);
//
//
//}
//void Menu() {
//	printf("\n\tMenu\n\t1.them gia tri x\n\t2.xoa 1 phan tu trong bang bam\n\t3.tim kiem 1 phan tu trong bang bam\n\t4.xuat toan bo\n\tmoi nhap lua chon: ");
//}
//int convert(int a) {
//	return a;
//}
//int compare(int a, int b) {
//	if (a == b)
//		return 0;
//	return 1;
//}
//void show(int a) {
//	printf("%d ", a);
//}
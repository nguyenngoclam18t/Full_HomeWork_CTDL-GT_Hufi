//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//#include<conio.h>
//#include<Windows.h>
//#include"SingleLL.h"
//void Menu();
//void Add_X(SList& l, int x);
//int main() {
//	SList sl, sl2;
//	Create_List(sl);
//	Create_List(sl2);
//	int choice = -1;
//	do
//	{
//		system("cls");
//		Menu();
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1: {
//			int n, x;
//			printf("nhap so luong: ");
//			scanf("%d", &n);
//			for (int i = 0; i < n; i++)
//			{
//				printf("nhap gia tri: ");
//				scanf("%d", &x);
//				if (Add_Tail(sl, Create_Node(x)))printf("Add thanh cong\n");
//				else printf("Add ko thanh cong\n");
//			}
//			_getch();
//		}break;
//		case 2: {
//			int x;
//			printf("nhap x: ");
//			scanf("%d", &x);
//			Add_X(sl, x);
//			printf("add thanh cong");
//			_getch();
//		}break;
//		case 3:Print(sl);
//			_getch();
//			break;
//		case 4:Interchange_Sort_Giam(sl);
//			Print(sl);
//			_getch();
//			break;
//		}
//	} while (choice != 0);
//}
//void Menu() {
//	printf("\n1.tao danh sach sl\n2.chen x ma van tang\n3.in danh sach\n4.in danh sach giam dan\n");
//	printf("5.noi sl2 vao sau x\n");
//	printf("moi ban nhap lua chon cua minh: ");
//}
//void Add_X(SList& l, int x) {
//	if (l.head == NULL) {
//		l.head = Create_Node(x);
//		l.tail = Create_Node(x);
//	}
//	else
//	{
//		SNODE* i = l.head;
//		for (; i != NULL; i = i->next)
//		{
//			if (i->next == NULL) {
//				Add_Tail(l, Create_Node(x));
//				break;
//			}else if (i->data < x && (i->next->data > x || i->next == NULL)) {
//				SNODE* k = Create_Node(x);
//				k->next = i->next;
//				i->next = k;
//				break;
//			}
//		}
//	}
//}
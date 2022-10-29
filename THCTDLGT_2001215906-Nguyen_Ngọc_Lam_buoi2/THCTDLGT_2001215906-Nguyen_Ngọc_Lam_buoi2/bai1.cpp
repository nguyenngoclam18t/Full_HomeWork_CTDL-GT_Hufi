/////*==========================================================================
////* -Họ và Tên:Nguyễn Ngọc Lâm
////* -MSSV:2001215906
////* -lớp:12DHTH12
////* -tiết/buổi: 1-5/thứ 4
////==========================================================================*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<Windows.h>
//#include<conio.h>
//#include"SGLL.h"
//void Input_File(SList& l);
//void Menu();
//int Remove_afterX(SList& l, int x);
//int Remove_X(SList& l, int x);
//int Remove_ALL(SList& l);
//int Remove_Even(SList& l);
//int main() {
//	SList l;
//	Create_List(l);
//	int choice = -1;
//	do
//	{
//		system("cls");
//		Menu();
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1:
//			Input_File(l);
//			printf("doc file thanh cong");
//			_getch();
//			break;
//		case 2: {
//			Remove_Head(l);
//			printf("xoa thanh cong");
//			_getch();
//			break;
//		}
//		case 3: {
//			int x;
//			printf("nhap phan tu x de xoa sau no: ");
//			scanf("%d", &x);
//			if (Remove_afterX(l, x))printf("xoa thanh cong");
//			else printf("xoa ko thanh cong");
//			_getch();
//			break;
//		}
//		case 4: {
//			int x;
//			printf("nhap phan tu x de xoa : ");
//			scanf("%d", &x);
//			if (Remove_X(l, x))printf("xoa thanh cong");
//			else printf("xoa ko thanh cong");
//			_getch();
//			break;
//		}
//		case 5: {
//
//			if (Remove_ALL(l))printf("xoa thanh cong");
//			else printf("xoa ko thanh cong");
//			_getch();
//			break;
//		}
//		case 6: {
//
//			if (Remove_Even(l))printf("xoa thanh cong");
//			else printf("xoa ko thanh cong");
//			_getch();
//			break;
//		}
//		case 7: {
//			Print(l);
//			_getch();
//			break;
//		}
//		default:
//			break;
//		}
//	} while (choice != 0);
//}
//void Menu() {
//	printf("\n1.nhap tu file\n2.xoa phan tu dau\n3.xoa 1 phan tu sau phan tu da cho\n4.xoa cac phan tu co gia tri =x \n5.xoa toan bo danh sach\n6.xoa chan\n7,in danh sach\n0.out\n");
//	printf("moi ban nhap lua chon: ");
//}
//void Input_File(SList& l) {
//	FILE* L;
//	L = fopen("bai1.txt", "r");
//	if (L == NULL)return;
//	int x;
//	while (fscanf(L, "%d", &x) != EOF)
//	{
//		Add_Tail(l, Create_Node(x));
//
//	}
//	fclose(L);
//}
//int Remove_afterX(SList& l, int x) {
//	if (l.head == NULL)return 0;
//	for (SNODE* i = l.head; i != NULL; i = i->next)
//	{
//		if (i->data == x) {
//			SNODE* temp = i->next;
//			i->next = temp->next;
//			delete(temp);
//			return 1;
//		}
//	}
//	return 0;
//}
//int Remove_X(SList& l, int x) {
//	if (l.head == NULL)return 0;
//	for (SNODE* i = l.head; i != NULL; i = i->next)
//	{
//		if (i->data == x) {
//			Remove_Node(l, i->data);
//
//		}
//	}
//	return 1;
//}
//int Remove_ALL(SList& l) {
//	if (l.head == NULL)return 0;
//	while (l.head != NULL)
//	{
//		Remove_Head(l);
//	}
//	return 1;
//}
//int Remove_Even(SList& l) {
//	if (l.head == NULL)return 0;
//	for (SNODE* i = l.head; i != NULL; i = i->next)
//	{
//		if (i->data % 2 == 0) {
//			int k = i->data;
//			Remove_Node(l, k);
//			i = l.head;
//		}
//
//	}
//	return 1;
//}

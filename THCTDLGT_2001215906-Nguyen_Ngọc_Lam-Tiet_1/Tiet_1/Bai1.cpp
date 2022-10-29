//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//#include<conio.h>
//#include<Windows.h>
//#include"SingleLL.h"
//void Menu();
//int Add_before_y(SList& l, SNODE* p, int y);
//int Remove_MoreThanX(SList& l, int x);
//int Remove_Even(SList& l);
//int Check_Sngt(int n);
//int Count_Sngt(SList& l);
//int Check_SCP(int n);
//int Sum_Scp(SList l);
//int Count_double(SList l);
//void Create_sl1_sl2(SList l);
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
//		case 1: {
//			int x;
//			printf("nhap pt can chen: ");
//			scanf("%d", &x);
//			if (Add_Tail(l, Create_Node(x)))printf("add vao cuoi thanh cong");
//			else printf("add vao cuoi ko thanh cong");
//			_getch();
//		}break;
//		case 2: {
//			int x,y;
//			printf("nhap pt can chen: ");
//			scanf("%d", &x);
//			printf("nhap pt y: ");
//			scanf("%d", &y);
//			if (Add_before_y(l, Create_Node(x),y))printf("chen thanh cong");
//			else printf("chen ko thanh cong");
//		
//			_getch();
//		}break;
//		case 4: {
//			if (Remove_Even(l))printf("xoa thanh cong");
//			else printf("xoa ko thanh cong");
//			_getch();
//		}break;
//		case 3: {
//			int x;
//			printf("nhap pt x: ");
//			scanf("%d", &x);
//			if (Remove_MoreThanX(l, x))printf("xoa thanh cong");
//			else printf("xoa ko thanh cong");
//
//			_getch();
//		}break;
//		case 5: {
//			printf("co %d so nguyen to trong DSLK", Count_Sngt(l));
//			_getch();
//		}break;
//		case 6: {
//			Interchange_Sort_Tang(l);
//			printf("sort thanh cong");
//			_getch();
//		}break;
//		case 7: {
//			Interchange_Sort_Giam(l);
//			printf("sort thanh cong");
//			_getch();
//		}break;
//		case 8: {
//			printf("max la %d ", Max(l));
//			_getch();
//		}break;
//		case 9: {
//			printf("Min la: %d", Min(l));
//			_getch();
//		}break;
//		case 10: {
//			printf("co %d so lon gap doi so phia sau no ", Count_double(l));
//			_getch();
//		}break;
//		case 11: {
//			Create_sl1_sl2(l);
//			_getch();
//		}break;
//		case 12: {
//			Print(l);
//			_getch();
//		}break;
//		case 13: {
//			printf("Tong so chinh phuong la: %d", Sum_Scp(l));
//			_getch();
//		}break;
//		default:
//			break;
//		}
//
//	} while (choice!=0);
//}
//void Menu() {
//	printf("\n\tMenu\n0.out\n1.add vao cuoi danh sach\n2.chen x truoc pt y\n3.xoa pt > x\n4.xoa chan\n5.dem so nguyen to\n");
//	printf("6.Sort tang\n7.Sort giam\n8.tim max\n9.tim min\n10.dem x gap doi dua sau no\n11.tao sl1 chua so le sl2 chua chan \n12.in list\n13.tong cac so chinh phuong\n");
//	printf("nhap lua chon cua ban: ");
//}
//int Add_before_y(SList& l, SNODE* p,int y) {
//	if (p == NULL || l.head == NULL)return 0;
//	if (l.head->data == y)Add_Head(l, p);
//	else {
//		SNODE* k = l.head;
//		for ( ; k !=NULL ; k=k->next)
//		{
//			if (k->next->data == y)break;
//		}
//		p->next = k->next;
//		k->next = p;
//	}
//	return 1;
//}
//int Remove_MoreThanX(SList& l,int x) {
//	if (l.head == NULL)return 0;
//	else
//	{
//			for (SNODE* i = l.head; i !=NULL; i=i->next)
//			{
//				if (i->data > x) {
//					int k = i->data;
//					Remove_Node(l, k);
//					i = l.head;
//				}
//
//			}
//		return 1;
//	}
//}
//int Remove_Even(SList& l) {
//	if (l.head == NULL)return 0;
//	else
//	{
//		for (SNODE* i = l.head; i != NULL; i = i->next)
//		{
//			if (i->data %2==0) {
//				int k = i->data;
//				Remove_Node(l, k);
//				i = l.head;
//			}
//
//		}
//		return 1;
//	}
//}
//int Check_Sngt(int n) {
//	for (int i = 2; i <= sqrt(n) ; i++)
//	{
//		if (n % i == 0)return 0;
//	}
//	return n > 1;
//}
//int Count_Sngt(SList& l) {
//	if (l.head == NULL)return 0;
//	else
//	{
//		int count = 0;
//		for (SNODE* i = l.head; i != NULL; i = i->next)
//		{
//			if (Check_Sngt(i->data)) {
//				count++;
//			}
//
//		}
//		return count;
//	}
//}
//int Check_SCP(int n) {
//	return (sqrt(n) * sqrt(n) == n) ? 1 : 0;
//}
//int Sum_Scp(SList l) {
//	int sum = 0;
//	for (SNODE* i = l.head; i !=NULL ; i=i->next)
//	{
//		if (Check_SCP(i->data))sum += i->data;
//	}
//	return sum;
//}
//int Count_double(SList l) {
//	if (l.head == NULL)return 0;
//	else
//	{
//		int count = 0;
//		SNODE* i = l.head;
//		for (; i->next!=NULL; i = i->next)
//		{
//			if (i->data > (i->next->data*2)) {
//				count++;
//			}
//
//		}
//		return count;
//	}
//}
//void Create_sl1_sl2(SList l) {
//	SList sl1, sl2;
//	Create_List(sl1);
//	Create_List(sl2);
//	for (SNODE* i =l.head; i !=NULL ; i=i->next)
//	{
//		if (i->data % 2 == 0) {
//			Add_Tail(sl1, Create_Node(i->data));
//		}
//		else Add_Tail(sl2, Create_Node(i->data));
//	}
//	printf("DSLK sl1: ");
//	Print(sl1);
//	printf("\nDSLK sl2: ");
//	Print(sl2);
//}
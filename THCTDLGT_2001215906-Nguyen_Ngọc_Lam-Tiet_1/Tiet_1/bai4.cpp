//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//#include<conio.h>
//#include<Windows.h>
//#include"SingleLL.h"
//void Add_sl_Tang(SList& sl, SList sl1, SList sl2);
//void Add_sl_Giam(SList& sl, SList sl1, SList sl2);
//void Add_Even_Odd(SList& sl, SList sl1, SList sl2);
//void Add_Even_Odd_Index(SList& sl, SList sl1, SList sl2);
//void Menu();
//int Count(SList sl);
//void RemoveHead(SList& sl);
//int main() {
//	SList sl,sl1, sl2;	
//	int choice = -1;
//	Create_List(sl1);
//	Create_List(sl2);
//	do
//	{
//		system("cls");
//		Menu();
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1: {
//			int n, x;
//			Create_List(sl1);
//			printf("nhap so luong: ");
//			scanf("%d", &n);
//			for (int i = 0; i < n; i++)
//			{
//				printf("nhap gia tri: ");
//				scanf("%d", &x);
//				if (Add_Tail(sl1, Create_Node(x)))printf("Add thanh cong\n");
//				else printf("Add ko thanh cong\n");
//			}
//			Interchange_Sort_Tang(sl1);
//			_getch();
//		}break;
//		case 2: {
//			Create_List(sl2);
//			int n, x;
//			printf("nhap so luong: ");
//			scanf("%d", &n);
//			for (int i = 0; i < n; i++)
//			{
//				printf("nhap gia tri: ");
//				scanf("%d", &x);
//				if (Add_Tail(sl2, Create_Node(x)))printf("Add thanh cong\n");
//				else printf("Add ko thanh cong\n");
//			}
//			Interchange_Sort_Tang(sl2);
//			_getch();
//		}break;
//		case 3: {
//			Create_List(sl);
//			Add_sl_Tang(sl, sl1, sl2);
//			Print(sl);
//			_getch();
//			break;
//		}
//		case 4: {
//			Create_List(sl);
//			Add_sl_Giam(sl, sl1, sl2);
//			Print(sl);
//			_getch();
//			break;
//		}
//		case 5: {
//			Create_List(sl);
//			Add_Even_Odd(sl, sl1, sl2);
//			Print(sl);
//			_getch();
//			break;
//		}
//		case 6: {
//			Create_List(sl);
//			Add_Even_Odd_Index(sl, sl1, sl2);
//			Print(sl);
//			_getch();
//			break;
//		}
//		}
//	} while (choice != 0);
//}
//void Menu() {
//	printf("\n1.tao danh sach sl1\n2.tao danh sach sl2\n3. tao danh sach sl tang\n4. tao danh sach sl giam\n5.tao danh sach chan tang le giam\n6.tao danh sach vi tri chan tang,vi tri le giam\n");
//	printf("moi ban nhap lua chon cua minh: ");
//}
//void Add_sl_Tang(SList& sl, SList sl1, SList sl2) {
//	if (sl1.head == NULL && sl2.head == NULL)return;
//	SNODE* l1 = sl1.head;
//	SNODE* l2 = sl2.head;
//
//	while (l1!=NULL&&l2!=NULL)
//	{
//		if (l1->data<l2->data) {
//			Add_Tail(sl, Create_Node(l1->data));
//			l1 = l1->next;
//			
//		}
//		else{
//			Add_Tail(sl, Create_Node(l2->data));
//			l2 = l2->next;
//		}
//	}
//	while (l1!=NULL)
//	{
//		Add_Tail(sl, Create_Node(l1->data));
//		l1 = l1->next;
//	}
//	while (l2!=NULL)
//	{
//		Add_Tail(sl, Create_Node(l2->data));
//		l2 = l2->next;
//	}
//}
//void Add_sl_Giam(SList& sl, SList sl1, SList sl2) {
//	if (sl1.head == NULL && sl2.head == NULL)return;
//	SNODE* l1 = sl1.head;
//	SNODE* l2 = sl2.head;
//
//	while (l1 != NULL && l2 != NULL)
//	{
//		if (l1->data < l2->data) {
//			Add_Head(sl, Create_Node(l1->data));
//			l1 = l1->next;
//
//		}
//		else {
//			Add_Head(sl, Create_Node(l2->data));
//			l2 = l2->next;
//		}
//	}
//	while (l1 != NULL)
//	{
//		Add_Head(sl, Create_Node(l1->data));
//		l1 = l1->next;
//	}
//	while (l2 != NULL)
//	{
//		Add_Head(sl, Create_Node(l2->data));
//		l2 = l2->next;
//	}
//}
//int Count(SList sl) {
//	int count = 0;
//	for (SNODE*i = sl.head; i !=NULL ; i=i->next)
//	{
//		count++;
//	}
//	return count;
//}
//void Add_Even_Odd(SList& sl, SList sl1, SList sl2) {
//	if (sl1.head == NULL && sl2.head == NULL)return;
//	SList le, chan;
//	SNODE* l1 = sl1.head;
//	SNODE* l2 = sl2.head;
//	Create_List(le);
//	Create_List(chan);
//	while (l1 != NULL || l2 != NULL)
//	{
//		if (l1 == NULL) {
//			if (l2->data % 2 == 0)Add_Tail(chan, Create_Node(l2->data));
//			else Add_Tail(le, Create_Node(l2->data));
//			l2 = l2->next;
//		}
//		else {
//			if (l1->data % 2 == 0)Add_Tail(chan, Create_Node(l1->data));
//			else Add_Tail(le, Create_Node(l1->data));
//			l1 = l1->next;
//		}
//	}
//	Interchange_Sort_Tang(chan);
//	Interchange_Sort_Giam(le);
//	l1 = le.head;
//	l2 = chan.head;
//	while (l1 != NULL || l2 != NULL)
//	{
//		if (l1 == NULL) {
//			Add_Tail(sl, Create_Node(l2->data));
//			l2 = l2->next;
//		}
//		else {
//			Add_Tail(sl, Create_Node(l1->data));
//			l1 = l1->next;
//		}
//	}
//}
//
//void Add_Even_Odd_Index(SList& sl, SList sl1, SList sl2) {
//	if (sl1.head == NULL && sl2.head == NULL)return;
//	int n1 = Count(sl1);
//	int n2 = Count(sl2);
//	if(n1 - 1 > n2){
//		while (n1 - 1 > n2)
//		{
//			SNODE* p = Create_Node(sl1.head->data);
//			Add_Tail(sl2, p);
//			RemoveHead(sl1);
//			n1--;
//		}
//	}
//	else if (n2 - 1 > n1) {
//		while (n2 - 1 > n1)
//		{
//			SNODE* p = Create_Node(sl1.head->data);
//			Add_Tail(sl1, p);
//			RemoveHead(sl2);
//			n2--;
//		}
//	}
//	SNODE* l1 = sl2.head;
//	SNODE* l2 = sl1.head;
//	Interchange_Sort_Tang(sl1);
//	Interchange_Sort_Giam(sl2);
//	int count = 0;
//	while (l1 != NULL || l2 != NULL)
//	{
//		if (l1 == NULL) {
//			Add_Tail(sl, Create_Node(l2->data));
//			l2 = l2->next;
//		}else if (l2 == NULL) {
//			Add_Tail(sl, Create_Node(l1->data));
//			l1 = l1->next;
//		}
//		else
//		{
//			if (count % 2 == 0) {
//				Add_Tail(sl, Create_Node(l2->data));
//				l2 = l2->next;
//			}
//			else
//			{
//				Add_Tail(sl, Create_Node(l1->data));
//				l1 = l1->next;
//			}
//			count++;
//		}
//		
//	}
//}
//void RemoveHead(SList& sl) {
//	if (sl.head == NULL)return;
//	SNODE* p = sl.head;
//	sl.head = sl.head->next;
//	delete p;
//}
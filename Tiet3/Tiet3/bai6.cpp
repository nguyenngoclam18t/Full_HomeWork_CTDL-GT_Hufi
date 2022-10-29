//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<Windows.h>
//#include<conio.h>
//#include"Queue.h"
//void Menu();
//void Take_All(Queue<int>& q);
//int main() {
//	Queue<int> q;
//	InitQueue<int>(q);
//	int choice = -1;
//	do
//	{
//		Menu();
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1: {
//			int x;
//			printf("nhap phan tu can them: ");
//			scanf("%d", &x);
//			EnQueue<int>(q, x);
//			printf("them thanh cong");
//			_getch();
//		}break;
//		case 2: {
//			printf("phan tu dau hang doi la: %d", q.Head->Data);
//			_getch();
//		}break;
//		case 3: {
//			printf("phan tu cuoi hang doi la: %d", q.Tail->Data);
//			_getch();
//		}break;
//		case 4: {
//			NODE<int>* p = DeQueue(q);
//			printf("lay phan tu %d ra khoi hang doi", p->Data);
//			_getch();
//		}break;
//		case 5: {
//			Take_All(q);
//			_getch();
//		}break;
//
//		default:
//			break;
//		}
//		system("cls");
//	} while (choice!=0);
//	return 0;
//}
//void Menu() {
//	printf("\n===Menu===\n");
//	printf("1.them phan tu\n2.xem gia tri dau hang doi\n3.xem gia tri cuoi hang doi\n4.lay phan tu ra khoi hang doi\n5.lay het ra va xem nd\n");
//	printf("nhap lua chon cua ban: ");
//}
//void Take_All(Queue<int>& q) {
//	while (IsEmpty<int>(q) == false) {
//		NODE<int>* p = DeQueue(q);
//		printf("%d ", p->Data);
//	}
//}
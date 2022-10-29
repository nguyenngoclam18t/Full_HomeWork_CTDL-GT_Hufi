//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<Windows.h>
//#include<conio.h>
//#include"Queue.h"
//void Menu();
//void add(int a[], int n, Queue<int>& q);
//void Out(int a[], int n);
//int main() {
//	int a[10] = { 1,2,3,4 }, b[10] = { 5,6,7,8 }, c[10] = { 9,10,11,12 };
//	int n = 4,choice=-1;
//	
//	Queue<int>q;
//	void AddToD(int d[], int& n, Queue<int>&q);
//	do
//	{
//		int flagA=1, flagB=1, flagC=1;
//		Menu();
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1: {
//			InitQueue<int>(q);
//			int luachon = -1;
//			do
//			{
//				printf("\n===Menu===\n1.them A\n2.them B\n3.them C\n0.out\nnhap lua chon: ");
//				scanf("%d", &luachon);
//				switch (luachon)
//				{
//				case 1: {
//					if (flagA) {
//						add(a, n, q);
//						flagA = 0;
//					}
//					else printf("da them mang nay vo roi");
//					
//					_getch();
//				}break;
//				case 2: {
//					if (flagB) {
//						add(b, n, q);
//						flagB = 0;
//					}
//					else printf("da them mang nay vo roi");
//					_getch();
//				}break;
//				case 3: {
//					if (flagC) {
//						add(c, n, q);
//						flagC = 0;
//					}
//					else printf("da them mang nay vo roi");
//					_getch();
//				}break;
//				default:
//					break;
//				}
//				system("cls");
//				if (flagA == 0 && flagB == 0 && flagC == 0)luachon = 0;
//			} while (luachon != 0);
//		}break;
//		case 2: {
//			int d[20],nd=0;
//			AddToD(d, nd, q);
//			Out(d, nd);
//			_getch();
//		}break;
//		default:
//			break;
//		}
//		system("cls");
//	} while (choice!=0);
//
//}
//void Menu() {
//	printf("\n===Menu===\n");
//	printf("1.chon thu tu dau vao cua A B C\n2.in danh sach d\n0.out");
//	printf("\nmoi ban chon: ");
//}
//void add(int a[], int n, Queue<int>& q) {
//	for (int i = 0; i < n; i++)
//	{
//		EnQueue<int>(q, a[i]);
//	}
//	printf("them thanh cong");
//}
//void AddToD(int d[], int& n, Queue<int>& q) {
//	while (IsEmpty(q) == false)
//	{
//		NODE<int>* p = DeQueue<int>(q);
//		d[n] = p->Data;
//		n++;
//	}
//}
//void Out(int a[], int n) {
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
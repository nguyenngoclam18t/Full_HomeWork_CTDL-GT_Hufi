//bao gồm cả hệ hex
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include"Stack.h"
//#include<Windows.h>
//#include<conio.h>
//void Menu();
//void Print(Stack<int>S);
//void Convert(Stack<int>& S, int n, int coso);
//int main() {
//	Stack<int> S;
//	int choice = -1;
//	int n;
//	do
//	{
//		Menu();
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1: {
//			InitStack<int>(S);
//			printf("nhap n(de chuyen): ");
//			scanf("%d", &n);
//			Convert(S, n, 2);
//			Print(S);
//			_getch();
//		}break;
//		case 2: {
//			InitStack<int>(S);
//			printf("nhap n(de chuyen): ");
//			scanf("%d", &n);
//			Convert(S, n, 8);
//			Print(S);
//			_getch();
//		}break;
//		case 3: {
//			InitStack<int>(S);
//			printf("nhap n(de chuyen): ");
//			scanf("%d", &n);
//			Convert(S, n, 16);
//			Print(S);
//			_getch();
//		}break;
//		default:
//			break;
//		}
//		system("cls");
//	} while (choice!=0);
//}
//void Menu() {
//	printf("1.nhi phan\n2.bat phan \n3.thap luc phan\n");
//	printf("nhap lua chon cua ban: ");
//}
//void Print(Stack<int>S) {
//	for (NODE<int>* i = S.top; i !=NULL ; i=i->next)
//	{
//		if (i->data >= 10) {
//			printf("%c", 65 + (i->data - 10));
//		}else printf("%d", i->data);
//	}
//}
//void Convert(Stack<int>&S,int n,int coso){
//	while (n!=0)
//	{
//		Push<int>(S, n % coso);
//		n /= coso;
//	}
//}
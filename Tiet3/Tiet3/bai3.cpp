//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include"Stack.h"
//#include<Windows.h>
//#include<conio.h>
//using namespace std;
//void menu();
//void ShowStack(Stack<string> S);
//int main() {
//	Stack<string>s1, s2;
//	InitStack(s1);
//	InitStack(s2);
//	int choice=-1;
//	do
//	{
//		menu();
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1: {
//			Push<string>(s1, "delete char");
//			printf("them thanh cong");
//			_getch();
//		}break;
//		case 2: {
//			Push<string>(s1, "delete selected words");
//			printf("them thanh cong");
//
//			_getch();
//		}break;
//		case 3: {
//			Push<string>(s1, "typing char");
//			printf("them thanh cong");
//
//			_getch();
//		}break;
//		case 4: {
//			Push<string>(s1, "bold");
//			printf("them thanh cong");
//			_getch();
//		}break;
//		case 5: {
//			Push<string>(s1, "under line");
//			printf("them thanh cong");
//			_getch();
//		}break;
//		case 6: {
//			printf("danh sach da lam: ");
//			ShowStack(s1);
//			_getch();
//		}break;
//		case 7: {
//			NODE<string>* t = Pop<string>(s1);
//			Push<string>(s2, t->data);
//			printf("undo thanh cong");
//			_getch();
//		}break;
//		case 8: {
//			NODE<string>* t = Pop<string>(s2);
//			Push<string>(s1, t->data);
//			printf("Redo thanh cong");
//			_getch();
//		}break;
//		default:
//			break;
//		}
//		system("cls");
//	} while (choice != 0);
//}
//void menu() {
//	printf("\n===Menu===\n");
//	printf("\n1.delete char\n2.delete selected words\n3.typing char\n4.bold\n5.under line\n6.show danh sach da lam\n7.undo\n8.redo\n0.out\n");
//	printf("moi ban chon lua chon: ");
//}
//void ShowStack(Stack<string> S) {
//	NODE<string>* t = S.top;
//	while (t!=NULL)
//	{
//		cout << t->data<<endl;
//		t = t->next;
//	}
//}
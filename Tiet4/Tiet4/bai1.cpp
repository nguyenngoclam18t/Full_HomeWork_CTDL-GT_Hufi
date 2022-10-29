//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include"Tree.h"
//#include<Windows.h>
//#include<conio.h>
//#include<time.h>
//#include<stdlib.h>
//void MenuChinh();
//void MenuInput();
//void NhapTumang(int a[], int n, NODET<int>*& root);
//void NhapTay(NODET<int>*& root);
//void NhapRandom(NODET<int>*& root);
//void MenuOutput();
//void Show(NODET<int>* root);
//void NRLmoreX(NODET<int>* root, int x);
//void MenuTT();
//int main() {
//	int choice = -1;
//	Tree<int>tree;
//	InitTree<int>(tree);	
//	do
//	{
//		MenuChinh();
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1: {
//			int luachon = -1;
//			do
//			{
//				MenuInput();
//				scanf("%d", &luachon);
//				switch (luachon)
//				{
//				case 1: {
//					int a[10] = { 5,4,3,2,1,6,7,8,9 };
//					int n = 9;
//					NhapTumang(a, n, tree.Root);
//					printf("nhap done");
//					_getch();
//				}break;
//				case 2: {
//					NhapTay(tree.Root);
//					printf("nhap done");
//					_getch();
//				}break;
//				case 3: {
//					NhapRandom(tree.Root);
//					printf("nhap done");
//					_getch();
//				}break;
//				default:
//					break;
//				}
//				system("cls");
//			} while (luachon != 0);
//		}break;
//		case 2: {
//			int luachon = -1;
//			do
//			{
//				MenuOutput();
//				scanf("%d", &luachon);
//				switch (luachon)
//				{
//				case 1: {
//					TraverseNLR<int>(tree.Root, Show);
//					_getch();
//				}break;
//				case 2: {
//					traverseLNR<int>(tree.Root, Show);
//					_getch();
//				}break;
//				case 3: {
//					traverseLRN<int>(tree.Root, Show);
//					_getch();
//				}break;
//
//				case 4: {
//					traverseNRL<int>(tree.Root, Show);
//					_getch();
//				}break;
//				case 5: {
//					traverseRNL<int>(tree.Root, Show);
//					_getch();
//				}break;
//				case 6: {
//					traverseRLN<int>(tree.Root, Show);
//					_getch();
//				}break;
//				default:
//					break;
//				}
//				system("cls");
//			} while (luachon != 0);
//		}break;
//		case 3: {
//			printf("so luong node trong tree la: %d", CountNODE<int>(tree.Root));
//			_getch();
//		}break;
//		case 4: {
//			int x;
//			printf("nhap x: ");
//			scanf("%d", &x);
//			NODET<int>* P = FindX<int>(tree.Root,x);
//			if (P)printf("co x trong tree");
//			else printf("ko co x");
//			_getch();
//		}break;
//		case 5: {
//			int x;
//			printf("nhap x: ");
//			scanf("%d", &x);
//			printf("cac node lon hon x la: ");
//			NRLmoreX(tree.Root, x);
//			_getch();
//		}break;
//		case 6: {
//			int luachon = -1;
//			do
//			{
//				MenuTT();
//				scanf("%d", &luachon);
//				switch (luachon)
//				{
//				case 1: {
//					printf("so luong node trong tree la: %d", CountNODE<int>(tree.Root));
//					_getch();
//				}break;
//				case 2: {
//					printf("so luong node leaf trong tree la: %d", CountLeaf<int>(tree.Root));
//					_getch();
//				}break;
//				case 3: {
//					printf("so luong node 1 con trong tree la: %d", Count1Child<int>(tree.Root));
//					_getch();
//				}break;
//				case 4: {
//					printf("so luong node 2 con trong tree la: %d", Count2Child<int>(tree.Root));
//					_getch();
//				}break;
//				case 5: {
//					printf("tong node trong tree la: %.2lf", SumNODE<int>(tree.Root));
//					_getch();
//				}break;
//				case 6: {
//					printf("tong node la trong tree la: %.2lf", SumNodeLeaf<int>(tree.Root));
//					_getch();
//				}break;
//				case 7: {
//					printf("tong node 1 con la trong tree la: %.2lf", Sum1Child<int>(tree.Root));
//					_getch();
//				}break;
//				case 8: {
//					printf("tong node 2 con la trong tree la: %.2lf", Sum2Child<int>(tree.Root));
//					_getch();
//				}break;
//				case 9: {
//					printf("chieu cao tree la: %d", HighTree<int>(tree.Root));
//					_getch();
//				}break;
//				default:
//					break;
//				}
//				system("cls");
//			} while (luachon != 0);
//		}break;
//		default:
//			break;
//		}
//		system("cls");
//	} while (choice!=0);
//}
//void MenuChinh() {
//	printf("\n===MENU===\n1.nhap\n2.xuat\n3.dem node\n4.tim x\n5.tim cac NODE lon hon x\n6.thuc hien cac phep toan nhu count,sum\n");
//	printf("moi ban nhap lua chon: ");
//}
//void MenuInput() {
//	printf("\n===MENU===\n1.nhap tu mang a\n2.nhap tay\n3.random\n0.out\n");
//	printf("moi ban nhap lua chon: ");
//}
//void MenuOutput() {
//	printf("\n===Menu===\n1.NLR\n2.LNR\n3.LRN\n4.NRL\n5.RNL\n6.RLN\n");
//	printf("moi ban nhap lua chon: ");
//}
//void MenuTT() {
//	printf("\n===Menu===\n1.count NODE\n2.count leaf\n3.count 1child\n4.count 2 child\n.5.sum node\n6.sum node leaf\n7.sum node 1 child\n8.sum node 2 child\n9.high tree\n");
//	printf("moi ban nhap lua chon: ");
//
//
//}
//void NhapTumang(int a[], int n, NODET<int>*& root) {
//	for (int i = 0; i < n; i++)
//	{
//		AddNodeT<int>(root, CreateNodeT<int>(a[i]));
//	}
//}
//void NhapTay( NODET<int>*& root) {
//	int x;
//	int n;
//	printf("nhap so luong pt: ");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("nhap gia tri %d: ",i);
//		scanf("%d", &x);
//		AddNodeT<int>(root, CreateNodeT<int>(x));
//	}
//}
//void NhapRandom(NODET<int>*& root) {
//	int x;
//	int n;
//	printf("nhap so luong pt: ");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		x = rand() % 20;
//		AddNodeT<int>(root, CreateNodeT<int>(x));
//	}
//}
//void Show(NODET<int>* root) {
//	printf("%d ", root->Data);
//}
//
//void NRLmoreX(NODET<int>* root,int x) {
//	if (!root)return;
//	if (root->Data > x)printf("%d ", root->Data);
//	NRLmoreX(root->Left, x);
//	NRLmoreX(root->Right,x);
//}
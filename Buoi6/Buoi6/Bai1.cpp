//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<conio.h>
//#include"RedBlackTree.h"
//void Menu();
//void MenuDuyet();
//void ReadFile(BRTree<int>& tree);
//int CountDo(BRTNode<int>* root);
//int CountDen(BRTNode<int>* root);
//int CountDo_k(BRTNode<int>* root, int k);
//int CountDen_k(BRTNode<int>* root, int k);
//int SumDen(BRTNode<int>* root);
//int SumDo(BRTNode<int>* root);
//int compare(int a, int b);
//int main() {
//	BRTree<int>tree;
//	initBRTree(tree);
//	int choice = -1;
//	do
//	{
//		Menu();
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1: {
//			initBRTree(tree);
//			for (int i = 0; i < 51; i++)
//			{
//				insert(tree.Root, i,compare);
//			}
//			printf("doc thanh cong");
//		}break;
//		case 2: {
//			initBRTree(tree);
//			ReadFile(tree);
//		}break;
//		case 3: {
//			int luachon = -1;
//			do
//			{
//				MenuDuyet();
//				scanf("%d", &luachon);
//				switch (luachon)
//				{
//				case 1: {
//					NLR(tree.Root, showBRTNode);
//				}break;
//				case 2: {
//					NRL(tree.Root, showBRTNode);
//				}break;
//				case 3: {
//					LNR(tree.Root, showBRTNode);
//				}break;
//				case 4: {
//					RNL(tree.Root, showBRTNode);
//				}break;
//				case 5: {
//					LRN(tree.Root, showBRTNode);
//				}break;
//				case 6: {
//					RLN(tree.Root, showBRTNode);
//				}break;
//				case 7: {
//					levelOrderL(tree.Root, showBRTNode);
//				}break;
//				case 8: {
//					levelOrderR(tree.Root, showBRTNode);
//				}break;
//				default:
//					break;
//				}
//				_getch();
//				system("cls");
//			} while (luachon!=0);
//		}break;
//		case 4: {
//			int x;
//			printf("nhap x: ");
//			scanf("%d", &x);
//			insert(tree.Root, x,compare);
//			printf("them done");
//		}break;
//		case 5: {
//			printf("co %d node do,%d node den\n", CountDo(tree.Root), CountDen(tree.Root));
//		}break;
//		case 6: {
//			int k;
//			printf("nhap muc k: ");
//			scanf("%d", &k);
//			printf("co %d node do,%d node den\n", CountDo_k(tree.Root,k), CountDen_k(tree.Root, k));
//		}break;
//		case 7: {
//			printf("%d node do, %d node den ", SumDo(tree.Root), SumDen(tree.Root));
//		}break;
//		default:
//			break;
//		}
//		_getch();
//		system("cls");
//	} while (choice!=0);
//}
//void ReadFile(BRTree<int>&tree) {
//	FILE* L = fopen("Bai1.txt", "r");
//	int n;
//	fscanf(L, "%d\n", &n);
//	int temp;
//	for (int i = 0; i < n; i++)
//	{
//		fscanf(L, "%d", &temp);
//		insert(tree.Root, temp,compare);
//	}
//	printf("doc thanh cong");
//}
//void Menu() {
//	printf("\n1.tao cay tu mang co san\n2.tao cay bang file txt \n3.duyet cay\n4.them nut x\n5.dem nut do va nut den\n6.dem nut do nut den muc k\n");
//	printf("7.tong cac nut do,den\n0.out\n");
//	printf("moi ban nhap lua chon: ");
//}
//void MenuDuyet() {
//	printf("\n1.NLR\n2.NRL\n3.LNR\n4.RNL\n5.LRN\n6.RLN\n7.duyet rong NLR\n8.duyet rong NRL\n0.out\n");
//	printf("moi ban nhap lua chon: ");
//}
//int CountDo(BRTNode<int>* root) {
//	if (root == NULL)return 0;
//	int Do = 0;
//	if (root->Color == RED)
//		Do++;
//	int left = CountDo(root->Left);
//	int right = CountDo(root->Right);
//	return Do + left + right;
//}
//int CountDen(BRTNode<int>* root) {
//	if (root == NULL)return 0;
//	int Den = 0;
//	if (root->Color == BLACK)
//		Den++;
//	int left = CountDen(root->Left);
//	int right = CountDen(root->Right);
//	return Den + left + right;
//}
//
//int CountDo_k(BRTNode<int>* root,int k) {
//	if (root == NULL)return 0;
//	int Do = 0;
//	if (root->Color == RED&&k==0)
//		Do++;
//	k--;
//	int left = CountDo_k(root->Left,k);
//	int right = CountDo_k(root->Right,k);
//	return Do + left + right;
//}
//int CountDen_k(BRTNode<int>* root, int k) {
//	if (root == NULL)return 0;
//	int Do = 0;
//	if (root->Color == BLACK && k == 0)
//		Do++;
//	k--;
//	int left = CountDen_k(root->Left, k);
//	int right = CountDen_k(root->Right, k);
//	return Do + left + right;
//}
//
//int SumDo(BRTNode<int>* root) {
//	if (root == NULL)return 0;
//	int Do = 0;
//	if (root->Color == RED)
//		Do+= root->Info;
//	int left = SumDo(root->Left);
//	int right = SumDo(root->Right);
//	return Do + left + right;
//}
//int SumDen(BRTNode<int>* root) {
//	if (root == NULL)return 0;
//	int Den = 0;
//	if (root->Color == BLACK)
//		Den+=root->Info;
//	int left = SumDen(root->Left);
//	int right = SumDen(root->Right);
//	return Den + left + right;
//}
//int compare(int a, int b) {
//	if (a == b)return 0;
//	if (a > b)return 1;
//	if (a < b)return -1;
//}
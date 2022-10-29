//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include"Btree.h"
//#include<Windows.h>
//#include<conio.h>
//#include<time.h>
//#include<stdlib.h>
//#include"Queue.h"
//#include<math.h>
//void MenuChinh();
//void MenuInput();
//void NhapTumang(int a[], int n, NODET<int>*& root);
//void NhapTay(NODET<int>*& root);
//void NhapRandom(NODET<int>*& root);
//void MenuOutput();
//void Show(NODET<int>* root);
//int Compare(int a, int b);
//void PrintK(NODET<int>* root, int k);
//void DuyetRong_NLR(BTree<int>tree);
//void DuyetRong_NRL(BTree<int>tree);
//void XuatCompareX(NODET<int>* root, int x, int(*compare)(int, int));
//void trongdoanXY(NODET<int>* root, int x, int y);
//int NhoHonX(int a, int b);
//int LonHonX(int a, int b);
//void Max_Tree(NODET<int>* root);
//void Min_Tree(NODET<int>* root);
//void MenuShowK();
//int CheckLeaf(NODET<int>* root);
//int Check1Child(NODET<int>* root);
//void PrintK(NODET<int>* root, int k);
//void PrintK_Compare(NODET<int>* root, int k, int (*check)(NODET<int>*));
//int CountK_Compare(NODET<int>* root, int k, int (*check)(NODET<int>*));
//int CountK(NODET<int>* root, int k);
//int Check_Duong(int a);
//int Check_Am(int a);
//int SumAmDuong(NODET<int>* root, int(*check)(int));
//int GiatriGan(NODET<int>* root, int x);
//int GiatriXa(NODET<int>* root, int x);
//int Count_Node_KDQ(NODET<int>* root);
//int count_compare(NODET<int>* root, int(*compare)(int));
//int Sngt(int n);
//int HoanThien(int n);
//int Thinhvuong(int n);
//int Sum(NODET<int >* root);
//int Sum_compare(NODET<int>* root, int(*compare)(int));
//int main() {
//	int choice = -1;
//	SetConsoleOutputCP(65001);
//	BTree<int>tree;
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
//					int a[10] = { 5,3,4,-1,2,7,6,9,8 };
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
//				case 7: {
//					DuyetRong_NLR(tree);
//					_getch();
//				}break;
//				case 8: {
//					DuyetRong_NRL(tree);
//					_getch();
//				}break;
//				default:
//					break;
//				}
//				system("cls");
//			} while (luachon != 0);
//		}break;
//		case 3: {
//			int x;
//			printf("nhap x: ");
//			scanf("%d", &x);
//			Remove_X<int>(tree.Root, x, Compare);
//			printf("xoa done");
//			_getch();
//		}break;
//		case 4: {
//			int luachon = -1;
//			do
//			{
//				printf("\n1.lon hon x\n2.nho hon x\n3. trong doan x y\nmoi ban nhap: ");
//				scanf("%d", &luachon);
//				switch (luachon)
//				{
//				case 1: {
//					int x;
//					printf("nhap x: ");
//					scanf("%d", &x);
//					XuatCompareX(tree.Root, x, LonHonX);
//					_getch();
//				}break;
//				case 2: {
//					int x;
//					printf("nhap x: ");
//					scanf("%d", &x);
//					XuatCompareX(tree.Root, x, NhoHonX);
//					_getch();
//				}break;
//				case 3: {
//					int y,x;
//					printf("nhap x: ");
//					scanf("%d", &x);
//					printf("nhap y: ");
//					scanf("%d", &y);
//					trongdoanXY(tree.Root, x, y);
//					_getch();
//				}break;
//				default:
//					break;
//				}
//				system("cls");
//			} while (luachon != 0);
//			_getch();
//		}break;
//		case 5: {
//			printf("\nMax: ");
//			Max_Tree(tree.Root);
//			printf("\nMin: ");
//			Min_Tree(tree.Root);
//			_getch();
//		}break;
//		case 6: {
//			int luachon = -1;
//			do
//			{
//				MenuShowK();
//				scanf("%d", &luachon);
//				switch (luachon)
//				{
//				case 1: {
//					int k;
//					printf("nhap muc k: ");
//					scanf("%d", &k);
//					PrintK(tree.Root, k);
//					_getch();
//				}break;
//				case 2: {
//					int k;
//					printf("nhap muc k: ");
//					scanf("%d", &k);
//					PrintK_Compare(tree.Root, k, CheckLeaf);
//					_getch();
//				}break;
//				case 3: {
//					int k;
//					printf("nhap muc k: ");
//					scanf("%d", &k);
//					PrintK_Compare(tree.Root, k, Check1Child);
//					_getch();
//				}break;
//				default:
//					break;
//				}
//				system("cls");
//			} while (luachon != 0);
//			_getch();
//		}break;
//		case 7: {
//			int luachon = -1;
//			do
//			{
//				MenuShowK();
//				scanf("%d", &luachon);
//				switch (luachon)
//				{
//				case 1: {
//					int k;
//					printf("nhap muc k: ");
//					scanf("%d", &k);
//					printf("%d NODE",CountK(tree.Root, k));
//					_getch();
//				}break;
//				case 2: {
//					int k;
//					printf("nhap muc k: ");
//					scanf("%d", &k);
//					printf("%d NODE leaf", CountK_Compare(tree.Root, k,CheckLeaf));
//					_getch();
//				}break;
//				case 3: {
//					int k;
//					printf("nhap muc k: ");
//					scanf("%d", &k);
//					printf("%d NODE 1 child", CountK_Compare(tree.Root, k, Check1Child));
//					_getch();
//				}break;
//				default:
//					break;
//				}
//				system("cls");
//			} while (luachon != 0);
//			_getch();
//		}break;
//		case 8: {
//			printf("Tong duong: %d\ntong am: %d", SumAmDuong(tree.Root,Check_Duong),SumAmDuong(tree.Root,Check_Am));
//			_getch();
//		}break;
//		case 9: {
//			int x;
//			printf("nhap x: ");
//			scanf("%d", &x);
//			printf("gia tri gan x la: %d", GiatriGan(tree.Root,  x));
//			printf("\ngia tri xa x la: %d", GiatriXa(tree.Root, x));
//			_getch();
//		}break;
//		case 10: {
//			printf("%d NODE trong cay", CountNODE<int>(tree.Root));
//			_getch();
//		}break;
//		case 11: {
//			printf("so nguyen to:%d\n", count_compare(tree.Root, Sngt));
//			printf("so hoan thien:%d\n", count_compare(tree.Root, HoanThien));
//			printf("so thinh vuong:%d\n", count_compare(tree.Root, Thinhvuong));
//			_getch();
//		}break;
//		case 12: {
//			printf("tong node:%d\n", Sum(tree.Root));
//			_getch();
//		}break;
//		case 13: {
//			printf("tong so nguyen to:%d\n", Sum_compare(tree.Root, Sngt));
//			printf("tong so hoan thien:%d\n", Sum_compare(tree.Root, HoanThien));
//			printf("tong so thinh vuong:%d\n", Sum_compare(tree.Root, Thinhvuong));
//			_getch();
//		}break;
//		case 14: {
//			DeleteTree(tree.Root);
//			printf("xoa done");
//			_getch();
//		}break;
//		default:
//			break;
//		}
//		system("cls");
//	} while (choice!=0);
//}
//void MenuChinh() {
//	printf("\n===MENU===\n1.nhap\n2.xuat\n3.xoa X\n4.xuat trong x y\n5.max and min\n6.noi dung muc k\n7.dem muc k\n8.tong am duong \n9.gia tri gan and xa x\n");
//	printf("10.dem so nut cay dùng de quy\n11.dem so nguyen to ,so thinh vuong,so hoan thien\n12. tong node\n13.tong so nguyen to ,so thinh vuong,so hoan thien\n14.xoa cay\n");
//	printf("moi ban nhap lua chon: ");
//}
//void MenuInput() {
//	printf("\n===MENU===\n1.nhap tu mang a\n2.nhap tay\n3.random\n0.out\n");
//	printf("moi ban nhap lua chon: ");
//}
//void MenuOutput() {
//	printf("\n===Menu===\n1.NLR\n2.LNR(theo chieu tang dan)\n3.LRN\n4.NRL\n5.RNL(theo chieu giam dan)\n6.RLN\n7.chieu rong NLR\n8.chieu rong NRL\n");
//	printf("moi ban nhap lua chon: ");
//}
//void MenuShowK() 
//{
//	printf("1. muc k\n2. leaf muc k\n3. node co 1 con muc k\n ");
//	printf("moi ban nhap lua chon: ");
//}
//void NhapTumang(int a[], int n, NODET<int>*& root) {
//	for (int i = 0; i < n; i++)
//	{
//		AddNodeT<int>(root, CreateNodeT<int>(a[i]),Compare);
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
//		AddNodeT<int>(root, CreateNodeT<int>(x),Compare);
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
//		AddNodeT<int>(root, CreateNodeT<int>(x),Compare);
//	}
//}
//void Show(NODET<int>* root) {
//	printf("%d ", root->Data);
//}
//int Compare(int a, int b) {
//	if (a == b)return 0;
//	if (a > b)return 1;
//	if (a < b)return -1;
//}
//void DuyetRong_NLR(BTree<int>tree) {
//	Queue<NODET<int>*>Q;
//	InitQueue(Q);
//	EnQueue<NODET<int>*>(Q, tree.Root);
//	while (!IsEmpty(Q))
//	{
//		NODEQ<NODET<int>*>* p = DeQueue(Q);
//		Show(p->Data);
//		if (p->Data->Left != NULL)EnQueue<NODET<int>*>(Q, p->Data->Left);
//		if (p->Data->Right != NULL)EnQueue<NODET<int>*>(Q, p->Data->Right);
//	}
//}
//void DuyetRong_NRL(BTree<int>tree) {
//	Queue<NODET<int>*>Q;
//	InitQueue(Q);
//	EnQueue<NODET<int>*>(Q, tree.Root); 
//	while (!IsEmpty(Q))
//	{
//		NODEQ<NODET<int>*>* p = DeQueue(Q);
//		Show(p->Data);
//		if (p->Data->Right != NULL)EnQueue<NODET<int>*>(Q, p->Data->Right);
//		if (p->Data->Left != NULL)EnQueue<NODET<int>*>(Q, p->Data->Left);
//	}
//}
//void XuatCompareX(NODET<int>* root, int x,int(*compare)(int,int)) {
//	if (!root)return;
//	if (compare(root->Data,x))Show(root);
//	XuatCompareX(root->Left,x,compare);
//	XuatCompareX(root->Right, x, compare);
//}
//int LonHonX(int a, int b) {
//	if (a > b)return 1;
//	return 0;
//}
//int NhoHonX(int a, int b) {
//	if (a < b)return 1;
//	return 0;
//}
//void trongdoanXY(NODET<int>* root, int x, int y) {
//	if (!root)return;
//	if (root->Data>=x&&root->Data<=y)Show(root);
//	trongdoanXY(root->Left, x, y);
//	trongdoanXY(root->Right, x, y);
//}
//void Min_Tree(NODET<int>* root) {
//	if (root == NULL)return;
//	if (root->Left == NULL)Show(root);
//	Min_Tree(root->Left);
//}
//void Max_Tree(NODET<int>* root) {
//	if (root == NULL)return ;
//	if (root->Right == NULL)Show(root);
//	Max_Tree(root->Right);
//}
//int Check1Child(NODET<int>* root) {
//	if ((root->Left != NULL&&root->Right==NULL) ||( root->Right != NULL&&root->Left==NULL))return 1;
//	return 0; 
//}
//int CheckLeaf(NODET<int>* root) {
//	if ( root->Right != NULL||  root->Left != NULL)return 0;
//	return 1;
//}
//void PrintK(NODET<int>* root,int k){
//	if (!root)return;
//	if (k == 0)Show(root);
//	k--;
//	PrintK(root->Left, k);
//	PrintK(root->Right, k);
//}
//void PrintK_Compare(NODET<int>* root, int k, int (*check)(NODET<int>*)) {
//	if (!root)return;
//	if (k == 0 && check(root))Show(root);
//	--k;
//	PrintK_Compare(root->Left, k, check);
//	PrintK_Compare(root->Right, k, check);
//}
//int CountK(NODET<int>* root, int k) {
//	if (!root)return 0;
//	if (k == 0) return 1;;
//	k--;
//	int left=CountK(root->Left, k);
//	int right=CountK(root->Right, k);
//	return left + right;
//}
//int CountK_Compare(NODET<int>* root, int k, int (*check)(NODET<int>*)) {
//	if (!root)return 0;
//	if (k == 0 && check(root))return 1;
//	--k;
//	int left = CountK_Compare(root->Left, k, check);
//	int right = CountK_Compare(root->Right, k, check);
//	return left + right;
//}
//int Check_Am(int a) {
//	if (a < 0)return 1;
//	return 0;
//}
//int Check_Duong(int a) {
//	if (a > 0)return 1;
//	return 0;
//}
//int SumAmDuong(NODET<int >* root,int(*check)(int)) {
//	if (!root)return 0;
//	int sum = SumAmDuong(root->Left, check)+ SumAmDuong(root->Right, check);
//	return (check(root->Data) == 1) ? root->Data + sum : sum;
//}
//int GiatriGan(NODET<int>* root,int x) {
//	if (!root)return 0;
//	int data = root->Data;
//	int left = GiatriGan(root->Left,x);
//	int right = GiatriGan(root->Right,x);
//	data = (abs(data - x) > abs(left - x)) ? left : data;	
//	data = (abs(data - x) > abs(right - x)) ? right : data;
//	return data;
//}
//int GiatriXa(NODET<int>* root, int x) {
//	if (!root)return 0;
//	int data = root->Data;
//	int left = GiatriXa(root->Left, x);
//	int right = GiatriXa(root->Right, x);
//	data = (abs(data - x) > abs(left - x)) ? data : left;
//	data = (abs(data - x) > abs(right - x)) ? data : right;
//	return data;
//}
//int count_compare(NODET<int>* root, int(*compare)(int)) {
//	if (!root)return 0;
//	int left = count_compare(root->Left,compare);
//	int right = count_compare(root->Right,compare);
//	return compare(root->Data)?1+left + right: left + right;
//}
//int Sngt(int n) {
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)return 0;
//	}
//	return n > 1;
//}
//int HoanThien(int n) {
//	int sum = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (n % i == 0)sum += i;
//	}
//	return (n == sum)?1:0;
//}
//int Thinhvuong(int n) {
//	int sum = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (n % i == 0)sum += i;
//	}
//	return sum > n;
//}
//int Sum(NODET<int >* root) {
//	if (!root)return 0;
//	int sum = Sum(root->Left) + Sum(root->Right);
//	return  root->Data + sum;
//}
//int Sum_compare(NODET<int>* root, int(*compare)(int)) {
//	if (!root)return 0;
//	int left = Sum_compare(root->Left, compare);
//	int right = Sum_compare(root->Right, compare);
//	return compare(root->Data) ? root->Data+left + right : left + right;
//}
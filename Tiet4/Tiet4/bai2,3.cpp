#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"Treenew.h"
#include<Windows.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
struct Phanso
{
	int tu, mau;
};
void MenuChinh();
void MenuInput();
void NhapTumang(int a[], int n, NODET<Phanso>*& root);
void NhapTay(NODET<Phanso>*& root);
void NhapRandom(NODET<Phanso>*& root);
void MenuOutput();
void Show(NODET<Phanso>* root);
int countNodemore1(NODET<Phanso>* root);
int ucln(int a, int b);
void ToiGian(NODET<Phanso>*& root);
int Find_x(NODET<Phanso>* root, Phanso X);
float Min(float a, float b);
float Max(float a, float b);
float Min_Max(NODET<Phanso>* root, float(*temp)(float, float));
float Sum(NODET<Phanso>* root);
int check(int n);
void TuMau(NODET<Phanso>* root);
int countK(NODET<Phanso>* root, int k);
void PrintK(NODET<Phanso>* root, int k);
float SumK(NODET<Phanso>* root, int k);
int main() {
	int choice = -1;
	Tree<Phanso>tree;
	InitTree<Phanso>(tree);
	do
	{
		MenuChinh();
		scanf("%d", &choice);
		switch (choice)
		{
		case 1: {
			int luachon = -1;
			srand(time(0));
			do
			{
				MenuInput();
				scanf("%d", &luachon);
				switch (luachon)
				{
				case 1: {
					int a[10] = { 5,4,3,2,1,4,7,4,2 };
					int n = 9;
					NhapTumang(a, n, tree.Root);
					printf("nhap done");
					_getch();
				}break;
				case 2: {
					NhapTay(tree.Root);
					printf("nhap done");
					_getch();
				}break;
				case 3: {
					NhapRandom(tree.Root);
					printf("nhap done");
					_getch();
				}break;
				default:
					break;
				}
				system("cls");
			} while (luachon != 0);
		}break;

		case 2: {
			
			int luachon = -1;
			do
			{
				
				MenuOutput();
				scanf("%d", &luachon);
				switch (luachon)
				{
				case 1: {
					TraverseNLR<Phanso>(tree.Root, Show);
					_getch();
				}break;
				case 2: {
					traverseLNR<Phanso>(tree.Root, Show);
					_getch();
				}break;
				case 3: {
					traverseLRN<Phanso>(tree.Root, Show);
					_getch();
				}break;

				case 4: {
					traverseNRL<Phanso>(tree.Root, Show);
					_getch();
				}break;
				case 5: {
					traverseRNL<Phanso>(tree.Root, Show);
					_getch();
				}break;
				case 6: {
					traverseRLN<Phanso>(tree.Root, Show);
					_getch();
				}break;
				default:
					break;
				}
				system("cls");
			} while (luachon != 0);
		}break;
		case 3: {
			printf("so luong node trong tree lon hon 1 la: %d", countNodemore1(tree.Root));
			_getch();
		}break;
		case 4: {
			ToiGian(tree.Root);
			printf("toi gian thanh cong");
			_getch();
		}break;
		case 5: {
			Phanso X;
			printf("nhap tu: ");
			scanf("%d", &X.tu);
			printf("nhap mau: ");
			scanf("%d", &X.mau);
			if (Find_x(tree.Root, X))printf("tim thay");
			else printf("ko thay");
			_getch();
		}break;
		case 6: {
			printf("tong phan so la: %.2f", Sum(tree.Root));
			_getch();
		}break;
		case 7: {
			printf("phan so nho nhat la: %.2f", Min_Max(tree.Root, Min));
			_getch();
		}break;
		case 8: {
			printf("phan so lon nhat la: %.2f", Min_Max(tree.Root, Max));
			_getch();
		}break;
		case 9: {
			TuMau(tree.Root);
			_getch();
		}break;
		case 10: {
			int k;
			printf("nhap muc k: ");
			scanf("%d", &k);
			PrintK(tree.Root,k);
			_getch();
		}break;
		case 11: {
			int k;
			printf("nhap muc k: ");
			scanf("%d", &k);
			printf("so luong phan so o muc k la %d", countK(tree.Root, k));
			_getch();
		}break;
		case 12: {
			int k;
			printf("nhap muc k: ");
			scanf("%d", &k);
			printf("tong phan so o muc k la %.2f", SumK(tree.Root, k));
			_getch();
		}break;
		default:
			break;
		}
		system("cls");
	} while (choice!=0);
}
void MenuChinh() {
	printf("\n===MENU===\n1.nhap\n2.xuat\n3.dem node lon hon 1\n4.toi gian phan so\n5.tim cac NODE == x\n");
	printf("6.tong tat ca phan so\n7.phan so nho nhat\n8.phan so lon nhat\n9.tu mau deu la so nguyen to\n");
	printf("10.in cac phan so o muc k\n11.dem cac phan so o muc k\n12.tong cac phan so o muc k\n");
	printf("moi ban nhap lua chon: ");
}
void MenuInput() {
	printf("\n===MENU===\n1.nhap tu mang a\n2.nhap tay\n3.random\n0.out\n");
	printf("moi ban nhap lua chon: ");
}
void MenuOutput() {
	printf("\n===Menu===\n1.NLR\n2.LNR\n3.LRN\n4.NRL\n5.RNL\n6.RLN\n");
	printf("moi ban nhap lua chon: ");
}
void NhapTumang(int a[], int n, NODET<Phanso>*& root) {
	for (int i = 0; i < n; i++)
	{
		Phanso T;
		T.tu = a[i];
		T.mau = 1+rand() % 9;
		AddNodeT<Phanso>(root, CreateNodeT<Phanso>(T));
	}
}
void NhapTay( NODET<Phanso>*& root) {
	int x;
	int n;
	printf("nhap so luong pt: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		Phanso T;
		printf("nhap gia tri tu: ");
		scanf("%d", &T.tu);
		printf("nhap gia tri mau: ");
		scanf("%d", &T.mau);
		AddNodeT<Phanso>(root, CreateNodeT<Phanso>(T));
	}
}
void NhapRandom(NODET<Phanso>*& root) {
	int x;
	int n;
	printf("nhap so luong pt: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{

		Phanso T;
		T.tu = rand() % 20;
		T.mau = 1 + rand() % 9;
		AddNodeT<Phanso>(root, CreateNodeT<Phanso>(T));
	}
}
void Show(NODET<Phanso>* root) {
	printf("%d/%d  ", root->Data.tu,root->Data.mau);
}
int countNodemore1(NODET<Phanso>* root) {
	if (root == NULL)return 0;
	int count = countNodemore1(root->Left) + countNodemore1(root->Right);
	return (root->Data.tu >= root->Data.mau) ? 1 + count :  count;
}
int ucln(int a, int b) {
	if (b == 0)return a;
	return ucln(b, a % b);
}
void ToiGian(NODET<Phanso>*& root) {
	if (!root)return;
	ToiGian(root->Left);
	ToiGian(root->Right);
	int temp = ucln(root->Data.tu, root->Data.mau);
	root->Data.tu /= temp;
	root->Data.mau /= temp;
}
int Find_x(NODET<Phanso>* root,Phanso X) {
	if (!root)return 0;
	Find_x(root->Left,X);
	Find_x(root->Right, X);
	if (root->Data.tu == X.tu&&root->Data.mau==X.mau)return 1;
	return 0;
}
float Min(float a, float b) {
	return a < b ? a : b;
}
float Max(float a, float b) {
	return a > b ? a : b;
}
float Min_Max(NODET<Phanso>* root, float(*temp)(float, float)) {
	if (root->Left==0&&root->Right==0)return (1.0 * root->Data.tu / root->Data.mau) ;
	float maxl = Min_Max(root->Left, temp);
	float maxr = Min_Max(root->Right, temp);
	float thuc = (1.0 * root->Data.tu / root->Data.mau) ;
	return temp(thuc, temp(maxl, maxr));
}
float Sum(NODET<Phanso>* root) {
	if (!root)return 0;
	float maxl = Sum(root->Left);
	float maxr = Sum(root->Right);
	float thuc = (1.0 * root->Data.tu / root->Data.mau) ;
	return thuc+ maxl+ maxr;
}
int check(int n) {
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i==0)return false;
	}
	return n > 1;
}
void TuMau(NODET<Phanso>* root) {
	if (!root)return;
	TuMau(root->Left);
	TuMau(root->Right);
	if (check(root->Data.tu) && check(root->Data.mau))Show(root);
}
void PrintK(NODET<Phanso>* root,int k) {
	if (!root)return;
	if (k == 0)Show(root);
	k--;
	PrintK(root->Left, k);
	PrintK(root->Right, k);
}
int countK(NODET<Phanso>* root, int k) {
	if (!root)return 0;
	if (k == 0)return 1;
	k--;
	int left=countK(root->Left, k);
	int right=countK(root->Right, k);
	return left + right;
}
float SumK(NODET<Phanso>* root, int k) {
	if (!root)return 0;
	if (k == 0)return (1.0 * root->Data.tu / root->Data.mau);
	k--;
	float left = SumK(root->Left, k);
	float right = SumK(root->Right, k);
	return left + right;
}
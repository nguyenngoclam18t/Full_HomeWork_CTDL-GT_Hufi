#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"RedBlackTree.h"
#include<conio.h>
struct PhanSo
{
	int tu, mau;
};
void MenuDuyet();
void Menu();
void showBRTNode2(BRTNode<PhanSo>* p);
int compare(PhanSo a, PhanSo b);
void CreateArrray(BRTree<PhanSo>& tree);
void Deletetree(BRTNode<PhanSo>*& root);
bool Removethan2(BRTree<PhanSo>& tree, BRTNode<PhanSo>*& root);
int checksngt(int n);
bool Removesngt(BRTree<PhanSo>& tree, BRTNode<PhanSo>*& root);
float SumPS(BRTNode<PhanSo>* root);
int CountPS(BRTNode<PhanSo>* root, int k);
int TulessMau(PhanSo a);
void Showcompare(BRTNode<PhanSo>* root, int (*compare)(PhanSo));
int MauhoanThien(PhanSo a);
int CheckSohoanThien(int n);
int TuMauhoanhao(PhanSo a);
int main() {
	BRTree<PhanSo>tree;
	initBRTree(tree);
	int choice = -1;
	do
	{
		Menu();
		scanf("%d", &choice);
		switch (choice)
		{
		case 1: {
			initBRTree(tree);
			CreateArrray(tree);
			printf("them thanh cong");
		}break;
		case 2: {
			if (tree.Root == NULL) {
				printf("cay rong");
				break;
			}
			int luachon = -1;
			do
			{
				MenuDuyet();
				scanf("%d", &luachon);
				switch (luachon)
				{
				case 1: {
					NLR(tree.Root, showBRTNode2);
				}break;
				case 2: {
					NRL(tree.Root, showBRTNode2);
				}break;
				case 3: {
					LNR(tree.Root, showBRTNode2);
				}break;
				case 4: {
					RNL(tree.Root, showBRTNode2);
				}break;
				case 5: {
					LRN(tree.Root, showBRTNode2);
				}break;
				case 6: {
					RLN(tree.Root, showBRTNode2);
				}break;
				case 7: {
					levelOrderL(tree.Root, showBRTNode2);
				}break;
				case 8: {
					levelOrderR(tree.Root, showBRTNode2);
				}break;
				default:
					break;
				}
				_getch();
				system("cls");
			} while (luachon != 0);
		}break;
		case 3: {
			PhanSo temp;
			printf("nhap tu: ");
			scanf("%d", &temp.tu);
			printf("nhap tu: ");
			scanf("%d", &temp.tu);
			insert(tree.Root, temp, compare);
		}break;
		case 4: {
			PhanSo temp;
			printf("nhap tu: ");
			scanf("%d", &temp.tu);
			printf("nhap tu: ");
			scanf("%d", &temp.mau);
			deleteByInfo(tree.Root, temp,compare);
		}break;
		case 5: {
			while (true)
			{
				if (Removethan2(tree, tree.Root) == false)
					break;
			}
		}break;
		case 6: {
			while (true)
			{
				if (Removesngt(tree, tree.Root) == false)
					break;
			}
		}break;
		case 7: {
			printf("tong ps: %.2f", SumPS(tree.Root));
		}break;
		case 8: {
			int k;
			printf("nhap muc k: ");
			scanf("%d", &k);
			printf("co %d phan so o muc k", CountPS(tree.Root, k));
		}break;
		case 9: {
			PhanSo temp;
			printf("nhap tu: ");
			scanf("%d", &temp.tu);
			printf("nhap tu: ");
			scanf("%d", &temp.mau);
			BRTNode<PhanSo>* p = findBRTNode(tree.Root, temp,compare);
			if (p == NULL)
				printf("khong co phan so");
			else
				printf("co phan so");
		}break;
		case 10: {
			printf("phan so tu nho hon mau la: ");
			Showcompare(tree.Root, TulessMau);
		}break;
		case 11: {
			printf("mau so la so chinh phuong: ");
			Showcompare(tree.Root, MauhoanThien);
		}break;
		case 12: {
			printf("tu va mau so la so hoan hao: ");
			Showcompare(tree.Root, TuMauhoanhao);
		}break
		case 13: {
			Deletetree(tree.Root);
			printf("xoa done");
		}break;

		default:
			break;
		}
		_getch();
		system("cls");
	} while (choice!=0);


}
void Menu() {
	printf("\n0.out\n1.tao cay tu mang\n2.duyet cay\n3. them mot nut phan so \n4.xoa 1 phan so\n5.xoa phan so >2\n6.xoa phan so co mau la so nguyen to\n7.tinh tong phan so\n8.dem so luong phan so o muc k\n9.tim phan so p\n");
	printf("10.liet ke ps co tu < mau\n11.liet ke mau so la so chinh pphuong\n12.liet ke tu va mau la so hoan thien\n13.xoa tree\n");
	printf("moi ban nhap lua chon: ");
}
void MenuDuyet() {
	printf("\n1.NLR\n2.NRL\n3.LNR\n4.RNL\n5.LRN\n6.RLN\n7.duyet rong NLR\n8.duyet rong NRL\n0.out\n");
	printf("moi ban nhap lua chon: ");
}
void showBRTNode2(BRTNode<PhanSo>* p)
{
	if (p->Color == RED)
		set_Color(15, 12);	//Light Red=12 (C), BRight White=15 (F)
	else if (p->Color == BLACK)
		set_Color(15, 0);	//Black=0, BRight White=15 (F)
	_cprintf("%d/%d ", p->Info.tu,p->Info.mau);
	set_Color(14, 2);		//Light Yellow=14 (E), Green=2
}
void CreateArrray(BRTree<PhanSo>& tree) {
	int a[11] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int b[11] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int n = 10;
	for (int i = 0; i < n; i++)
	{
		PhanSo temp;
		temp.tu = a[i];
		temp.mau = b[i];
		insert(tree.Root, temp, compare);
	}
}
int compare(PhanSo a, PhanSo b) {
	float A = 1.0 * a.tu / a.mau;
	float B = 1.0 * b.tu / b.mau;
	if (A > B)return 1;
	if (A < B)return -1;
	if (A == B)return 0;
}
void Deletetree(BRTNode<PhanSo>*& root) {
	if (!root)
		return;
	Deletetree(root->Left);
	Deletetree(root->Right);
	delete root;
}
bool Removethan2(BRTree<PhanSo>&tree ,BRTNode<PhanSo>*& root) {
	if (!root)
		return false;
	if ((1.0 * root->Info.tu / root->Info.mau) > 2) {
		deleteByInfo(tree.Root, root->Info, compare);
		return true;
	}
	if (Removethan2(tree, root->Left) || Removethan2(tree, root->Right))
		return true;
}
bool Removesngt(BRTree<PhanSo>& tree, BRTNode<PhanSo>*& root) {
	if (!root)
		return false;
	if (checksngt(root->Info.mau)) {
		deleteByInfo(tree.Root, root->Info, compare);
		return true;
	}
	if (Removethan2(tree, root->Left) || Removethan2(tree, root->Right))
		return true;
}
int checksngt(int n) {
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return n > 1;
}
float SumPS(BRTNode<PhanSo>* root) {
	if (!root)return 0;
	float sum =1.0* root->Info.tu/root->Info.mau;
	return sum + SumPS(root->Left) + SumPS(root->Right);

}
int CountPS(BRTNode<PhanSo>* root,int k) {
	if (!root)return 0;
	int count = 0;
	if (k == 0)
		count++;
	k--;
	return count + CountPS(root->Left,k) + CountPS(root->Right,k);

}
int TulessMau(PhanSo a) {
	return a.tu < a.mau;
}
int MauhoanThien(PhanSo a) {
	int check = sqrt(a.mau);
	return (check * check == a.mau)?true:false;
}
int TuMauhoanhao(PhanSo a) {
	return(CheckSohoanThien(a.tu) && CheckSohoanThien(a.mau));
}
void Showcompare(BRTNode<PhanSo>* root,int (*compare)(PhanSo)) {
	if (!root)
		return;
	if (compare(root->Info))
		showBRTNode2(root);
	Showcompare(root->Left,compare);
	Showcompare(root->Right,compare);
}
int CheckSohoanThien(int n) {
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	return sum == n;
}
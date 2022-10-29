#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"Btree.h"
#include<math.h>
#include<conio.h>
struct PhanSo
{
	int tu, mau;
};
void Menu();
void MenuNhap();
void MenuOutput();
void nhapFile(BTree<PhanSo> &tree);
int compare(PhanSo a, PhanSo b);
void Show(NODET<PhanSo>* temp);
void nhaptay(BTree<PhanSo>& tree);
PhanSo CreatePhanSo();
bool FindX(NODET<PhanSo>* root, PhanSo temp);
int CheckSngt(int n);
bool Remove_DK(BTree<PhanSo>&tree, NODET<PhanSo>* root, int(*check)(int));
double Convert(PhanSo temp);
double Sum(NODET<PhanSo>* root);
double Max(NODET<PhanSo>* root);
double Min(NODET<PhanSo>* root);
void Check(NODET<PhanSo>* temp);
void Checktu(NODET<PhanSo>* temp);
bool Remove_DK_2(BTree<PhanSo>& tree, NODET<PhanSo>* root, int(*check)(int));
double Sum_K(NODET<PhanSo>* root, int k);
int Count_K(NODET<PhanSo>* root, int k);
void Print_K(NODET<PhanSo>* root, int k);
int CountTuMau(NODET<PhanSo>* root, int(*check)(int));
int main() {
	BTree<PhanSo>tree;
	InitTree<PhanSo>(tree);
	int choice = -1;
	do
	{
		Menu();

		scanf("%d", &choice);
		switch (choice)
		{
		case 1: {
			int luachon = -1;
			do
			{
				MenuNhap();
				scanf("%d", &luachon);
				switch (luachon)
				{
				case 1: {
					nhaptay(tree);
				}break;
				case 2: {
					nhapFile(tree);
				}break;
				default:
					break;
				}
			} while (luachon!=0);
			
		}break;
		case 2: {
			int luachon=-1;
			do
			{
				MenuOutput();
				scanf("%d", &luachon);
				switch (luachon)
				{
				case 1: {
					TraverseNLR<PhanSo>(tree.Root, Show);
				}break;
				case 2: {
					traverseLNR<PhanSo>(tree.Root, Show);
				}break;
				case 3: {
					traverseLRN<PhanSo>(tree.Root, Show);
				}break;

				case 4: {
					traverseNRL<PhanSo>(tree.Root, Show);
				}break;
				case 5: {
					traverseRNL<PhanSo>(tree.Root, Show);
					
				}break;
				case 6: {
					traverseRLN<PhanSo>(tree.Root, Show);
				
				}break;
				
				default:
					break;
				}
				
			} while (luachon!=0);
			
		}break;
		case 3: {
			AddNodeT<PhanSo>(tree.Root, CreateNodeT<PhanSo>(CreatePhanSo()), compare);
			printf("add thanh cong");
		}break;
		case 4: {
			PhanSo temp = CreatePhanSo();
			if (FindX(tree.Root, temp) == false)
				printf("khong thay");
		}break;
		case 5: {
			PhanSo temp = CreatePhanSo();
			
			if (Remove_X<PhanSo>(tree.Root, temp, compare))
				printf("xoa thanh cong");
			else printf("xoa khong thanh cong");
		}break;
		case 6: {
			PhanSo temp;
			temp.tu = 2;
			temp.mau = 1;
			while (true)
			{
				if (Remove_X<PhanSo>(tree.Root, temp, compare) == false)
					break;	
			}
			printf("xoa thanh cong");
		}break;
		case 7: {
			while (true)
			{
				if (Remove_DK(tree, tree.Root, CheckSngt) == false)
					break;
			}
			printf("xoa thanh cong");

		}break;
		case 8: {
			printf("tong phan so trong cay la: %lf\n", Sum(tree.Root));
		}break;
		case 9: {
			printf("phan so min co gia tri la: %lf", Min(tree.Root));
			
		}break;
		case 10: {
			printf("phan so max co gia tri la: %lf", Max(tree.Root));
		}break;
		case 11: {
			printf("tu lon hon mau: ");
			TraverseNLR(tree.Root, Check);
		}break;
		case 12: {
			printf("tu nho hon mau: ");
			TraverseNLR(tree.Root, Checktu);
		}break;
		case 13: {
			while (true)
			{
				if (Remove_DK_2(tree, tree.Root, CheckSngt) == false)
					break;
			}
			printf("xoa thanh cong");
		}break;
		case 14: {
			int k;
			printf("nhap muc k: ");
			scanf("%d", &k);
			Print_K(tree.Root, k);
		}break;
		case 15: {
			int k;
			printf("nhap muc k: ");
			scanf("%d", &k);
			printf("co %d phan so o muc %d", Count_K(tree.Root, k), k);
		}break;
		case 16: {
			int k;
			printf("nhap muc k: ");
			scanf("%d", &k);
			printf("tong %lf  o muc %d", Sum_K(tree.Root, k), k);
		}break;
		case 17: {
			printf(" co %d phan so tu va mau la so nguyen to", CountTuMau(tree.Root, CheckSngt));
		}break;
		case 18: {
			DeleteTree<PhanSo>(tree.Root);
		}break;
		default:
			break;
		}
		_getch();
		system("cls");
	} while (choice!=0);
}
void MenuNhap() {
	printf("\n1.nhap tay\n2.nhap file\n0.out\n");
	printf("moi ban nhap lua chon: ");
}
void Menu() {
	printf("\n\tMenu\n1.Create Tree\n2.duyet cay\n3.add 1 node\n4.Find x\n5.remove x\n6.remove >2\n7. remove mau so la so nguyen to\n8.sum\n");
	printf("9.min phan so\n10.max phan so\n11.liet ke cac phan co tu lon hon mau\n12.liet ke cac phan co tu nho hon mau\n13.tu va mau la so nguyen to\n14.liet ke phan so o muc k\n");
	printf("15.dem phan so o muc k\n16.tong phan so o muc k\n17.dem tu va mau deu la so nguyen to\n 18.delete  tree\n0.out\n");
	printf("moi ban nhap: ");
}
void MenuOutput() {
	printf("\n===Menu===\n1.NLR\n2.LNR(theo chieu tang dan)\n3.LRN\n4.NRL\n5.RNL(theo chieu giam dan)\n6.RLN\n");
	printf("moi ban nhap lua chon: ");
}
void Show(NODET<PhanSo>* temp) {
	printf("%d/%d \t", temp->Data.tu, temp->Data.mau);
}
int compare(PhanSo a, PhanSo b) {
	float A = 1.0 * a.tu / a.mau, B = 1.0 * b.tu / b.mau;
	if (A > B)return 1;
	if (A < B)return -1;
	return 0;
}
void nhapFile(BTree<PhanSo> &tree) {
	FILE* l = fopen("Phanso.txt", "r");
	int n;
	fscanf(l, "%d\n", &n);
	char c;
	for (int i = 0; i < n; i++)
	{
		PhanSo temp;
		fscanf(l, "%d", &temp.tu);
		fscanf(l, "%d", &temp.mau);
		fscanf(l, "%c", &c);
		AddNodeT<PhanSo>(tree.Root, CreateNodeT(temp), compare);
	}
	printf("add thanh cong");
}
void nhaptay(BTree<PhanSo>& tree) {
	int n;
	printf("nhap so luong muon them: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("\nphan so %d\n", i);
		AddNodeT<PhanSo>(tree.Root, CreateNodeT(CreatePhanSo()), compare);
	}
	printf("add thanh cong");
}
PhanSo CreatePhanSo() {
	PhanSo temp;
	printf("nhap tu: ");
	scanf("%d", &temp.tu);
	printf("nhap mau: ");
	scanf("%d", &temp.mau);
	return temp;
}
bool FindX(NODET<PhanSo>*root,PhanSo temp) {
	if (!root)
		return false;
	if (compare(root->Data, temp) == 0) {
		Show(root);
		return true;
	}
	FindX(root->Left,temp);
	FindX(root->Right, temp);
}
bool Remove_DK(BTree<PhanSo>&tree,NODET<PhanSo>* root,int(*check)(int)) {
	if (!root)
		return false;
	if (check(root->Data.mau)) {
		Remove_X<PhanSo>(tree.Root, root->Data, compare);
		return true;
	}
	if (Remove_DK(tree, root->Left, check) || Remove_DK(tree, root->Right, check))
		return true;
}
bool Remove_DK_2(BTree<PhanSo>& tree, NODET<PhanSo>* root, int(*check)(int)) {
	if (!root)
		return false;
	if (check(root->Data.mau)&&check(root->Data.tu)) {
		Remove_X<PhanSo>(tree.Root, root->Data, compare);
		return true;
	}
	if (Remove_DK(tree, root->Left, check) || Remove_DK(tree, root->Right, check))
		return true;
}
double Convert(PhanSo temp) {
	return (double)temp.tu / temp.mau;
}
double Sum(NODET<PhanSo>* root) {
	if (!root)
		return 0;
	double sum = Sum(root->Left) + Sum(root->Right);
	return Convert(root->Data)+ sum;

}
double Max(NODET<PhanSo>*root) {
	if (!root)
		return 0;
	double max = Max(root->Left) > Max(root->Right) ? Max(root->Left) : Max(root->Right);
	return Convert(root->Data) > max ? Convert(root->Data) : max;
}
double Min(NODET<PhanSo>* root) {
	if (!root)
		return INT_MAX;
	double max = Min(root->Left) < Min(root->Right) ? Min(root->Left) : Min(root->Right);
	return Convert(root->Data) < max ? Convert(root->Data) : max;
}
int CheckSngt(int n) {
	for (int i = 2; i <=sqrt(n) ; i++)
	{
		if (n % i == 0)
			return false;
	}
	return n > 1;
}
void Check(NODET<PhanSo>* temp) {
	if (temp->Data.tu > temp->Data.mau)
		Show(temp);
}
void Checktu(NODET<PhanSo>* temp) {
	if (temp->Data.tu < temp->Data.mau)
		Show(temp);
}
void Print_K(NODET<PhanSo>* root, int k) {
	if (!root) return;
	if (k == 0)
		Show(root);
	--k;
	Print_K(root->Left, k);
	Print_K(root->Right, k);
}

int Count_K(NODET<PhanSo>* root, int k) {
	if (!root) return 0;
	if (k == 0)
		return 1;
	--k;
	return  Count_K(root->Left, k)+ Count_K(root->Right, k);
}
double Sum_K(NODET<PhanSo>* root, int k) {
	if (!root) return 0;
	if (k==0)
		return Convert(root->Data);
	--k;
	return  Sum_K(root->Left, k) + Sum_K(root->Right, k);
}
int CountTuMau( NODET<PhanSo>* root, int(*check)(int)) {
	if (!root)
		return 0;
	int sum = 0;
	if (check(root->Data.mau) && check(root->Data.tu)) {
		sum += 1;
	}
	sum+= CountTuMau(root->Left, check) + CountTuMau(root->Right, check);
	return sum;
}
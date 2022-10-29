//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//#include<conio.h>
//#include<Windows.h>
//struct SNODE
//{
//	int tu, mau;
//	SNODE* next;
//};
//struct SList
//{
//	SNODE* head;
//	SNODE* tail;
//};
//SNODE* Create_NODE(int tu, int mau);
//void Create_list(SList& l);
//int Add_Tail(SList& l, SNODE* p);
//void Print(SList l);
//void Menu();
//int UCLN(int a, int b);
//void ToiGian(SList& l);
//float Tich(SList l);
//float Sum(SList l);
//void Print_morethan1(SList l);
//void Tang1(SList& l);
//SNODE* FindP(SList l, int tu, int mau);
//int main() {
//	SList l;
//	Create_list(l);
//	int choice = -1;
//	do
//	{
//		system("cls");
//		Menu();
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1: {
//			int n, tu, mau;
//			printf("nhap so luong: ");
//			scanf("%d", &n);
//			for (int i = 0; i < n; i++)
//			{
//				printf("nhap tu: ");
//				scanf("%d", &tu);
//				printf("nhap mau: ");
//				scanf("%d", &mau);
//				if (Add_Tail(l, Create_NODE(tu, mau)))printf("Add thanh cong\n");
//				else printf("Add ko thanh cong\n");
//				
//			}
//			_getch();
//		}break;
//		case 2:Print(l); _getch();
//			break;
//		case 3: {
//			ToiGian(l);
//			printf("Toi gian thanh cong\n");
//			_getch();
//		}
//		case 4:printf("Tong cac phan so la: %.2f", Sum(l));
//			_getch();
//			break;
//		case 5:
//			printf("Tich cac phan so la: %.2f", Tich(l));
//			 _getch();
//			break;
//		case 6:Print_morethan1(l);
//			_getch();
//			break;
//		case 7: {
//			Tang1(l);
//			printf("tang thanh cong");
//			_getch();
//			break;
//		}
//		case 8: {
//			int n, tu, mau;
//			printf("nhap tu: ");
//			scanf("%d", &tu);
//			printf("nhap mau: ");
//			scanf("%d", &mau);
//			if (FindP(l, tu, mau) == NULL)printf("ko co va tra ve NULL");
//			else printf("co phan so P");
//			_getch();
//			break;
//		}
//		default:
//			break;
//		}
//
//	} while (choice!=0);
//}
//void Menu() {
//	printf("\n1.nhap n phan so \n2.in danh sach\n3.toi gian\n4.tong cac phan so\n5.tich cac phan so\n6.xuat cac so lon hon 1\n");
//	printf("7.tang 1 lên cac phan so\n8.viet ham trâ ve phan so p\n");
//	printf("moi nhap lua chon cua ban: ");
//}
//void Create_list(SList& l) {
//	l.head = NULL;
//	l.tail = NULL;
//}
//SNODE* Create_NODE(int tu , int mau) {
//	SNODE* P = new SNODE;
//	P->tu = tu;
//	P->mau = mau;
//	P->next = NULL;
//	return P;
//}
//int Add_Tail(SList& l, SNODE* p) {
//	if (p == NULL)return 0;//p trong thi ko add dc
//	if (l.head == NULL) //dau trong thi gan thang
//	{
//		l.head = p;
//		l.tail = p;
//		return 1;
//	}
//	else {
//		//gan nhu bth
//		l.tail->next = p;
//		l.tail = p;
//		return 1;
//	}
//}
//void Print(SList l) {
//	for (SNODE* i = l.head; i !=NULL ; i=i->next)
//	{
//		printf("%d/%d  ", i->tu, i->mau);
//	}
//}
//int UCLN(int a, int b) {
//	if (b == 0)return a;
//	return UCLN(b, a % b);
//}
//void ToiGian(SList& l) {
//	for (SNODE* i = l.head; i !=NULL ; i=i->next)
//	{
//		int k = UCLN(i->tu, i->mau);
//		i->tu /= k;
//		i->mau /= k;
//	}
//}
//float Sum(SList l) {
//	float temp, sum = 0;
//	int le;
//	for (SNODE* i = l.head; i != NULL; i = i->next)
//	{
//		le = i->tu % i->mau;
//		temp = (i->tu / i->mau) + ((1.0*le) / i->mau);
//		sum += temp;
//	}
//	return sum;
//
//}
//float Tich(SList l) {
//	float temp, Tich = 0;
//	int le;
//	for (SNODE* i = l.head; i != NULL; i = i->next)
//	{
//		le = i->tu % i->mau;
//		temp = (i->tu / i->mau) + ((1.0 *  le) / i->mau);
//		Tich *= temp;
//	}
//	return Tich;
//}
//void Print_morethan1(SList l) {
//	float temp;
//	for (SNODE* i = l.head; i != NULL; i = i->next)
//	{
//		temp = (i->tu / i->mau) ;
//		if(temp>=1)printf("%d/%d  ", i->tu, i->mau);
//	}
//}
//void Tang1(SList& l) {
//	for (SNODE* i = l.head; i != NULL; i = i->next)
//	{
//		i->tu += i->mau;
//	}
//}
//SNODE* FindP(SList l,int tu,int mau) {
//	SNODE* P = new SNODE;
//	for (SNODE* i = l.head; i != NULL; i = i->next)
//	{
//		if (i->tu == tu && i->mau == mau) {
//			P = i;
//				return P;
//		}
//	}
//	return NULL;
//}
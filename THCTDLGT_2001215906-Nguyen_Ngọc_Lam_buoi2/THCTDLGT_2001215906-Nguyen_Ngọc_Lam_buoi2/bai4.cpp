///*==========================================================================
//* -Họ và Tên:Nguyễn Ngọc Lâm
//* -MSSV:2001215906
//* -lớp:12DHTH12
//* -tiết/buổi: 1-5/thứ 4
//==========================================================================*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<Windows.h>
//#include<conio.h>
//#include<string.h>
//#include<math.h>
//struct Dathuc
//{
//	int giatri, mu;
//};
//struct SNODE
//{
//	Dathuc Data;
//	SNODE* next;
//};
//struct SList
//{
//	SNODE* head;
//	SNODE* tail;
//};
//int Add_Head(SList& l, SNODE* p);
//int Add_Tail(SList& l, SNODE* p);
//SNODE* Create_Node(int giatri, int mu);
//void Create_List(SList& l);
//void Menu();
//void Print(SList l);
//void Sort_giam(SList& l);
//void RutGon(SList& l);
//int Remove_Head(SList& l);
//int Remove_Tail(SList& l);
//int Remove_Node(SList& l, int x);
//void Add_Van_Giu_Nguyen(SList& l);
//void Tinhtoan(SList l);
//int main() {
//	SList l;
//	Create_List(l);
//	int choice = -1;
//	do
//	{
//		Menu();
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1: {
//			int giatri, mu;
//			printf("nhap gia tri: ");
//			scanf("%d", &giatri);
//			printf("nhap mu: ");
//			scanf("%d", &mu);
//			if (Add_Tail(l, Create_Node(giatri, mu)))printf("them thanh cong");
//			else printf("them ko thanh cong ");	
//			_getch();
//		}break;
//		case 2: {
//			Print(l);
//			_getch();
//		}break;
//		case 3: {
//			Sort_giam(l);
//			printf("Sort thanh cong");
//			_getch();
//		}break;
//		case 4: {
//			RutGon(l);
//			printf("Rut Gon thanh cong");
//			_getch();
//		}break;
//		case 5: {
//			Sort_giam(l);
//			int mu;
//			printf("nhap mu: ");
//			scanf("%d", &mu);
//			if (Remove_Node(l, mu))printf("xoa thanh cong");
//			else printf("xoa khong thanh cong");
//			_getch();
//		}break;
//		case 6: {
//			Tinhtoan(l);
//			_getch();
//		}break;
//		case 7: {
//			Add_Van_Giu_Nguyen(l);
//			_getch();
//		}break;
//		default:
//			break;
//		}
//		system("cls");
//	} while (choice!=0);
//}
//void Menu() {
//	printf("=====Menu====");
//	printf("\n1.them phan tu\n2.in ra danh sach\n3.sap xep theo bac mu\n4.rut gon da thuc\n5.xoa 1 da thuc khi biet bac\n6.tinh gia tri khi biet x\n7.them 1 da thuc ma van giu nguyen thu tu bac\n");
//	printf("nhap lua chon cua ban: ");
//}
//int Add_Head(SList& l, SNODE* p) {
//	if (p == NULL)return 0;//p trong thi ko add dc
//	if (l.head == NULL) //dau trong thi gan thang
//	{
//		l.head = p;
//		l.tail = p;
//		return 1;
//	}
//	else {
//		//gan nhu bth
//		p->next = l.head;
//		l.head = p;
//		return 1;
//	}
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
//void Create_List(SList& l)
//{
//	l.head = NULL;
//	l.tail = NULL;
//}
//SNODE* Create_Node(int giatri,int mu)
//{
//	SNODE* temp = new SNODE;
//	temp->Data.giatri = giatri;
//	temp->Data.mu = mu;
//	temp->next = NULL;
//	return temp;
//}
//void Print(SList l) {
//	
//	printf("%d*X^%d ",l.head->Data.giatri,l.head->Data.mu);
//	for (SNODE* i = l.head->next; i != NULL; i=i->next)
//	{
//		printf(" + ");
//		printf("%d*X^%d ", i->Data.giatri,i->Data.mu);
//	}
//}
//void Sort_giam(SList& l) {
//
//	if (l.head == NULL)return;
//	for (SNODE* i = l.head; i != NULL; i = i->next)
//	{
//		for (SNODE* j = i->next; j != NULL; j=j->next)
//		{
//			if (i->Data.mu < j->Data.mu) {
//				SNODE* temp = new SNODE;
//				temp->Data = i->Data;
//				i->Data = j->Data;
//				j->Data = temp->Data;
//			}
//		}
//	}
//}
//void RutGon(SList& l) {
//	SNODE* Parent = new SNODE;
//	for (SNODE* i = l.head; i != NULL; i = i->next)
//	{
//		Parent = i;
//		for (SNODE* j = i->next; j != NULL; j = j->next)
//		{
//			if (i->Data.mu == j->Data.mu) {
//				i->Data.giatri += j->Data.giatri;
//				Parent->next = j->next;
//			}
//			else
//			{
//				Parent = j;
//			}
//		}
//	}
//}
//
//int Remove_Head(SList& l)
//{
//	if (l.head == NULL) //list trong
//	{
//		return 0;
//	}
//	else {
//		SNODE* p = l.head;
//		l.head = p->next;
//		delete p;
//		return 1;
//	}
//}
//int Remove_Tail(SList& l)
//{
//	if (l.head == NULL) //list trong
//	{
//		return 0;
//	}
//	else {
//		SNODE* p = l.head;
//		//cho chay den vi tri gan cuoi cua list
//		for (; p != NULL; p = p->next)
//		{
//			if (p->next->next==NULL)break;
//		}
//		delete p->next;
//		p->next = NULL;
//		return 1;
//	}
//}
//int Remove_Node(SList& l, int x)
//{
//	if (l.head == NULL) //list trong
//	{
//		return 0;
//	}
//	else {
//
//
//		SNODE* child = l.head, * Parent = child;
//		for (; child != NULL; child = child->next)
//		{
//			if (child->Data.mu == x)break;
//			Parent = child;
//		}
//		//xu ly 2 truong hop roi vao head va tail
//		if (child->Data.mu == l.head->Data.mu) {
//			Remove_Head(l);
//			return 1;
//		}
//		else if (child->Data.mu == l.tail->Data.mu) {
//			Remove_Tail(l);
//			return 1;
//		}
//		Parent->next = child->next;
//		child->next = NULL;
//		delete child;
//		return 1;
//	}
//}
//void Add_Van_Giu_Nguyen(SList& l) {
//	Sort_giam(l);
//	int giatri, mu;
//	printf("nhap gia tri: ");
//	scanf("%d", &giatri);
//	printf("nhap mu: ");
//	scanf("%d", &mu);
//	for (SNODE* i = l.head; i !=NULL ; i=i->next)
//	{
//		if (i->next == NULL)Add_Tail(l, Create_Node(giatri, mu));
//		else
//		{
//			if (i->Data.mu >= mu && i->next->Data.mu <= mu) {
//				SNODE* temp = Create_Node(giatri, mu);
//				temp->next = i->next;
//				i->next = temp;
//				break;
//			}
//		
//		}
//	}
//	printf("them thanh cong");
//}
//void Tinhtoan(SList l) {
//	int x;
//	printf("nhap x: ");
//	scanf("%d", &x);
//	int sum = 0;
//	for (SNODE* i = l.head; i != NULL; i = i->next)
//	{
//		sum += i->Data.giatri * pow(x, i->Data.mu);
//	}
//	printf("gia tri da thuc la %d ", sum);
//}
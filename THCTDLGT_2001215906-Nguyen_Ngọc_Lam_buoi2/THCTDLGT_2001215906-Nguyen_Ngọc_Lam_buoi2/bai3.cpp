/*==========================================================================
* -Họ và Tên:Nguyễn Ngọc Lâm
* -MSSV:2001215906
* -lớp:12DHTH12
* -tiết/buổi: 1-5/thứ 4
==========================================================================*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#include<conio.h>
#include<string.h>
#include<math.h>
struct KetQua
{
	char Ma_mon[20], Ten_Mon[25];
	int tinchi;
	float DTL, DCK, DMH;
};
struct KQNODE
{
	KetQua Data;
	KQNODE* next;
};
struct KQList
{
	KQNODE* head;
	KQNODE* tail;
};
//
struct SinhVien
{
	char mssv[20], ho_dem[25], ten[10];
	int namsinh;
	KQList KQ;
};
struct SNODE
{
	SinhVien Data;
	SNODE* next;
};
struct SList
{
	SNODE* head;
	SNODE* tail;
};
void Create_KQlist(KQList& l);
void Create_Slist(SList& l);
int ReadKQList(KQList& kq, FILE* L);
SNODE* ReadSlist(SList& l, char MSSV[], FILE* L);
int Add_Head(SList& l, SNODE* p);
int Add_Tail(SList& l, SNODE* p);
int Add_Tail_KQ(KQList& kq, KQNODE* P);
void Input_File(SList& l);
void Print_Slist(SList l);
void Print_KQList(KQList kq);
void Menu();
void Print_MSSV_X(SList l);
void Print_Name_X(SList l);
void Print_1_Slist(SNODE* i);
void Sort_NAME(SList& l);
void Sort_MSSV(SList& l);
int Remove_Node_Name(SList& l, char String[]);
int Remove_Node_MSSV(SList& l, char String[]);
int Remove_Head(SList& l, char String[]);
int Remove_Tail(SList& l, char String[]);
float calculator_score(KQList l);
void create_NewList(SList l, SList& New);
void Print_Kha(SList l);
void Max_score(SList l);
void Min_score(SList l);
void gan_x(SList l, float x);
void Min_gioi(SList l);
int main() {
	SList l;
	Create_Slist(l);

	int choice = -1;
	do
	{
		Menu();
		scanf("%d", &choice);
		switch (choice)
		{
		case 1: {
			Input_File(l);
			printf("nhap thanh cong");
			_getch();
			break;
		}
		case 2: {
			Print_Slist(l);
			_getch();
			break;
		}
		case 3: {
			Print_MSSV_X(l);
			_getch();
			break;
		}
		case 4: {
			Print_Name_X(l);
			_getch();
			break;
		}
		case 5: {
			Sort_MSSV(l);
			printf("sort thanh cong");
			_getch();
			break;
		}
		case 6: {
			Sort_NAME(l);
			printf("sort thanh cong");
			_getch();
			break;
		}
		case 8: {
			char Name[20];
			printf("nhap mssv x: ");
			rewind(stdin);
			gets_s(Name);
			if (Remove_Node_MSSV(l, Name))printf("xoa done");
			else printf("xoa ko thanh cong");
			_getch();
			break;
		}
		case 9: {
			char Name[20];
			printf("nhap mssv x: ");
			rewind(stdin);
			gets_s(Name);
			if (Remove_Node_Name(l, Name))printf("xoa done");
			else printf("xoa ko thanh cong");
			_getch();
			break;
		}
		case 10: {
			SList New;
			Create_Slist(New);
			create_NewList(l, New);
			printf("chuyen qua thanh cong\nlist moi la:\n");
			Print_Slist(New);
			_getch();
			break;
		}
		case 11: {
			Print_Kha(l);
			_getch();
			break;
		}
		case 12: {
			Max_score(l);
			_getch();
			break;
		}
		case 13: {
			Min_score(l);
			_getch();
			break;
		}
		case 14: {
			Min_gioi(l);
			_getch();
			break;
		}
		case 15: {
			printf("nhap x: ");
			float x;
			scanf("%f", &x);
			gan_x(l, x);
			_getch();
			break;
		}
		default:
			break;
		}
		system("cls");
	} while (choice!=0);
	return 0;
}
void Menu() {
	printf("=============Menu=====================");
	printf("\n1.nhap tu file\n2.in ra thong tin\n3.in sinh vien co ma x \n4.in sinh vien co ten x\n5.sort tang dan theo ma\n6.sort tang dan theo ten\n");
	printf("7.them 1 sinh vien van giu nguyen thu tu tang dan\n8.xoa sinh vien co mssv x\n9.xoa sinh vien co ten x\n10.tao danh sach moi va diem giam dan \n");
	printf("11.in ds sinh vien loai kha\n12.sinh vien co diem cao\n13.sinh vien co diem thap nhat\n14.diem thap nhat trong loai gioi\n15.cho biet sinh vien co diem gan x nhat\n");
	printf("moi nhap lua chon cua ban: ");
}
//
void Create_Slist(SList& l) {
	l.head = NULL;
	l.tail = NULL;
}
void Create_KQlist(KQList& l) {
	l.head = NULL;
	l.tail = NULL;
}
void Input_File(SList& l) {
	FILE* L = fopen("bai3.txt", "r");
	char MSSV[20];
	while (fscanf(L,"%[^#]s",MSSV)!=EOF)
	{
		Add_Tail(l,ReadSlist(l,MSSV,L));
	}
	fclose(L);
}
SNODE*ReadSlist(SList& l, char MSSV[],FILE*L) {
	char c;
	SNODE* p = new SNODE;
	p->next = NULL;
	fscanf(L,"%c", &c);
	strcpy(p->Data.mssv, MSSV);
	fscanf(L, "%[^#]s", p->Data.ho_dem);
	fscanf(L,"%c", &c);
	fscanf(L, "%[^#]s", p->Data.ten);
	fscanf(L,"%c", &c);
	fscanf(L, "%d", &p->Data.namsinh);
	Create_KQlist(p->Data.KQ);
	while (ReadKQList(p->Data.KQ, L));
	return p;
}
int ReadKQList(KQList& kq, FILE* L) {
	char c;
	KQNODE* P = new KQNODE;
	P->next = NULL;
	fscanf(L, "%c", &c);
	if (c== '\n')return 0;
	fscanf(L, "%[^#]s",P->Data.Ma_mon);
	fscanf(L, "%c", &c);
	fscanf(L, "%[^#]s", P->Data.Ten_Mon);
	fscanf(L, "%c", &c);
	fscanf(L, "%d", &P->Data.tinchi);
	fscanf(L, "%c", &c);
	fscanf(L, "%f", &P->Data.DTL);
	fscanf(L, "%c", &c);
	fscanf(L, "%f", &P->Data.DCK);
	P->Data.DMH = P->Data.DTL * 0.3 + P->Data.DTL * 0.7;
	Add_Tail_KQ(kq, P);
	return 1;
}
int Add_Head(SList& l, SNODE* p) {
	if (p == NULL)return 0;//p trong thi ko add dc
	if (l.head == NULL) //dau trong thi gan thang
	{
		l.head = p;
		l.tail = p;
		return 1;
	}
	else {
		//gan nhu bth
		p->next = l.head;
		l.head = p;
		return 1;
	}
}
int Add_Tail(SList& l, SNODE* p) {
	if (p == NULL)return 0;//p trong thi ko add dc
	if (l.head == NULL) //dau trong thi gan thang
	{
		l.head = p;
		l.tail = p;
		return 1;
	}
	else {
		//gan nhu bth
		l.tail->next = p;
		l.tail = p;
		return 1;
	}
}
int Add_Tail_KQ(KQList& kq, KQNODE*P) {
	if (P == NULL)return 0;//p trong thi ko add dc
	if (kq.head == NULL) //dau trong thi gan thang
	{
		kq.head = P;
		kq.tail = P;
		return 1;
	}
	else {
		//gan nhu bth
		kq.tail->next = P;
		kq.tail = P;
		return 1;
	}
}
//
void Print_1_Slist(SNODE* i) {
	printf("%-20s %-20s %-20s %-10s\n", "MA SINH VIEN", "HO DEM", "TEN SINH VIEN", "NAM SINH");
	printf("%-20s %-20s %-20s %-10d\n", i->Data.mssv, i->Data.ho_dem, i->Data.ten, i->Data.namsinh);
}
void Print_Slist(SList l) {

	for (SNODE* i = l.head; i !=NULL ; i=i->next)
	{
		Print_1_Slist(i);
		printf("====================================================================================================\n");
		Print_KQList(i->Data.KQ);
		printf("====================================================================================================\n");
	}
}
void Print_KQList(KQList kq) {
	printf("%-20s %-20s %-10s %-10s %-10s %-10s\n", "MA MON", "TEN MON", "TIN CHI", "TIEU LUAN", "CUOI KI", "TONG MON HOC");
	for (KQNODE* i = kq.head; i != NULL ; i=i->next)
	{
		printf("%-20s %-20s %-10d %-10.2f %-10.2f %-10.2f\n", i->Data.Ma_mon, i->Data.Ten_Mon, i->Data.tinchi, i->Data.DTL, i->Data.DCK, i->Data.DMH);
	}
}
void Print_MSSV_X(SList l) {
	char MSSV[20];
	printf("nhap MSSV: ");
	rewind(stdin);
	gets_s(MSSV);
	int flag = 1;
	for (SNODE* i = l.head; i !=NULL ; i=i->next)
	{
		if (_strcmpi(i->Data.mssv, MSSV) == 0) {
			Print_1_Slist(i);
			flag = 0;
		}
			
	}
	if (flag)printf("ko thay sinh vien X");
}
void Print_Name_X(SList l) {
	char NAME[20];
	printf("nhap ten: ");
	rewind(stdin);
	gets_s(NAME);
	int flag = 1;
	for (SNODE* i = l.head; i != NULL; i = i->next)
	{
		if (_strcmpi(i->Data.ten, NAME) == 0) {
			Print_1_Slist(i);
			flag = 0;
		}
	}
	if (flag)printf("ko thay sinh vien X");
}
void Sort_MSSV(SList& l) {
	for (SNODE* i = l.head; i !=NULL ; i=i->next)
	{
		for (SNODE* j = i->next; j !=NULL ; j=j->next)
		{
			if (_strcmpi(i->Data.mssv, j->Data.mssv) > 0) {
				SNODE* temp = new SNODE;
				temp->Data = i->Data;
				i->Data = j->Data;
				j->Data = temp->Data;
			}
		}
	}
}
void Sort_NAME(SList& l) {
	for (SNODE* i = l.head; i != NULL; i = i->next)
	{
		for (SNODE* j = i->next; j != NULL; j = j->next)
		{
			if (_strcmpi(i->Data.ten, j->Data.ten) > 0) {
				SNODE* temp = new SNODE;
				temp->Data = i->Data;
				i->Data = j->Data;
				j->Data = temp->Data;
			}
		}
	}
}

int Remove_Head(SList& l)
{
	if (l.head == NULL) //list trong
	{
		return 0;
	}
	else {
		SNODE* p = l.head;
		l.head = p->next;
		delete p;
		return 1;
	}
}
int Remove_Tail(SList& l)
{
	if (l.head == NULL) //list trong
	{
		return 0;
	}
	else {
		SNODE* p = l.head;
		//cho chay den vi tri gan cuoi cua list
		for (; p != NULL; p = p->next)
		{
			if (_strcmpi(p->next->Data.mssv,l.tail->Data.mssv)==0)break;
		}
		delete p->next;
		p->next = NULL;
		return 1;
	}
}
int Remove_Node_MSSV(SList& l, char String[])
{
	if (l.head == NULL) //list trong
	{
		return 0;
	}
	else {


		SNODE* child = l.head, * Parent = child;
		for (; child != NULL; child = child->next)
		{
			if (_strcmpi(child->Data.mssv,String)==0)break;
			Parent = child;
		}
		//xu ly 2 truong hop roi vao head va tail
		if (_strcmpi(child->Data.mssv, l.head->Data.mssv) == 0) {
			Remove_Head(l);
			return 1;
		}
		else if (_strcmpi(child->Data.mssv, l.tail->Data.mssv) == 0) {
			Remove_Tail(l);
			return 1;
		}
		Parent->next = child->next;
		child->next = NULL;
		delete child;
		return 1;
	}
}
int Remove_Node_Name(SList& l, char String[])
{
	if (l.head == NULL) //list trong
	{
		return 0;
	}
	else {


		SNODE* child = l.head, * Parent = child;
		for (; child != NULL; child = child->next)
		{
			if (_strcmpi(child->Data.ten, String) == 0)break;
			Parent = child;
		}
		//xu ly 2 truong hop roi vao head va tail
		if (_strcmpi(child->Data.ten, l.head->Data.ten) == 0) {
			Remove_Head(l);
			return 1;
		}
		else if (_strcmpi(child->Data.ten, l.tail->Data.ten) == 0) {
			Remove_Tail(l);
			return 1;
		}
		Parent->next = child->next;
		child->next = NULL;
		delete child;
		return 1;
	}
}
float calculator_score(KQList l) {
	float sum = 0;
	int count = 0;
	for (KQNODE* i = l.head; i != NULL; i=i->next)
	{
		sum += i->Data.DMH * i->Data.tinchi;
		count += i->Data.tinchi;
	}
	return 1.0*sum / count;
}
void create_NewList(SList l , SList&New) {
	for (SNODE* i = l.head; i != NULL; i = i->next)
	{
		for (SNODE* j = i->next; j != NULL; j = j->next)
		{
			if (calculator_score(i->Data.KQ) < calculator_score(j->Data.KQ)) {
				SNODE* temp = new SNODE;
				temp->Data = i->Data;
				i->Data = j->Data;
				j->Data = temp->Data;
			}
		}
	}
	for (SNODE* i = l.head; i != NULL; i = i->next)
	{
		SNODE* temp = new SNODE;
		temp->next = NULL;
		temp->Data = i->Data;
		Add_Tail(New, temp);
	}
}
void Print_Kha(SList l) {
	printf("danh sach sinh vien loai kha\n");
	for (SNODE* i = l.head; i != NULL; i = i->next)
	{
		if (calculator_score(i->Data.KQ) < 8.5 && calculator_score(i->Data.KQ)>7.5) {
			Print_1_Slist(i);
			printf("====================================================================================================\n");
			Print_KQList(i->Data.KQ);
			printf("====================================================================================================\n");
		}	
	}
}
void Max_score(SList l) {
	printf("danh sach sinh vien loai kha\n");
	SNODE* k = l.head;
	for (SNODE* i = l.head->next; i != NULL; i = i->next)
	{
		if (calculator_score(k->Data.KQ) <  calculator_score(i->Data.KQ)) {
			k = i;
		}
	}
	printf("hoc sinh cao diem nhat la\n");
	Print_1_Slist(k);
	printf("====================================================================================================\n");
	Print_KQList(k->Data.KQ);
	printf("====================================================================================================\n");
}
void Min_score(SList l) {
	printf("danh sach sinh vien loai kha\n");
	SNODE* k = l.head;
	for (SNODE* i = l.head->next; i != NULL; i = i->next)
	{
		if (calculator_score(k->Data.KQ) > calculator_score(i->Data.KQ)) {
			k = i;
		}
	}
	printf("hoc sinh cao thap nhat la\n");
	Print_1_Slist(k);
	printf("====================================================================================================\n");
	Print_KQList(k->Data.KQ);
	printf("====================================================================================================\n");
}
void Min_gioi(SList l) {
	SNODE* k = l.head;
	int flag = 0;
	for (SNODE* i = l.head; i !=NULL ; i=i->next)
	{
		if (calculator_score(i->Data.KQ) >= 8.5 ) {
			flag = 1;
			if (calculator_score(i->Data.KQ) < calculator_score(k->Data.KQ))k = i;
		}
	}
	if (flag) {
		printf("hoc sinh gioi thap nhat la\n");
		Print_1_Slist(k);
		printf("====================================================================================================\n");
		Print_KQList(k->Data.KQ);
		printf("====================================================================================================\n");
	}
	else printf("ko co hsg");
	
}
void gan_x(SList l,float x) {
	SNODE* k = l.head;
	for (SNODE* i = l.head; i != NULL; i = i->next)
	{
		if (fabs(calculator_score(i->Data.KQ)-x)< fabs(calculator_score(k->Data.KQ) - x)) {
			k = i;
		}
	}
	printf("hoc sinh gan voi %.2f nhat la\n",x);
	Print_1_Slist(k);
	printf("====================================================================================================\n");
	Print_KQList(k->Data.KQ);
	printf("====================================================================================================\n");
}
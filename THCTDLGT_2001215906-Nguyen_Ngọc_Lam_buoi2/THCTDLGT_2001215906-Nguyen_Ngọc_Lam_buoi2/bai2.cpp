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
//struct BaiHat
//{
//	char name[50], TG[40],Singel[30];
//	int time;
//};
//struct SNODE
//{
//	BaiHat Data;
//	SNODE* next;
//};
//struct SList
//{
//	SNODE* head;
//	SNODE* tail;
//};
////tao list
//void Create_List(SList& l);
////add
//int Add_Head(SList& l, SNODE* p);
//int Add_Tail(SList& l, SNODE* p);
////tao node;
//SNODE* Create_NODE( char name[50], char TG[40], char Singel[30], int time);
////doc tu file
//void Input_File(SList& l);
////menu
//void Menu();
////in 
//void Print_Ten();
//void Print(SList l);
////thời luong nghe
//void Time_listen(SList l);
////add 1 bai
//void Add_1baihat(SList& l);
////xoa
//int Remove_Tail(SList& l);
//int Remove_Head(SList& l);
//int Remove(SList& l, char Name[]);
////tim x
//int Find_X(SList l, char Name[]);
////sort
//void Sort_Ten_BH(SList& l);
//void Sort_Ten_NS(SList& l);
////
//int ADD_X_lendau(SList& l, char name[]);
//int main() {
//	SList l;
//	Create_List(l);
//	int choice = -1;
//	do
//	{
//		system("cls");
//		Menu();
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1:
//			Create_List(l);
//			Input_File(l);
//			printf("doc thanh cong");
//			_getch();
//			break;
//		case 2:
//			Print(l);
//			_getch();
//			break;
//		case 3:
//			Time_listen(l);
//			_getch();
//			break;
//		case 4:
//			Add_1baihat(l);
//			_getch();
//			break;
//		case 5: {
//			char name[50];
//			printf("nhap ten bai hat: ");
//			rewind(stdin);
//			gets_s(name);
//			if (Remove(l, name))printf("xoa thanh cong");
//			else printf("xoa khong thanh cong");
//			_getch();
//		}
//			break;
//		case 6: {
//			char name[50];
//			printf("nhap ten bai hat: ");
//			rewind(stdin);
//			gets_s(name);
//			if (Find_X(l, name))printf("co trong danh sach");
//			else printf("ko co trong danh sach");
//				_getch();
//		}break;
//		case 7: {
//			Sort_Ten_BH(l);
//			printf("sort thanh cong");
//			_getch();
//		}  break;
//		case 8: {
//			Sort_Ten_NS(l);
//			printf("sort thanh cong");
//			_getch();
//		}  break;
//		case 9: {
//			char name[50];
//			printf("nhap ten bai hat: ");
//			rewind(stdin);
//			gets_s(name);
//			if (ADD_X_lendau(l, name))printf("dua len dau thanh cong");
//			else printf("dua len dau ko thanh cong");
//			_getch();
//		}break;
//		default:
//			break;
//		}
//	} while (choice!=0);
//	return 0;
//}
////menu
//void Menu() {
//	printf("====menu===");
//	printf("\n1.Doc File\n2.in danh sach\n3.de nghe het nhac trong list can bn time\n4.them nhac vao dau/cuoi list\n");
//	printf("5.xoa 1 bai ra khoi list\n6.kiem tra xem bai nhac X co trong list ko\n7.sap xep theo ten\n8.sap xep giam theo ten nghe si\n9.dua 1 bai hat trong list len dau\n");
//	printf("vui long nhap lua chon cua ban: ");
//}
////tao danh sach
//void Create_List(SList& l)
//{
//	l.head = NULL;
//	l.tail = NULL;
//}
////tao node
//SNODE* Create_NODE( char name[50],char TG[40],char Singel[30],int time) {
//	SNODE* temp = new SNODE;
//	strcpy(temp->Data.name, name);
//	strcpy(temp->Data.TG, TG);
//	strcpy(temp->Data.Singel, Singel);
//	temp->Data.time = time;
//	temp->next = NULL;
//	return temp;
//
//}
////doc tu file
//void Input_File(SList& l) {
//	FILE* L = fopen("bai2.txt", "r");
//	char c;
//	char name[50], TG[40], Singel[30];
//	int time;
//	//dieu kien den khi nao gap EOF(END OF FILE)=> nghia la chay den cuoi file ko co j de doc nua
//	while (fscanf(L, "%[^#]s ", name)!=EOF)
//	{
//		
//		//%c lay dau #
//		fscanf(L, "%c ", &c);
//		fscanf(L, "%[^#]s ", TG);
//		fscanf(L, "%c ", &c);
//		fscanf(L, "%[^#]s ", Singel);
//		fscanf(L, "%c ", &c);
//		fscanf(L, "%d\n", &time);
//		//add vao duoi
//		Add_Tail(l, Create_NODE(name, TG, Singel, time));
//	}
//}
////add
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
////in
//void Print_Ten()
//{
//	printf("%-20s %-20s %-20s %-10s \n", "Ten bai hat", "Ten Tac Gia", "Ten Nghe Si", "Thoi luong");
//}
//void Print(SList l) {
//	if (l.head == NULL)return;
//	Print_Ten();
//	for (SNODE* i = l.head; i !=NULL ; i=i->next)
//	{
//		printf("%-20s %-20s %-20s %-10d\n", i->Data.name, i->Data.TG, i->Data.Singel, i->Data.time);
//	}
//}
////time nghe all list
//void Time_listen(SList l) {
//	if (l.head == NULL)return;
//	int sum = 0;
//	for (SNODE* i = l.head; i !=NULL ; i=i->next)
//	{
//		sum += i->Data.time;
//	}
//	printf("%d Hours:%d Minute:%d Seconds", sum / 3600, (sum%3600)/ 60 , sum % 60);
//}
//void Add_1baihat(SList& l) {
//	char name[50], TG[40], Singel[30];
//	int time;
//	printf("nhap ten bai hat: ");
//	rewind(stdin);
//	gets_s(name);
//	printf("nhap ten tac gia: ");
//	rewind(stdin);
//	gets_s(TG);
//	printf("nhap ten Nghe Si: ");
//	rewind(stdin);
//	gets_s(Singel);
//	printf("nhap thoi luong (so s): ");
//	scanf("%d", &time);
//	int choice = -1;
//	do
//	{
//		printf("1.add dau\n2.add cuoi\n");
//		printf("nhap lua chon cua ban: ");
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1: {
//			if (Add_Head(l, Create_NODE(name, TG, Singel, time)))printf("add thanh cong");
//			else printf("add ko thanh cong");
//			_getch();
//			break;
//		}
//		case 2: {
//			if (Add_Tail(l, Create_NODE(name, TG, Singel, time)))printf("add thanh cong");
//			else printf("add ko thanh cong");
//			_getch();
//			break;
//		}
//		default:
//			break;
//		}
//	} while (choice!=1&&choice!=2);
//	
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
//			if (_strcmpi(p->next->Data.name,l.tail->Data.name)==0)break;
//		}
//		delete p->next;
//		p->next = NULL;
//		return 1;
//	}
//}
//int Remove(SList& l, char Name[]) {
//	if (l.head == NULL)return 0;
//	SNODE* child = l.head, *parent = child;
//	for (child; child != NULL; child = child->next)
//	{
//		if (_strcmpi(child->Data.name, Name) == 0)break;
//		parent = child;
//	}
//	if (_strcmpi(child->Data.name, l.head->Data.name) == 0) {
//		Remove_Head(l);
//		return 1;
//	}
//	if (_strcmpi(child->Data.name, l.tail->Data.name) == 0) {
//		Remove_Tail(l);
//		return 1;
//	}
//	parent->next = child->next;
//	delete child;
//	return 1;
//}
//int Find_X(SList l, char Name[]) {
//	if (l.head == NULL)return 0;
//	for (SNODE* i = l.head; i !=NULL ; i=i->next)
//	{
//		if (_strcmpi(Name, i->Data.name) == 0)return 1;
//	}
//	return 0;
//}
////sort
//void Sort_Ten_BH(SList& l) {
//	if (l.head == NULL)return;
//	for (SNODE* i = l.head; i !=NULL ; i=i->next)
//	{
//		for (SNODE* j = i->next; j !=NULL ; j=j->next)
//		{
//			if (_strcmpi(i->Data.name, j->Data.name) > 0) {
//				SNODE* temp = new SNODE;
//				temp->Data = i->Data;
//				i->Data = j->Data;
//				j->Data = temp->Data;
//			}
//		}
//	}
//}
//void Sort_Ten_NS(SList& l) {
//	if (l.head == NULL)return;
//	for (SNODE* i = l.head; i != NULL; i = i->next)
//	{
//		for (SNODE* j = i->next; j != NULL; j=j->next)
//		{
//			if (_strcmpi(i->Data.Singel, j->Data.Singel) < 0) {
//				SNODE* temp = new SNODE;
//				temp->Data = i->Data;
//				i->Data = j->Data;
//				j->Data = temp->Data;
//			}
//		}
//	}
//}
////
//int ADD_X_lendau(SList& l, char name[]) {
//	if (l.head == NULL||_strcmpi(name,l.head->Data.name)==0)return 0;
//	SNODE* Parent = l.head;
//	SNODE* i = l.head->next;
//	int flag = 0;
//	for (; i != NULL; i=i->next)
//	{
//		if (_strcmpi(name, i->Data.name) == 0) {
//			flag = 1;
//			break;
//			
//		}
//		Parent = i;
//	}
//	if (flag) {
//		Add_Head(l, Create_NODE(i->Data.name, i->Data.TG, i->Data.Singel, i->Data.time));
//		if (_strcmpi(name, l.tail->Data.name) == 0)Remove_Tail(l);
//		else
//		{
//			Parent->next = i->next;
//		}
//		return 1;
//	}
//	return 0;
//	
//}
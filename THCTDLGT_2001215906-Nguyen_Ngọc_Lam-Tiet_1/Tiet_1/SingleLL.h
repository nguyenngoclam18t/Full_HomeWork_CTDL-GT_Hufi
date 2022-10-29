#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define itemtype int
#ifndef SingleLL_h
#define SingleLL_h

struct SNODE
{
	itemtype data;
	SNODE* next;
};
struct SList
{
	SNODE* head;
	SNODE* tail;
};
////tao list
void Create_List(SList& l);
//tao node
SNODE* Create_Node(itemtype x);
//Add node
int Add_Head(SList& l, SNODE* p);
int Add_Tail(SList& l, SNODE* p);
//xoa node
int Remove_Head(SList& l);
int Remove_Tail(SList& l);
int Remove(SList& l, SNODE* p);
//tim
int Find_x(SList l, itemtype x);
//ham xuat
void Print(SList l);
//sort
void Swap(itemtype& a, itemtype& b);
void Interchange_Sort_Tang(SList& l);
void Interchange_Sort_Giam(SList& l);
//min and max
int Min(SList l);
int Max(SList l);
int Max_Odd(SList l);
int Min_Even(SList l);
int Max_Even(SList l);
int Min_Odd(SList l);
////cac ham

//==========================================================================================================================//
void Create_List(SList& l)
{
	l.head = NULL;
	l.tail = NULL;
}
SNODE* Create_Node(itemtype x)
{
	SNODE* temp = new SNODE{x,NULL};
	if (temp == NULL)
		return NULL;
	return temp;
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
		l.tail=p;
		return 1;
	}
}
//xoa
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
		for (; p != NULL; p=p->next)
		{
			if (p->next->data == l.tail->data)break;
		}
		delete p->next;
		p->next = NULL;
		return 1;
	}
}
int Remove_Node(SList& l, itemtype x)
{
	if (l.head == NULL ) //list trong
	{
		return 0;
	}
	else {
		
		
		SNODE* child = l.head, * Parent = child;
		for ( ;  child!=NULL ; child=child->next)
		{
			if (child->data == x)break;
			Parent = child;
		}
		//xu ly 2 truong hop roi vao head va tail
		if (child->data == l.head->data) {
			Remove_Head(l);
			return 1;
		}
		else if (child->data == l.tail->data) {
			Remove_Tail(l);
			return 1;
		}
		Parent->next = child->next;
		child->next = NULL;
		delete child;
		return 1;
	}
}
//xuat
void Print(SList l) {
	if (l.head == NULL)return;
	SNODE* p = l.head;
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
}
//sap xep
void Swap(itemtype&a, itemtype&b) {
	int temp = a;
	a = b;
	b = temp;
}
void Interchange_Sort_Giam(SList& l) {
	for (SNODE* i = l.head; i != NULL; i = i->next)
	{
		for (SNODE* j = i->next; j != NULL; j = j->next)
		{
			if (i->data < j->data)Swap(i->data, j->data);
		}
	}
}
void Interchange_Sort_Tang(SList& l) {
	for (SNODE* i = l.head; i != NULL; i = i->next)
	{
		for (SNODE* j = i->next; j != NULL; j = j->next)
		{
			if (i->data > j->data)Swap(i->data, j->data);
		}
	}
}
//
int Find_x(SList l, int x) {
	for (SNODE* i = l.head; i != NULL; i = i->next)
	{
		if (i->data == x)return 1;
	}
	return 0;
}
int Max(SList l)
{
	int max = l.head->data;
	for (SNODE* k = l.head; k != NULL; k = k->next)
	{
		if (k->data > max)
		{
			max = k->data;
		}
	}
	return max;
}
int Min(SList l) {
	int min = l.head->data;
	for (SNODE* k = l.head; k != NULL; k = k->next)
	{
		if (k->data < min)
		{
			min = k->data;
		}
	}
	return min;
}

int Min_Even(SList l) {
	int min;
	for (SNODE* k = l.head; k != NULL; k = k->next)
	{
		if (k->data % 2 == 0)
		{
			min = k->data;
			break;
		}
	}
	for (SNODE* k = l.head; k != NULL; k = k->next)
	{
		if (k->data % 2 == 0 && k->data < min)
		{
			min = k->data;
		}
	}
	return min;
}
int Max_Even(SList l) {
	int max;
	int check = 1;
	for (SNODE* k = l.head; k != NULL; k = k->next)
	{
		if (k->data % 2 == 0)
		{
			check = 0;
			max = k->data;
			break;
		}
	}
	if (check)return -1;
	for (SNODE* k = l.head; k != NULL; k = k->next)
	{
		if (k->data % 2 == 0 && k->data < max)
		{
			max = k->data;
		}
	}
	return max;
}
int Max_Odd(SList l) {
	int max;
	for (SNODE* k = l.head; k != NULL; k = k->next)
	{
		if (k->data % 2 != 0)
		{
			max = k->data;
			break;
		}
	}
	for (SNODE* k = l.head; k != NULL; k = k->next)
	{
		if (k->data % 2 != 0 && k->data > max)
		{
			max = k->data;
		}
	}
	return max;
}
int Min_Odd(SList l) {
	int min, check = 1;
	for (SNODE* k = l.head; k != NULL; k = k->next)
	{
		if (k->data % 2 != 0)
		{
			check = 0;
			min = k->data;
			break;
		}
	}
	if (check)return -1;
	for (SNODE* k = l.head; k != NULL; k = k->next)
	{
		if (k->data % 2 != 0 && k->data < min)
		{
			min = k->data;
		}
	}
	return min;
}

#endif // !SingleLL_h
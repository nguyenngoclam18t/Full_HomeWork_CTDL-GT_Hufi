#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct SNODE
{
	int data;
	SNODE* next;
};
struct SList
{
	SNODE* head;
	SNODE* tail;
};





////cac ham

//==========================================================================================================================//
void Create_List(SList& l)
{
	l.head = NULL;
	l.tail = NULL;
}
SNODE* Create_Node(int x)
{
	SNODE* temp = new SNODE;
	temp->data = x;
	temp->next = NULL;
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
		l.tail = p;
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
		for (; p != NULL; p = p->next)
		{
			if (p->next->data == l.tail->data)break;
		}
		delete p->next;
		p->next = NULL;
		return 1;
	}
}
int Remove_Node(SList& l, int x)
{
	if (l.head == NULL) //list trong
	{
		return 0;
	}
	else {


		SNODE* child = l.head, * Parent = child;
		for (; child != NULL; child = child->next)
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
	SNODE* p = l.head;
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
}
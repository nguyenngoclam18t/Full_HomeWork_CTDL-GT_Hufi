#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
template<class T>
struct NODE
{
	T Data;
	NODE<T>* Next;
};
template<class T>
struct Queue
{
	NODE<T>* Head;
	NODE<T>* Tail;
};
template<class T>
bool IsEmpty(Queue<T>q) {
	if (q.Head == NULL)return true;
	else return false;
}
template<class T>
void InitQueue(Queue<T>& q) {
	q.Head = q.Tail = NULL;
}
template<class T>
NODE<T>* CreateNode(T X) {
	NODE<T>* temp = new NODE<T>;
	temp->Data = X;
	temp->Next = NULL;
	return temp;
}
template <class T>
void EnQueue(Queue<T>& q, T x) {
	NODE<T>* p = CreateNode<T>(x);
	if (IsEmpty(q)) //dau trong thi gan thang
	{
		q.Head = p;
		q.Tail = p;
	}
	else {
		//gan nhu bth
		q.Tail->Next = p;
		q.Tail = p;
	}
}
template <class T>
NODE<T>* DeQueue(Queue<T>& q) {
	if (IsEmpty(q))return NULL;
	NODE<T>* p = q.Head;
	q.Head = q.Head->Next;
	p->Next = NULL;
	return p;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
template <class T>
struct NODE
{
	T data;
	NODE<T>* next;
};
template <class T>
struct Stack
{
	NODE<T>* top;
};
template <class T>
void InitStack(Stack<T>& S) {
	S.top = NULL;
}
template <class T>
bool IsEmpty(Stack<T> S) {
	if (S.top == NULL)return true;
	return false;
}
template <class T>
NODE<T>* Create_Node(T x)
{
	NODE<T>* temp = new NODE<T>;
	temp->data = x;
	temp->next = NULL;
	return temp;
}
template <class T>
void Push(Stack<T>& S, T x) {
	NODE<T>* p = Create_Node<T>(x);
	if (IsEmpty(S)) {
		S.top = p;
	}
	else
	{
		p->next = S.top;
		S.top = p;
	}
}
template <class T>
NODE<T>* Pop(Stack<T>& S) {
	if (IsEmpty(S))return NULL;
	NODE<T>* temp = S.top;
	S.top = S.top->next;
	return temp;
}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<Windows.h>
//#include<conio.h>
//#include"Queue.h"
//#include<stdlib.h>
//#include<time.h>
//void CreateAuto(Queue<int>& q);
//void ShowQueue(Queue<int> q);
//int main() {
//	Queue<int>q;
//	CreateAuto(q);
//	ShowQueue(q);
//}
//void ShowQueue(Queue<int> q) {
//	NODE<int>* t = q.Head;
//	while (t!=NULL)
//	{
//		printf("%d ", t->Data);
//		t = t->Next;
//	}
//}
//void CreateAuto(Queue<int>& q) {
//	InitQueue<int>(q);
//	srand(time(0));
//	int n;
//	do
//	{
//		printf("nhap so luong phan tu: ");
//		scanf("%d", &n);
//	} while (n<=0);
//	for (int i = 0; i < n; i++)
//	{
//		EnQueue<int>(q, (rand() % 199) - 99);
//	}
//}
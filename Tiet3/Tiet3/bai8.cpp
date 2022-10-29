//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<Windows.h>
//#include<conio.h>
//#include"Queue.h"
//void Input(int a[], int& n);
//void importQ(Queue<int>& Q, int n, int a[],int k);
//int count_Queue(Queue<int>Q);
//int Check(Queue<int>Q, int n);
//void Print(Queue<int>Q, int k);
//int main() {
//	int a[100], n, k;
//	Queue<int>Q;
//	printf("nhap so luong tin nhan duoc thong bao: ");
//	scanf("%d", &k);
//	printf("nhap so luong tin nhan : ");
//	scanf("%d", &n);
//	Input(a, n);
//	importQ(Q, n,a, k);
//	Print(Q, k);
//	return 0;
//}
//void Input(int a[], int& n) {
//	for (int i = 0; i < n; i++)
//	{
//		printf("nhap sdt thu %d: ",i);
//		scanf("%d", &a[i]);
//	}
//}
//void importQ(Queue<int>& Q, int n, int a[],int k) {
//	InitQueue(Q);
//	for (int i = 0; i < n; i++)
//	{
//		if (count_Queue(Q) < k) {
//			if(Check(Q,a[i])==false)EnQueue<int>(Q, a[i]);
//		}
//		else
//		{
//			if (Check(Q, a[i]))continue;
//			else{
//				DeQueue<int>(Q);
//				EnQueue<int>(Q, a[i]);
//			}
//		}
//	}
//	
//}
//int count_Queue(Queue<int>Q) {
//	int count = 0;
//	NODE<int>* T = Q.Head;
//	while (T!=NULL)
//	{
//		count++;
//		T = T->Next;
//	}
//	return count;
//}
//int Check(Queue<int>Q, int n) {
//	NODE<int>* T = Q.Head;
//	while (T != NULL)
//	{
//		if (T->Data == n)return true;
//		T = T->Next;
//	}
//	return false;
//}
//void Print(Queue<int>Q,int k) {
//	int a[100], n =k-1 ;
//	NODE<int>* T = Q.Head;
//	while (T!=NULL)
//	{
//		a[n] = T->Data;
//		T = T->Next;
//		n--;
//	}
//	printf("danh sach tin nhan\n");
//	for (int i = 0; i < k; i++)
//	{
//		printf("%d\n",a[i]);
//	}
//}
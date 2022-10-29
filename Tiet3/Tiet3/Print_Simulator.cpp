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
#include"Queue.h"
#include<stdlib.h>
#include<time.h>

struct Print
{
	char name[100];
};
void menu();
void Create_Random(Queue<Print>& Q);
void show(Queue<Print>Q);
int main() {
	int choice = -1;
	Queue<Print>Q;
	InitQueue(Q);
	do
	{
		menu();
		scanf("%d", &choice);
		switch (choice)
		{
		case 1: {
			Create_Random(Q);
			printf("\n\ttao thanh cong");
		}break;
		case 2: {
			printf("\n\thang cho may in: ");
			show(Q);
		}break;
		case 3: {
			DeQueue(Q);
			printf("\n\txu li dau hang doi thanh cong");
		}break;
		default:
			break;
		}
		_getch();
		system("cls");
	} while (choice!=0);
}
void menu() {
	printf("\n\tMenu\n\t0.out\n\t1.tao hang cho in file random\n\t2.xuat hang cho\n\t3.xu li hang cho \n\tlua chon yeu cau cua ban: ");
}
void Create_Random(Queue<Print>&Q) {
	InitQueue(Q);
	char a[100] = "TempA";
	char b[100] = "TempB";
	char c[100] = "TempC";
	int n;
	printf("nhap so luong: ");
	scanf("%d", &n);
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		Print temp;
		char number[100];
		_itoa(i, number, 10);
		switch (rand()%3+1)
		{
		case 1: {
			
			strcpy(temp.name, a);
			strcat(temp.name, number);
			EnQueue(Q,temp );
		}break;
		case 2: {
			strcpy(temp.name, b);
			strcat(temp.name, number);
			EnQueue(Q, temp);
		}break;
		case 3: {
			strcpy(temp.name, c);
			strcat(temp.name, number);
			EnQueue(Q, temp);
		}break;
		default:
			break;
		}
	}
}
void show(Queue<Print>Q) {
	NODEQ<Print>* temp=Q.Head;
	while (temp!=NULL)
	{
		printf("%s ", temp->Data.name);
		temp = temp->Next;
	}
}
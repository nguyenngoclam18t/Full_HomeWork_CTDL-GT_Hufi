//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include"Queue.h"
//int check(char a[]);
//int main() {
//	char a[100];
//	printf("nhap chuoi: ");
//	gets_s(a);
//	if (check(a))printf("khong thay trung lap () trong chuoi");
//	else printf(" thay trung lap() trong chuoi");
//}
//int check(char a[]) {
//	Queue<int>Q;
//	InitQueue<int>(Q);
//	for (int i = 0; i < strlen(a); i++)
//	{
//		if (a[i] == '(')EnQueue<int>(Q, i);
//		else if((a[i-1]=='('&&a[i]!='(')|| (a[i - 1] == ')' && a[i] != '('))EnQueue<int>(Q, i);
//		else if (a[i] == ')')EnQueue<int>(Q, i);
//	}
//	int dem = 0;
//	for (NODE<int>* i = Q.Head; i !=NULL ; i=i->Next)
//	{
//		if (a[i->Data] == '(')dem++;
//		else if (a[i->Data] != ')')dem--;
//	}
//	if (dem == 0)return true;
//	else return false;
//}
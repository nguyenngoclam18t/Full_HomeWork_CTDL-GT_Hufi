//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<Windows.h>
//#include<string.h>
//#include"Stack.h"
//int check(char a[], Stack<char>S);
//void Add_string(char a[], Stack<char>& S);
//void Print(Stack<char>S);
//int main() {
//	char a[100];
//	printf("nhap chuoi can dao lon: ");
//	gets_s(a);
//	Stack<char>S;
//	Add_string(a, S);
//	Print(S);
//	if (check(a, S))printf("\nchuoi doi xung");
//	else printf("\nko doi xung");
//	return 0;
//}
//void Add_string(char a[], Stack<char>& S) {
//	InitStack(S);
//	for (int i = 0; i < strlen(a); i++)
//	{
//		Push<char>(S, a[i]);
//	}
//}
//int check(char a[], Stack<char>S) {
//	NODE<char>* j = S.top;
//	for (int i = 0; i < strlen(a),j!=NULL; i++,j=j->next)
//	{
//		if (a[i] != j->data)return false;
//	}
//	return true;
//}
//void Print(Stack<char>S) {
//	NODE<char>* T = S.top;
//	while (T!=NULL)
//	{
//		printf("%c", T->data);
//		T = T->next;
//	}
//}
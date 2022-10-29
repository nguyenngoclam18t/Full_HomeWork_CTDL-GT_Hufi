//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include"Stack.h"
//int check(char a[]);
//int main() {
//	char a[100];
//	printf("nhap chuoi: ");
//	gets_s(a);
//	if (check(a))printf("chuoi dung");
//	else printf("chuoi sai");
//
//}
//int check(char a[]) {
//	Stack<char>S;
//	InitStack<char>(S);
//	for (int i = 0; i < strlen(a); i++)
//	{
//		if (a[i] == '(' || a[i] == '[' || a[i] == '{')Push<char>(S, a[i]);
//		if (a[i] == ')' || a[i] == ']' || a[i] == '}') {
//			if (IsEmpty(S))return false;
//			NODE<char>* p = Pop<char>(S);
//			if (a[i] == ')' && p->data != '(')return false;
//			else if (a[i] == ']' && p->data != '[')return false;
//			else if (a[i] == '}' && p->data != '{')return false;
//		}
//	}
//	if (IsEmpty(S))return true;
//	else return false;
//}
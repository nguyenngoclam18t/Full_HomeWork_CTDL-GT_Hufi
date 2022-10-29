//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include"HashTable(Open addressing).h"
//int compare(char a, char b);
//int covert(char a);
//int main() {
//	InputHashKey(26);
//	HashNode<int>** Array = new HashNode<int>*[26];
//	InitHashTable(Array);
//	char str[100];
//	printf("nhap chuoi: ");
//	gets_s(str);
//	for (int i = 0; i < strlen(str); i++)
//	{
//		int key = HashFunction(covert(str[i]));
//		HashNode<int>* temp = Array[key];
//		if (Array[key] == NULL) {
//			temp= CreateHashNode(1);
//		}
//
//		else
//			temp->data++;
//		Array[key] = temp;
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		if (Array[i] != NULL) {
//			HashNode<int>* temp = Array[i];
//			printf("%c : %d \n", i + 97, temp->data);
//		}
//	}
//	
//}
//int compare(char a, char b) {
//	if (a == b)
//		return 0;
//	return 1;
//}
//int covert(char a) {
//	if (a >= 'A' && a <= 'Z') {
//		return (int)a -65;
//	}
//	return (int)a- 97;
//}
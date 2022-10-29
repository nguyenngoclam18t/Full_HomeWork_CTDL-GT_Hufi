//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<conio.h>
//#include"HashTable.h"
//#include<Windows.h>
//#include<string.h>
//struct TuDien {
//	char Eng[100], Viet[100];
//};
//int compareAdd(TuDien a, TuDien b);
//void Show(TuDien a);
//int Convert(TuDien a);
//int compareViet(TuDien a, TuDien b);
//int compareEng(TuDien a, TuDien b);
//void ReadFile(HashNode<TuDien>* tudien[]);
//void Menu();
//int main() {
//	HashNode<TuDien>* tudien[27];
//	InputMax(27);
//	InitHashTable(tudien);
//	int choice = -1;
//	do
//	{
//		Menu();
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1: {
//			ReadFile(tudien);
//		}break;
//		case 2: {
//			Tranverse(tudien, Show);
//		}break;
//		case 3: {
//			HashNode<TuDien>* temp=new HashNode<TuDien>;
//			printf("nhap nghia tieng anh de tra: ");
//			rewind(stdin);
//			gets_s(temp->data.Eng);
//			temp = Find(tudien, temp->data, Convert, compareEng);
//			if (temp == NULL)
//				printf("tu ban dang tim khong ton tai");
//			else
//				Show(temp->data);
//		}break;
//		case 4: {
//			TuDien temp;
//			printf("nhap nghia tieng anh de xoa: ");
//			rewind(stdin);
//			gets_s(temp.Eng);
//			if (Remove(tudien, temp, Convert, compareEng))
//				printf("xoa thanh cong");
//			else
//				printf("xoa khong thanh cong");
//		}break;
//		case 5: {
//			DeleteHash(tudien);
//			printf("xoa thanh cong");
//		}break;
//		default:
//			break;
//		}
//		_getch();
//		system("cls");
//	} while (choice!=0);
//
//}
//void Menu() {
//	printf("\n\tMenu\n\t1.Read file\n\t2.show\n\t3.tra nghia eng\n\t4.xoa nghia tieng anh\n\t5.xoa hashtable\n\t");
//	printf("nhap lua chon: ");
//}
//int compareEng(TuDien a, TuDien b) {
//	if (_strcmpi(a.Eng, b.Eng) == 0)
//		return 0;
//	return 1;
//}
//int compareViet(TuDien a, TuDien b) {
//	if (_strcmpi(b.Viet, a.Viet) == 0)
//		return 0;
//	return 1;
//}
//int compareAdd(TuDien a, TuDien b) {
//	if (compareEng(a,b)==0&&compareViet(a,b)==0)
//		return 0;
//	return 1;
//}
//void Show(TuDien a) {
//	printf("\t%s : %s \n", a.Eng, a.Viet);
//}
//int Convert(TuDien a) {
//	return (int)a.Eng[0];
//}
//void ReadFile(HashNode<TuDien>* tudien[]) {
//	FILE* L = fopen("Tudien.txt", "r");
//	if (L == NULL)
//		return;
//	TuDien temp;
//	char c;
//	while (fscanf(L,"%[^:]s",temp.Eng)!=EOF)
//	{
//		fscanf(L,"%c",&c);
//		fscanf(L, "%[^\n]s", temp.Viet);
//		fscanf(L, "%c", &c);
//		Insert(tudien, temp, Convert, compareAdd);
//	}
//	fclose(L);
//	printf("\n\tdoc thanh cong");
//}
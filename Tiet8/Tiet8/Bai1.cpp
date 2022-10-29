//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<conio.h>
//#include"HashTable.h"
//#include<Windows.h>
//#include<string.h>
//struct SinhVien
//{
//	char mssv[100],name[100];
//	int namsinh;
//	int diem;
//};
//void Show(SinhVien a);
//int convert(SinhVien a);
//int main();
//int compare(SinhVien a, SinhVien b);
//void ReadFile(HashNode<SinhVien>* Array[]);
//void Menu();
//void header();
//void XuatSac(HashNode<SinhVien>* Array[]);
//int compareAdd(SinhVien a, SinhVien b);
//int main() {
//	int choice = -1;
//	InputMax(101);
//	HashNode<SinhVien>* Array[101];
//	InitHashTable(Array);
//	do
//	{
//		Menu();
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1: {
//			ReadFile(Array);
//			printf("\n\tda nhap file xong");
//		}break;
//		case 2: {
//			printf("\n\tdanh sach sinh vien");
//			header();
//			Tranverse(Array, Show);
//		}break;
//		case 3: {
//			printf("\n\t sinh vien dat loai xuat sac la");
//			XuatSac(Array);
//		}break;
//		case 4: {
//			SinhVien temp;
//			printf("\n\tnhap diem x: ");
//			scanf("%d", &temp.diem);
//			while (Remove(Array, temp, convert, compare));
//			printf("\n\txoa thanh cong");
//		}break;
//		default:
//			break;
//		}
//		_getch();
//		system("cls");
//	} while (choice!=0);
//	
//}
//int compare(SinhVien a, SinhVien b) {
//	if (a.diem == b.diem)
//		return 0;
//	if (a.diem > b.diem)
//		return 1;
//	if (a.diem < b.diem)
//		return -1;
//}
//int compareAdd(SinhVien a, SinhVien b) {
//	if (_strcmpi(a.mssv, b.mssv) == 0 && a.namsinh == b.namsinh && _strcmpi(a.name, b.name) && a.diem == b.diem)
//		return 0;
//	return 1;
//}
//int convert(SinhVien a) {
//	return a.diem;
//}
//void header() {
//	printf("\n\t%-15s%-20s%10s%10s\n", "MSSV", "NAME", "Nam Sinh", "Diem");
//}
//void Show(SinhVien a) {
//	printf("\t%-15s%-20s%10d%10d\n", a.mssv, a.name, a.namsinh, a.diem);
//}
//void Menu() {
//	printf("\n\tMenu\n\t1.nhap thong tin tu file\n\t2.xuat sinh vien theo thu tu diem so\n\t3.liet ke danh sach sinh vien dat loai xuat sac\n\t4.xoa sinh vien co diem bang x\n\t");
//	printf("moi nhap lua chon: ");
//}
//void ReadFile(HashNode<SinhVien>* Array[]) {
//	InitHashTable(Array);
//	FILE* L = fopen("SinhVien.txt", "r");
//	SinhVien temp;
//	char c;
//	while (fscanf(L, "%[^#]s", temp.mssv)!=EOF)
//	{
//		fscanf(L, "%c", &c);
//		fscanf(L, "%[^#]s", temp.name);
//		fscanf(L, "%c", &c);
//		fscanf(L, "%d", &temp.namsinh);
//		fscanf(L, "%c", &c);
//		fscanf(L, "%d\n", &temp.diem);
//		Insert(Array, temp, convert, compareAdd);
//	}
//	fclose(L);
//}
//void XuatSac(HashNode<SinhVien>* Array[]) {
//	header();
//	for (int i = 90; i < 101; i++)
//	{
//		if (Array[i] != NULL) {
//			HashNode<SinhVien>* temp = Array[i];
//			while (temp!=NULL)
//			{
//				Show(temp->data);
//				temp = temp->next;
//			}
//		}
//	}
//}
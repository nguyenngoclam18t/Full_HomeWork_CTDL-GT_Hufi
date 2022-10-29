#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Max=0;
int ValueHash;
template<class T>
struct HashNode
{
	T data;
};
//
template<class T>
HashNode<T>* CreateHashNode(T data) {
	HashNode<T>* New = new HashNode<T>;
	if (New == NULL)
		return NULL;
	New->data = data;
	return New;
}
void InputHashKey(int hashkey) {
	ValueHash = hashkey;
	Max = ValueHash;
}
template<class T>
HashNode<T>** UpArray(HashNode<T>*Array[],int tang) {
	Max += tang;
	HashNode<T>** NewArray = new HashNode<T>*[Max];
	InitHashTable(NewArray);
	for (int i = 0; i < Max - tang; i++)
	{
		NewArray[i] = Array[i];
	}
	return NewArray;
	
}
#define MaxSize Max
template<class T>
void InitHashTable(HashNode<T>* Array[]) {
	for (int i = 0; i < Max; i++)
	{
		Array[i] = NULL;
	}
}
int HashFunction(int key) {
	return key % ValueHash;
}
template<class T>
HashNode<T>** Insert(HashNode<T>* Array[],  T data,int(*ConvertToInt)(T),int(*compare)(T,T),int phuongphap) {
	int key = HashFunction(ConvertToInt(data));
	HashNode<T>* temp = Array[key];
	bool flag = true;
	while (temp!=NULL)
	{
		if (compare(temp->data, data) == 0) {
			flag = false;
			break;
		}
		key+=phuongphap;
		if (key >= Max / 2)
			Array=UpArray(Array, ValueHash);
		temp = Array[key];
	}
	if(flag)
		Array[key] = CreateHashNode(data);
	return Array;
}
template<class T>
void Tranverse(HashNode<T>* Array[],void (*show)(T)) {
	for (int i = 0; i < Max; i++)
	{
		if (Array[i] != NULL) {
			HashNode<T>* temp = Array[i];
			show(temp->data);
		}
	}
}
template<class T>
bool Remove(HashNode<T>* Array[], T data, int(*ConvertToInt)(T), int(*compare)(T, T),int phuongphap) {
	int key = HashFunction(ConvertToInt(data));
	HashNode<T>* temp = Array[key];
	bool flag;
	if (temp == NULL) {
		return false;
	}
	while (temp != NULL&&key<Max)
	{
		if (compare(temp->data, data) == 0) {
			flag = true;
			break;
		}
		key +=phuongphap;
		temp = Array[key];
	}
	if (true) {
		delete temp;
		Array[key] = NULL;
		return true;
	}
	return false;
	
}
template<class T>
HashNode<T>* Find(HashNode<T>* Array[], T data, int(*ConvertToInt)(T), int(*compare)(T, T),int Phuongphap) {
	int key = HashFunction(ConvertToInt(data));
	HashNode<T>* temp = Array[key];
	bool flag;
	if (temp == NULL) {
		return NULL;
	}
	while (temp != NULL && key < Max)
	{
		if (compare(temp->data, data) == 0) {
			return temp;
		}
		key+=Phuongphap;
		temp = Array[key];
	}
	return NULL;
}
template<class T>
void DeleteHash(HashNode<T>* Array[]) {
	for (int i = 0; i < MaxSize; i++)
	{
		if (Array[i] != NULL) {
			HashNode<T>* child = Array[i];
			delete child;
			Array[i] = NULL;
		}
	}
}
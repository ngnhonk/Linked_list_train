#pragma once
#include "Header.h"

struct Node{
    int data;
    struct Node *next;
};
typedef struct Node* node;

//Tao node
node createNode(node &a, int x);

//Tra ve kich thuoc
int Size(node &a);

//Tiem tra rong
bool empty(node &a);

//Them phan tu vao dau danh sach
void addFirst(node &a, int x);

//Them phan tu vao cuoi danh sach
void addLast(node &a, int x);

//Them phan tu vao vi tri k
void addPos(node &a, int pos, int x);

//In ra danh sach
void printList(node &a);

//Ham xoa all
void deleteAll(node &a);
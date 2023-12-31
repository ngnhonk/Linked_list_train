#include "Function.h"
#include "Header.h"

//Tao node
node createNode(int x)
{
    node tmp = new Node();
    tmp -> next = NULL;
    tmp -> data = x;
    return tmp;
}

//Tra ve kich thuoc
int Size(node &a)
{
    int cnt = 0;
    while (a != NULL)
    {
        ++ cnt;
        a = a -> next;
    }
    return cnt;
}

//Tiem tra rong
bool empty(node &a)
{
    return a == NULL;
}

//Them phan tu vao dau danh sach
void addFirst(node &a, int x)
{
    node tmp = createNode(x);
    if(a == NULL)
    {
        a = tmp;
    }
    else
    {
        tmp -> next = a;
        a = tmp;
    }
}

//Them phan tu vao cuoi danh sach
void addLast(node &a, int x)
{
    node tmp = createNode(x);
    if(a == NULL)
    {
        a = tmp;
    }
    else
    {
        node p = a;
        while(p -> next != NULL)
        {
            p = p -> next;
        }
        p -> next = tmp;
    }
}

//Them phan tu vao vi tri k
void addPos(node &a, int pos, int x)
{
    node p = a;
    node tmp = createNode(x);
    int n = Size(a);
    if((pos <= 0) || (pos > n + 1))
    {
        cout << "Vi tri khong hop le!";
        return;
    }
    if(pos == 1)
    {
        addFirst(a, x);
        return;
    }
    else if(pos == n + 1)
    {
        addLast(a, x);
        return;
    }
    else
    {
        for (int i = 1; i < pos-1; i++)
        {
            p = p->next;
        }
        tmp -> next = p -> next;
        p -> next = tmp;
    }
}
//In ra danh sach
void printList(node &a)
{
    node p = a;
    while (p != NULL)
    {
        cout << p -> data << " ";
        p = p -> next;
    }
}

//Ham xoa all
void deleteAll(node &a)
{
    if(a != NULL)
    {
        a = NULL;
    }
    if(a == NULL)
    {
        cout << "Danh sach lien ket rong! ";
    }
}

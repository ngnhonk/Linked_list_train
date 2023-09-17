#include "Header.h"
#include "Function.h"

int main()
{
    node head = NULL;
    
    int x;
    int i = 0;

    cout << "Nhap vao 5 phan tu cua mang: ";
    while (i < 5)
    {
        ++i;
        cin >> x;
        addFirst(head, x);
    }
    int pos;
    cout << "Nhap vi tri: ";
    cin >> pos;
    cout << "Nhap gia tri: ";
    cin >> x;
    addPos(head, pos, x);
    cout << "Cac phan tu cua danh sach lien ket: ";

    printList(head);
}
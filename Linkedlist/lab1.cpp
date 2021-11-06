#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *pNext;
};
typedef struct Node *node;

// cap phat dong 1 not voi du lieu la so nguye nx
node makeNode(int x)
{
    node tmp = new Node();
    tmp->data = x;
    tmp->pNext = NULL;
    return tmp;
}

bool isEmpty(node a)
{
    if (a != NULL)
    {
        return false;
    }
    return true;
}

int size(node a)
{
    int count = 0;
    while (a != NULL)
    {
        a = a->pNext; // gan dia chi cua node tiep theo cho node hien tai
        ++count;
    }
    return count;
}

void insertFirst(node &a, int x)
{
    node temp = makeNode(x);
    if (a == NULL)
    {
        a = temp;
    }
    else
    {
        temp->pNext = a;
        a = temp;
    }
}

void insertLast(node &a, int x)
{
    node temp = makeNode(x);
    if (a == NULL)
    {
        a = temp;
    }
    else
    {
        node p = a;
        while (p->pNext != NULL)
        {
            p = p->pNext;
        }
        p->pNext = temp;
    }
}

void insertMiddle(node &a, int x, int pos)
{
    int n = size(a);
    if (pos <= 0 || pos > pos + 1)
    {
        cout << "Vi tri khong hop le!!" << endl;
    }
    if (n == 1)
    {
        insertFirst(a, x);
        return;
    }
    else if (n == pos + 1)
    {
        insertLast(a, x);
        return;
    }
    node p = a;
    for (int i = 1; i < pos - 1; i++)
    {
        p = p->pNext;
    }
    node temp = makeNode(x);
    temp->pNext = p->pNext;
    p->pNext = temp;
}

void deleteFirst(node &a)
{
    if (a == NULL)
    {
        return;
    }
    a = a->pNext;
}

void deleteLast(node &a)
{
    if (a == NULL)
    {
        return;
    }
    node trc = NULL;
    node sau = a;
    while (sau->pNext != NULL)
    {
        trc = sau;
        sau = sau->pNext;
    }
    if (trc == NULL)
    {
        a = NULL;
    }
    else
    {
        trc->pNext = NULL;
    }
}

void deleteMiddle(node &a, int pos)
{
    if (pos <= 0 || pos > size(a))
    {
        return;
    }
    node truoc = NULL, sau = a;
    for (int i = 1; i < pos; ++i)
    {
        truoc = sau;
        sau = sau->pNext;
    }
    if (truoc == NULL)
    {
        a = a->pNext;
    }
    else
    {
        truoc->pNext = sau->pNext;
    }
}

void output(node a)
{
    cout << "--------------------------\n";
    while (a != NULL)
    {
        cout << a->data << "  ";
        a = a->pNext;
    }
    cout << "\n--------------------------\n";
}

int main()
{
    node head = NULL;
    while (1)
    {
        cout << "-----------MENU-------------\n";
        cout << "1. Chen phan tu vao dau" << endl;
        cout << "2. Chen phan tu vao cuoi" << endl;
        cout << "3. Chen phan tu vao giua" << endl;
        cout << "4. Xoa phan tu dau" << endl;
        cout << "5. Xoa phan tu cuoi" << endl;
        cout << "6. Xoa phan tu giua" << endl;
        cout << "7. Duyet danh sach lien ket" << endl;
        cout << "-----------------------------\n";
        cout << "Nhap lua chon: ";
        int lc;
        cin >> lc;
        if (lc == 1)
        {
            int x;
            cout << "Nhap gia tri can chen: ";
            cin >> x;
            insertFirst(head, x);
        }
        else if (lc == 2)
        {
            int x;
            cout << "Nhap gia tri can chen: ";
            cin >> x;
            insertLast(head, x);
        }
        else if (lc == 3)
        {
            int x;
            cout << "Nhap gia tri can chen: ";
            cin >> x;
            int pos;
            cout << "Nhap vi tri: ";
            cin >> pos;
            insertMiddle(head, x, pos);
        }
        else if (lc == 4)
        {
            deleteFirst(head);
        }
        else if (lc == 5)
        {
            deleteLast(head);
        }
        else if (lc == 6)
        {
            int x;
            cout << "Nhap vi tri can xoa: ";
            cin >> x;
            deleteMiddle(head, x);
        }
        else
        {
            output(head);
        }
    }
    return 0;
}

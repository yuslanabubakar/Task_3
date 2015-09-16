#include <iostream>
#include "LinkedListHead.h"

using namespace std;

void insertLast(list *L, address P)
{
    if (L->first != NULL)
    {
        address Q;
        Q = L->first;
        while (Q->next != NULL)
        {
            Q = Q->next;
        }
        Q->next = P;
    }
    else
    {
        insertFirst(L,P);
    }
}

void insertAfter (list *L, address P)
{
    int totElm = countElement(L);
    int x;
    address prec;
    if (L->first != NULL)
    {
        cout<<"Ada "<<totElm<<" Elemen \n";
        cout <<"Masukan Posisi Elemen yang ingin anda Input : ";
        cin>>x;
        cin.ignore();
        if (x>0 && x<=totElm)
        {
            prec = L->first;
            for (int i=1; i<x-1; i++)
            {
                prec = prec -> next;
            }
            P-> next = prec -> next;
            prec -> next = P;
        }
    }
    else
    {
        insertFirst(L,P);
    }
}

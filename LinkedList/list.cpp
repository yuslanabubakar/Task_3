#include <iostream>
#include "LinkedListHead.h"

using namespace std;

address createElement(Buku addBuku)
{
    address P;
    P = new elmlist;
    P->next = NULL;
    P->info.isbn = addBuku.isbn;
    P->info.judul = addBuku.judul;
    P->info.pengarang = addBuku.pengarang;
    P->info.penerbit = addBuku.penerbit;
    P->info.harga = addBuku.harga;
    return P;
}

void createBuku(Buku *addBuku)
{
    cout<<"Input ISBN        : ";
    getline(cin, addBuku->isbn);
    cout<<"Input Judul       : ";
    getline(cin, addBuku->judul);
    cout<<"Input Pengarang   : ";
    getline(cin, addBuku->pengarang);
    cout<<"Input Penerbit    : ";
    getline(cin, addBuku->penerbit);
    cout<<"Input Harga (NUM) : ";
    cin>>addBuku->harga;
    cout<<endl;
    cin.ignore();
}

int countElement(list *L)
{
    int count = 1;
    address Q;
    Q = L->first;
    if (L->first==NULL)
    {
        return 0;
    }
    while (Q->next != NULL)
    {
        Q = Q->next;
        count++;
    }
    return count;
}

void viewElement(list *L)
{
    address P;
    P = L->first;
    int i = 1;
    //cout<<P->next;
    while (P != NULL)
    {
        cout<<"Buku ke-"<<i<<endl;
        i++;
        cout<<"ISBN         : "<<P->info.isbn<<endl;
        cout<<"Judul Buku   : "<<P->info.judul<<endl;
        cout<<"Pengarang    : "<<P->info.pengarang<<endl;
        cout<<"Penerbit     : "<<P->info.penerbit<<endl;
        cout<<"Harga        : "<<P->info.harga<<endl;
        cout<<endl;
        P = P->next;
    }
}

void insertFirst(list *L, address P)
{
    P->next = L->first;
    L->first = P;
}

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






void deleteAfter(list *L, address P)
{
    int totElm = countElement(L);
    int x;
    address prec;
    if (L->first != NULL)
    {
        cout<<"Ada "<<totElm<<" Elemen \n";
        if (countElement(L) == 1)
        {
            cout << "Sistem Akan Menghapus Elemen Pertama"<<endl;
            deleteFirst(L,P);
        }
        else
        {
            cout <<"Masukan Posisi Elemen yang ingin anda Delete : ";
            cin>>x;
            cin.ignore();
        }
        if (x>0 && x<=totElm)
        {
            prec = L->first;
            for (int i=1; i<x-1; i++)
            {
                prec = prec->next;
            }
            P = prec->next;
            prec->next = P->next;
            P->next = NULL;
            delete P;
        }
    }
    else
    {
        cout<<"List Kosong tidak Ada Elemen"<<endl;
    }

}

address searchElement(list *L,string idBook)
{
    address P;
    P = L->first;
    while(P != NULL)
    {
        if (P->info.isbn == idBook)
        {
            return P;
        }
        P = P->next;
    }
    return NULL;
}

void searchData(list *L)
{
    if(L->first != NULL)
    {
        address P;
        string searchData;
        cout<<"Masukan ISBN / IdBook yang ingin dicari : ";
        getline(cin,searchData);
        P = searchElement(L, searchData);
        cout<<P<<endl;
        if (P != NULL)
        {
            cout<<"Hasil Data yang dicari"<<endl;
            cout<<"ISBN      : "<<P->info.isbn<<endl;
            cout<<"Judul     : "<<P->info.judul<<endl;
            cout<<"Pengarang : "<<P->info.pengarang<<endl;
            cout<<"Penerbit  : "<<P->info.penerbit<<endl;
            cout<<"Harga     : "<<P->info.harga<<endl;
        }
        else
            cout<<"Data Book NOT FOUND 404"<<endl;
    }
    else
    {
        cout<<"Sorry Brother LIST KOSONG"<<endl;
    }
}

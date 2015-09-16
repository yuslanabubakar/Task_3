#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

using namespace std;

struct Buku{
    string isbn;
    string judul;
    string pengarang;
    string penerbit;
    double harga;
};

typedef struct elmlist *address;

struct elmlist{
    Buku info;
    address next;
};

struct list{
    address first;
};

address createElement(Buku addBuku);
void createBuku(Buku *addBuku);
int countElement(list *L);
void viewElement(list *L);
void insertFirst(list *L, address P);
void insertLast(list *L, address P);
void insertAfter (list *L, address P);

void deleteAfter(list *L, address P);
address searchElement(list *L,string idBook);
void searchData(list *L);

#endif // LIST_H_INCLUDED

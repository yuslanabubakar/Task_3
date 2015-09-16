#include <iostream>

using namespace std;

int main()
{
    // Inisialisasi Single Linked List
    address P; //Bikin Pointer P
    list mainList; // Bikin Variable List Utama
    mainList.first = NULL; // List Pertama diisi Null
    Buku dataBuku; // Tipe Bentukan untuk wadah Input Info

    cout << "Single Linked List Program - Kelompok 2"<<endl;
    cout << "MENU APPLICATION : 1. Insert First"<<endl;
    cout << "                   2. Insert After"<<endl;
    cout << "                   3. Insert Last"<<endl;
    cout << "                   4. Delete First"<<endl;
    cout << "                   5. Delete Last"<<endl;
    cout << "                   6. Delete After"<<endl;
    cout << "                   7. View List"<<endl;
    cout << "                   8. Search Element"<<endl;
    cout << endl;

    MenuLabel:
    cout << "Input Your Menu  : "; char menu;
    cin>>menu; cin.ignore(); cout << endl;
    switch (menu) {
      case '1' : createBuku(&dataBuku); P = createElement(dataBuku); insertFirst(&mainList, P); goto MenuLabel;
      case '7' : viewElement(&mainList); goto MenuLabel;
    return 0;
}

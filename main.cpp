#include <iostream>
#include "DLL.h"
using namespace std;

int main()
{
    infotype X;
    List L1,L2,L3;
    address P;
    string Judul;

    createList_1302220048(L1);
    createList_1302220048(L2);
    createList_1302220048(L3);

    cout << "Input playlist 1" << endl;

    // Data 1
    cout << "Masukan judul lagu: ";
    getline(cin,X.judulLagu);
    cout << "Masukan nama band: ";
    getline(cin,X.namaBand);
    cout << endl;

    createNewElmt_1302220048(X,P);
    insertFirst_1302220048(L1,P);

    // Data 2
    cout << "Masukan judul lagu: ";
    getline(cin,X.judulLagu);
    cout << "Masukan nama band: ";
    getline(cin,X.namaBand);
    cout << endl;

    createNewElmt_1302220048(X,P);
    insertLast_1302220048(L1,P);

    // Data 3
    cout << "Masukan judul lagu: ";
    getline(cin,X.judulLagu);
    cout << "Masukan nama band: ";
    getline(cin,X.namaBand);
    cout << endl;

    createNewElmt_1302220048(X,P);
    insertAfter_1302220048(L1,P,first(L1));
    showAll_1302220048(L1);


    // Playlist 2
    cout << "Input playlist 2" << endl;

    // Data 1
    cout << "Masukan judul lagu: ";
    getline(cin,X.judulLagu);
    cout << "Masukan nama band: ";
    getline(cin,X.namaBand);
    cout << endl;

    createNewElmt_1302220048(X,P);
    insertFirst_1302220048(L2,P);

    // Data 2
    cout << "Masukan judul lagu: ";
    getline(cin,X.judulLagu);
    cout << "Masukan nama band: ";
    getline(cin,X.namaBand);
    cout << endl;

    createNewElmt_1302220048(X,P);
    insertLast_1302220048(L2,P);

    // Data 3
    cout << "Masukan judul lagu: ";
    getline(cin,X.judulLagu);
    cout << "Masukan nama band: ";
    getline(cin,X.namaBand);
    cout << endl;

    createNewElmt_1302220048(X,P);
    insertAfter_1302220048(L2,P,first(L2));
    showAll_1302220048(L2);


    concat_1302220048(L1,L2,L3);
    showAll_1302220048(L3);

    cout << "Masukan judul lagu yang ingin di hapus: ";
    getline(cin,Judul);
    removeLagu_1302220048(Judul,L3);
    cout << endl;
    showAll_1302220048(L3);

    cout << "\nDelete First" << endl;
    deleteFirst_1302220048(L3,P);
    showAll_1302220048(L3);

    cout << "\nDelete Last" << endl;
    deleteLast_1302220048(L3,P);
    showAll_1302220048(L3);

    cout << "\nDelete After (prec = first(L))" << endl;
    deleteAfter_1302220048(L3,P,first(L3));
    showAll_1302220048(L3);

    return 0;

}

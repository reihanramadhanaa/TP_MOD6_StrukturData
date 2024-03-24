#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define info(p)p->info
#define next(p)p->next
#define prev(p)p->prev

using namespace std;

typedef struct elmtList *address;

struct infotype {
 string namaBand ;
 string judulLagu ;

};

struct elmtList {
    infotype info ;
    address prev ;
    address next ;

};
struct List {
  address first ;
  address last ;

};

bool isEmpty_1302220048(List L);
void createList_1302220048(List &L);
address createNewElmt_1302220048(infotype X, address &p);
void insertFirst_1302220048(List &L , address p);
void insertAfter_1302220048(List &L ,address &prec ,address &p);
void insertLast_1302220048(List &L , address p);
void deleteFirst_1302220048(List &L , address &p);
void deleteAfter_1302220048(List &L ,address &prec, address &p);
void deleteLast_1302220048(List &L , address &p);
void concat_1302220048(List L1,List L2, List &L3);
address findLagu_1302220048(string Judul , List L);
void removeLagu_1302220048(string Judul, List &L);
void showAll_1302220048(List L);

#endif // DLL_H_INCLUDED

#include <iostream>
#include "DLL.h"

using namespace std;


bool isEmpty_1302220048(List L){
  if (first(L)== NULL && last(L)== NULL ){
     return true;

  }else{

     return false;
  }
}

void createList_1302220048(List &L){
 first(L) = NULL ;
 last(L) = NULL ;

}

address createNewElmt_1302220048(infotype X, address &p){
 p = new elmtList;
 next(p) = NULL ;
 prev(p) = NULL ;
 info(p) = X ;

 return p ;

 }

void insertFirst_1302220048(List &L , address p){
 if (first(L) == NULL && last(L) == NULL ){
     first(L) = p;
     last(L) = p;

 }else{
    next(p) = first(L) ;
    prev(first(L)) = p;
    first(L) = p;
 }
}

void insertAfter_1302220048(List &L ,address &prec ,address &p){
  if (first(L) == NULL && last(L) == NULL ){
     first(L) = p;
     last(L) = p;
  }else{
   next(p)= next(prec) ;
   prev(p) = prec ;
   prev(next(prec))= p;
   next(prec)= p;

  }

}
void insertLast_1302220048(List &L , address p){
 if (first(L) == NULL && last(L) == NULL ){
     first(L) = p;
     last(L) = p;
  }else{
     next(last(L)) = p;
     prev(p) = last(L);
     last(L) = p;
    }
}
void deleteFirst_1302220048(List &L , address &p){

    p = first(L);

     if (first(L) != last(L)){
        first(L) = next(p);
        next(p)= NULL ;
        prev(first(L)) =NULL;
     }else{

      first(L) =NULL ;
      last(L) = NULL ;
     }
}

void deleteAfter_1302220048(List &L ,address &prec, address &p){
  p = next(prec) ;
  next(prec) = next(p);
  prev(next(p)) =prec ;
  next(p)= NULL;
  prev(p) = NULL ;

}

void deleteLast_1302220048(List &L , address &p){

 p = last(L);

     if (first(L) != last(L)){
        last(L) = prev(last(L));
        prev(p)= NULL ;
        next(last(L)) =NULL ;
     }else{

      first(L) =NULL ;
      last(L) = NULL ;
     }


}
void concat_1302220048(List L1,List L2, List &L3){
    address P;

    while (!isEmpty_1302220048(L1)) {
        deleteFirst_1302220048(L1,P);
        insertLast_1302220048(L3,P);
    }

    while (!isEmpty_1302220048(L2)) {
        deleteFirst_1302220048(L2,P);
        insertLast_1302220048(L3,P);
    }

}

address findLagu_1302220048(string Judul , List L){

    if (isEmpty_1302220048(L)) {
        return NULL;
    } else {
        address p = first(L);
        while (p != NULL) {
            if (Judul == info(p).judulLagu){
                return p;
            }
            p = next(p);
        }
    }
}


void removeLagu_1302220048(string Judul, List &L){
    address P;

    P = findLagu_1302220048(Judul,L);

    if (P == NULL){
        cout << "Maaf lagu " << Judul << " tidak ada dalam list!" << endl;

    } else {
        if (prev(P)==NULL){
            deleteFirst_1302220048(L,P);
        } else if (next(P)==NULL){
            deleteLast_1302220048(L,P);
        } else {
            address Q = prev(P);
            deleteAfter_1302220048(L,P,Q);
        }
   }
}

void showAll_1302220048(List L){
     address P = first(L);
    while (P != NULL) {
        cout << "Nama band: " << info(P).namaBand << " || Judul lagu: " << info(P).judulLagu << endl;
        P = next(P);
    }
    cout << endl;


}


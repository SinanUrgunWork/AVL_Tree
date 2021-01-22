/**
* kisi.cpp 
* kisiler alakalı fonksiyonlarin ici burda dolduruldu
* @course 1. Öğretim A
* @assignment Final
* 30/08/2020
*G171210015
* Sinan Urgun
*/
#include "kisi.h"
using namespace std;


kisi::kisi()
{
    isim = "";
    yas =  -1;
    kilo = -1;
}

kisi::kisi(string isim2, int yas2, int kilo2)
{
    isim = isim2;
    yas = yas2;
    kilo = kilo2;
   
}

bool operator!= ( kisi & lhs, kisi & rhs )
{
    if(lhs.isim == rhs.isim && lhs.yas == rhs.yas && lhs.kilo == rhs.kilo )
        return false;
    else
        return true;
}
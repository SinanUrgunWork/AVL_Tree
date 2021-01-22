/**
* kisi.h 
* kisi header dosyasidir
* @course 1. Öğretim A
* @assignment Final
* 30/08/2020
*G171210015
* Sinan Urgun
*/
#ifndef kisi_h
#define kisi_h

#include <iostream>
#include <string>
using namespace std;

class kisi{
    public:
        friend bool operator== (kisi & lhs, kisi & rhs );

        kisi();
        kisi(string isim2, int yas2, int kilo2);
        
        string isim;
        int kilo;
	    int yas;
};
#endif
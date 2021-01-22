/**
* AVLNode.h 
* avl agacindaki fonksiyonlarin icleri burda dolduruldu
* @course 1. Öğretim A
* @assignment Final
* 30/08/2020
*G171210015
* Sinan Urgun
*/
#ifndef AVLNode_h
#define AVLNode_h

#include <string>
#include <algorithm>
#include "Stack.h"
#include "kisi.h"
using namespace std;

class AVLNode {
    public:
        bool YeniOlusan;
        bool Donduruldu;
		int yukseklik;
        int SonDonus;
		int SonYukseklik;

        AVLNode *left;
        AVLNode *right;
		
        void PushNewState(int donum);
        void updateValues(int donum);
        void Print();
		int balanceFactor();

        AVLNode* left_Don(int donum);
        AVLNode* right_Don(int donum);
		AVLNode(kisi *value, int donum2);

        kisi* kisiAdres; 
        Stack stack;    
};

#endif
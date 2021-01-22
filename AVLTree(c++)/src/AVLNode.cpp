/**
* AVLNode.cpp
* avl agacindaki dugumun header dosyasidir
* @course 1. Öğretim A
* @assignment Final
* 30/08/2020
*G171210015
* Sinan Urgun
*/

#include "AVLNode.h"
using namespace std;

AVLNode::AVLNode(kisi *value, int donum2){

    kisiAdres = value; 
    stack = Stack();
	
	YeniOlusan = true;
    Donduruldu = false;
    yukseklik = 1;
    SonYukseklik = 1;
    SonDonus = donum2;

    right = nullptr;
	left = nullptr;
    
}

void AVLNode::Print()
{
    cout << kisiAdres->isim << " : "<<  kisiAdres->yas << " : " << kisiAdres->kilo << "   Yigit: "; 
    stack.Print(); 
    cout << endl; 
}

void AVLNode::PushNewState(int donum)
{
    
    if(SonDonus != donum)
    {   
        YeniOlusan = false;
    }

    
    if ( YeniOlusan == true )
    {
        SonYukseklik = yukseklik;
        return;
    } 
   
    if(Donduruldu == false)
    {
        SonYukseklik = yukseklik;
        stack.Push('D');
        return;
    }
    
    if(SonDonus != donum)
    {
       
        SonDonus = donum;

       
        if(SonYukseklik == yukseklik)
        {
            stack.Push('D');
        }
        else if(SonYukseklik < yukseklik)
        {
            stack.Push('Y');
        }
        else if(SonYukseklik > yukseklik)
        {
            stack.Push('A');
        }
    }
    
    SonYukseklik = yukseklik;

    this->Donduruldu = false;
}


void AVLNode::updateValues(int donum)
{ 
    yukseklik = max(left != nullptr ? left->yukseklik : 0,
            right != nullptr ? right->yukseklik : 0) + 1;  
}

int AVLNode::balanceFactor(){
    return (left != nullptr ? left->yukseklik : 0) - (right != nullptr ? right->yukseklik: 0);
}

AVLNode* AVLNode::left_Don(int donum){
    AVLNode* R = right;
    right = right->left;
    R->left = this;

    this->Donduruldu = true;
    R->Donduruldu = true;
    
    this->updateValues(donum);  
    R->updateValues(donum);     
    
    return R;
}

AVLNode* AVLNode::right_Don(int donum){
    AVLNode* L = left;
    left = left->right;
    L->right = this;

    this->Donduruldu = true;
    L->Donduruldu = true;
    
    this->updateValues(donum);  
    L->updateValues(donum);     
    
    return L;
}
/**
* AVL Tree.cpp
* AVL Tree fonksiyonlarinin dolduruldugu yer
* @course 1. Öğretim A
* @assignment Final
* 30/08/2020
*G171210015
* Sinan Urgun
*/
#include "AVLTree.h"
using namespace std;

AVLTree::AVLTree(){
    root = nullptr;
}


void AVLTree::insert(kisi *value)
{
    AVLNode **indirect = &root;                   
    vector<AVLNode**> path;                  
    
    while (*indirect != nullptr)                      
    {
        path.push_back(indirect);                     
        
        if ((*indirect)->kisiAdres->yas >= value->yas) 
            indirect = &((*indirect)->left);
        else                                          
            indirect = &((*indirect)->right);
    }
    
    *indirect = new AVLNode(value, turn);         
    
    path.push_back(indirect);                         
    
    balance(path);                                   
}


void AVLTree::balance(vector<AVLNode**> path)
{  
    reverse(path.begin(), path.end());  
    
    for (auto indirect: path)   
    {
        (*indirect)->updateValues(turn);                
        
        if ((*indirect)->balanceFactor() >= 2 && (*indirect)->left->balanceFactor() >= 0)    
            *indirect = (*indirect)->right_Don(turn);  
        
        else if ((*indirect)->balanceFactor() >= 2)                                         
        { 
            (*indirect)->left = (*indirect)->left->left_Don(turn);   
            *indirect = (*indirect)->right_Don(turn);
        }
        
        else if ((*indirect)->balanceFactor() <= -2 && (*indirect)->right->balanceFactor() <= 0)  
            *indirect = (*indirect)->left_Don(turn);     
        
        else if ((*indirect)->balanceFactor() <= -2) 
        {  
            (*indirect)->right = ((*indirect)->right)->right_Don(turn);
            *indirect = (*indirect)->left_Don(turn);
        }
    }     
}

void AVLTree::printPostOrder(AVLNode *node)
{
    if (node == NULL) 
        return; 

    
    printPostOrder(node->left); 

    
    printPostOrder(node->right); 

    
    node->Print();
}
void AVLTree::updateNodesPostOrder(AVLNode *node)
{
    if (node == NULL) 
        return; 
 
    updateNodesPostOrder(node->left); 

    updateNodesPostOrder(node->right);

    node->PushNewState(turn);
}
    

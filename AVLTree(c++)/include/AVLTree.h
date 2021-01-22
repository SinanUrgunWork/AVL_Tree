/**
* AVL Tree.h
* AVL Tree header dosyası
* @course 1. Öğretim A
* @assignment Final
* 30/08/2020
*G171210015
* Sinan Urgun
*/
#ifndef AVLTree_h
#define AVLTree_h

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include "AVLNode.h"
using namespace std;
class AVLTree {    
    public:
        AVLTree();
        
        AVLNode *root;

        int turn = 0; 

        void balance(vector<AVLNode**> path);

        void updateNodesPostOrder(AVLNode* node);
        
        void printPostOrder(AVLNode* node);

        void insert(kisi *value);
};

#endif 
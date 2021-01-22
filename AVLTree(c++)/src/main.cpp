/**
* main.cpp
* kodun main dosyasi file dan akuma kismi burda yapiliyor 
* @course 1. Öğretim A		       
* @assignment Final
* 30/08/2020
*G171210015
* Sinan Urgun
*/

#include <iostream>
#include <fstream>
#include "AVLTree.h"

using namespace std;

int main(int argc, const char * argv[])
{
    AVLTree *avlTree = new AVLTree(); 

    const string delimiter = "#"; 

    string line;
    
    ifstream myfile ("Kisiler.txt"); 
    
    if (myfile.is_open()) 
    {
        while ( getline (myfile,line) ) 
        {
            string isim2;
            int yas2;
            int kilo2;

            size_t pos = 0;
            
                 
          
            pos = line.find(delimiter);
            isim2 = line.substr(0, pos);
            line.erase(0, pos + delimiter.length());
        
            
            pos = line.find(delimiter);
            yas2 = stoi( line.substr(0, pos) );
            yas2 = 2020 - yas2;
            line.erase(0, pos + delimiter.length());
         
            
            kilo2 = stoi(line);
            
            
            kisi *kisiO = new kisi(isim2, yas2, kilo2); 
                           
            avlTree->insert(kisiO); 
        
            avlTree->updateNodesPostOrder(avlTree->root); 

            avlTree->turn += 1; 

            kisiO = nullptr;
            delete kisiO;
        }
        
        myfile.close();
    }
    else
        cout << "dosya yok"<<endl; 

    avlTree->printPostOrder(avlTree->root); 

    cin.ignore(std::cin.rdbuf()->in_avail());
    cout << "kapatmak icin enter a basin"<<endl;
    cin.ignore(); 
}

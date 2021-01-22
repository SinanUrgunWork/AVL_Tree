/**
* Stack.h 
* yigitin header dosyasidir
* @course 1. Öğretim A
* @assignment Final
* 30/08/2020
*G171210015
* Sinan Urgun
*/
#ifndef Stack_h
#define Stack_h

#include <iostream>
#include <cstring>
using namespace std;

//constant declaration
const unsigned int MAX_SIZE = 60;

class Stack {
public:
    Stack();
    void Push( char );
    char Pop();
    void Print();

private:
    char stack[MAX_SIZE+1];
    int top;
};

#endif
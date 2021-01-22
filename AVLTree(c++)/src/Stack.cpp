/**
* Stack.cpp 
* yigitin parametreler isle belirtilen fonksiyonlarinin kodlandigi yerdir dosyasidir
* @course 1. Öğretim A
* @assignment Final
* 30/08/2020
*G171210015
* Sinan Urgun
*/

#include "Stack.h"
using namespace std;

Stack::Stack()
{
  stack[0] = 'O';
  top = 1;
}

void Stack::Print()
{
  while (top > 0)
  {
      cout << Pop();
  }
}

void Stack::Push(char val)
{
  stack[top] = val;
  top = top + 1;
}

char Stack::Pop()
{
  top = top - 1;
  char temp = stack[top];
  stack[top] = '\0';
  return (temp);
}
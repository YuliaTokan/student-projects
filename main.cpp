#include <iostream>
#include <cmath>
#include "calculator.h"
using namespace std;
int main()
{
  setlocale(LC_ALL, "Russian");
  Calculator op;
  cout << "����i�� �����: ";
  while(op.is_finish())
  {
    float res = op.expr();
    cout << "���������: " << res << endl;
    cout<<endl;
  }
  cout<<"�i����";
  }







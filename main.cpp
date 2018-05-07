#include <iostream>
#include <cmath>
#include "calculator.h"
using namespace std;
int main()
{
  setlocale(LC_ALL, "Russian");
  Calculator op;
  cout << "Уведiть вираз: ";
  while(op.is_finish())
  {
    float res = op.expr();
    cout << "Результат: " << res << endl;
    cout<<endl;
  }
  cout<<"Кiнець";
  }







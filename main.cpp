#include <iostream>
#include <cmath>
#include "calculator.h"
using namespace std;
int main()
{
  setlocale(LC_ALL, "Russian");
  Calculator op;
  cout << "Óâåäiòü âèðàç: ";
  while(op.is_finish())
  {
    float res = op.expr();
    cout << "Ðåçóëüòàò: " << res << endl;
    cout<<endl;
  }
  cout<<"Êiíåöü";
  }

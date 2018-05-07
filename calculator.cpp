#include <iostream>
#include "calculator.h"
#include <cmath>
using namespace std;
float Calculator:: atom()
{
  int res = 0;
  for (;;)
  {
    lex = cin.get();
    if (lex >= '0' && lex <= '9')
      res = res * 10 + lex - '0';
    else
    {
      cin.putback(lex);
      return res;
    }
  }
}

float Calculator:: breaks()
{
  lex = cin.get();
  if (lex == '(')
  {
    float tree = expr();
    cin.get();
    return tree;
  }
  else
  {
    cin.putback(lex);
    return atom();
  }
}

float Calculator:: mul()
{
  float tree = breaks();
  for (;;)
  {
    lex = cin.get();
    if(lex=='^')
    {
      float y=tree;
      tree = pow(y,mul());
      return tree;
    }
      else
      {cin.putback(lex);
      return tree;}
    }
  }





float Calculator:: add()
{
  float tree = mul();
  for (;;)
  {
    lex = cin.get();
    switch (lex)
    {
    case '*':
      tree *= mul();
      break;
    case '/':
      tree /= mul();
      break;
    default:
      cin.putback(lex);
      return tree;
    }
  }
}

float Calculator::expr()
{
  float tree = add();
  for (;;)
  {
    lex = cin.get();
    switch (lex)
    {
    case '+':
      tree += expr();
      break;
    case '-':
      tree -= expr();
      break;
    default:
      cin.putback(lex);
      return tree;
    }
  }
}


bool Calculator:: is_finish()
{
    lex = cin.get();
    if(lex=='s')
    {
        return 0;
    }
    else {cout << "Óâåäiòü âèðàç: ";
        return 1;}
}

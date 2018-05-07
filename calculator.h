#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED
#include <iostream>
class Calculator{
    char lex;
    float tree;
    int N=26;

public:
    float expr();
    float add();
    float breaks();
    float atom();
    float mul();
    bool is_finish();
};
#endif // CALCULATOR_H_INCLUDED

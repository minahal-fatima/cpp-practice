#ifndef SALLY_H
#define SALLY_H

#pragma once

class sally
{
public:
    sally(int a,int b);
    void print();
    ~sally();

private:
    int regVar;
    const int constVar;
};

#endif
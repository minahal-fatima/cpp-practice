#ifndef BIRTHDAY_H
#define BIRTHDAY_H

#pragma once

class birthday
{
public:
    birthday(int m,int d,int y);
    void printDate();
    ~birthday();

private:
int month;
int day;
int year;

};

#endif
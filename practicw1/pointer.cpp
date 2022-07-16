#include<iostream>
using namespace std;

// void test(int var) {
//     var = 2;
// }

// void test2(int* var) {
//     *var = 2;
// }

int main()
{
    // int silly;
    // cout << &silly << endl;

    // int *sillypointer;
    // sillypointer=&silly;
    // cout << sillypointer << endl;

    // int var = 3;

    // test(var); // pas by value

    // cout << var << endl; 

    // test2(&var); // pass by ref

    // cout << var << endl;


    int bucky[5];
    int *bp0=&bucky[0];
    int *bp1=&bucky[1];
    int *bp2=&bucky[2];

    cout << "bp0 is at" << &bp0 << endl;
    cout << "bp1 is at" << &bp1 << endl;
    cout << "bp2 is at" << &bp2 << endl;

    return 0;
}
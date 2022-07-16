#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{

    // cout << rand();
    srand(time(0));
    for(int i=0; i<20; i++){
        cout << (1+rand()%6) << endl;
    }
    
}
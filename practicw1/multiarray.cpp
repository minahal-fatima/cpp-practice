#include<iostream>
using namespace std;
int main()
{
    // int array[2][3] ={{1,3,4},{7,8,9}};
    // cout << array[1][2];

    int Billy[2][3]={{2,3,4},{6,7,8}};
        for(int row=0; row<2; row++){
            for(int coloumn=0; coloumn<3; coloumn++){
                cout << Billy[row][coloumn]<< " " ;
            }
            cout << endl;
        }
    

    return 0;
}
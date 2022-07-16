#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    int num;
    int sum=0;
    do{
        cout << "enter a num: " << endl;
        cin >> num;
        sum = sum + num;
    }while(num>=0);

    cout << "the sum is: "<< sum << endl;

    // int x=1;
    // do{
    //     cout << x << endl;
    //     x++;
    // }while?(x<6);

}
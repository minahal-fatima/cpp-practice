#include<iostream>
using namespace std;
int main()
{
    // try{
    //     int momsage=45;
    //     int sonage=50;
    //     if(sonage>momsage){
    //         throw 99;
    //     }
    // }catch(int x){
    //     cout << "sonage can't greater than momsage_ERROR: "<< x<<endl;
    // }

    try{
        int num1;
        cout << "Enter first number: "<<endl;
        cin>>num1;

        int num2;
        cout << "Enter second number: "<<endl;
        cin>> num2;

        if(num2==0){
            throw 0;
        }

        cout <<num1/num2 <<endl;
    }catch(int x){
            cout << "Number can't devide by "<< x<<endl;
        }

    return 0;
}
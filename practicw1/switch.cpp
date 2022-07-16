#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: " ;
    cin >> age;

    switch(age){
        case 16:
          cout << "You are not allowed to drive a car" << endl;
          break;

        case 18:
          cout << "You are  allowed to drive a car" << endl;
          break;

          case 23:
            cout << "hey ! u can do " << endl;
            break;

        default:
          cout << "u can`t drive"<<endl;
    }



}
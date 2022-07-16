#include<iostream>
using namespace std;
int main()
{
    int age;
    int money;
    cout << "Enter ur age : ""\n";
    cin >> age;
    cout << "Enter ur money :""\n";
    cin >> money;

    if(age>23 || money>690){
        cout << "u r in" << endl;
    }
    return 0;
}
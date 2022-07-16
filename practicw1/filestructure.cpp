#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream Gamefile("players.txt");
    cout << "Enter your ID, Name, Money"<<endl;
    cout << "press ctrl+z to quit\n";

    int ID;
    string Name;
    double Money;

    while(cin >> ID >> Name >> Money){
        Gamefile<< ID << ' ' << Name << ' ' << Money<<endl;
    }

    // ifstream Gamefile("players.txt");

    // int ID;
    // string Name;
    // double Money;

    // while(Gamefile >> ID >> Name >> Money){
    //     cout << ID << ' ' << Name << ' ' << Money <<endl;
    // }
}
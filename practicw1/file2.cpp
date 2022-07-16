#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream objectfile("object.txt");
    cout << "Enter your name, power"<<endl;
    cout << "press ctrl+z to quit\n";

    
    string name;
    double power;

    while(cin >>  name >> power){
        objectfile<<  name << ' ' << power <<endl;
    }
}
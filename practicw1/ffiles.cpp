#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // ofstream buckyfile;
    // buckyfile.open("tuna.txt");
    // buckyfile<<"Mani and Minahal are best buddies:D"<<endl;
    // buckyfile.close();


    // easy way:
    ofstream buckysfile("mutton.txt");

    if(buckysfile.is_open()){
        cout << "file is open.."<<endl;
    }else{
        cout<<"you don't love mutton?"<<endl;
    }
    buckysfile << "hey! i love mutton...:D\n";
    buckysfile.close();
}
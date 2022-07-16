#include<iostream>
using namespace std;

int getwhatTheywant();
void displayitems(int x);

// main funtion
int main()
{
    int whatTheywant;
    whatTheywant =getwhatTheywant();

    while(whatTheywant != 4){
        switch(whatTheywant){
            case 1:
            displayitems(1);
            break;
             case 2:
            displayitems(2);
            break;
            case 3:
            displaysitems(3);
            break;
        }
        whatTheywant = getwhatTheywant();
    }

}

int getwhatTheywant(){
 int choice;
    cout << "1-plain items"<<endl;
    cout << "2-harmful items"<<endl;
    cout << "1-helpful items"<<endl;
    cout << "4-quit game"<<endl;

    cin >> choice;
    return choice;
}
//display items function
void displayitems(int x);
    ifstream objectfile("object.txt");
    string name;
    double power;

    if(x==1){
        while(objectfile >> name >> power){
            if(power==0){
                cout << name << ' ' << power<<endl;
            }
        }
    }
    if(x==2){
        while(objectfile >> name >> power){
            if(power>0){
                cout << name << ' ' << power <<endl;
            }
        }
    }
    if(x==3){
        while(objectfile >> name >> power){
            if(power<0){
                cout << name << ' ' << power <<endl;
            }
        }
    }
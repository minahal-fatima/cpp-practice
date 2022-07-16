#include<iostream>
using namespace std;

    class Firstmember{
        public:
        Firstmember(){FirstVar=0;}
        private:
        int FirstVar;

        friend void Firstfriend(Firstmember &Fmo);
    };
    void Firstfriend(Firstmember &Fmo){
        Fmo.FirstVar=88;
        cout << Fmo.FirstVar << endl;
    }

int main(){
    Firstmember bob;
    Firstfriend(bob);
}
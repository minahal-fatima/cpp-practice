#include<iostream>
using namespace std;

// void printSomething(int x){
//     cout << "my fav num is " << x << endl;
// }

// int main()
// {
//     printSomething(45);
//     return 0;
// }
// void printSomething(){
//     cout << "hello salman" << endl;
//     }

// parameters

int addNumbers(int x, int y){
    int answer=x + y;
    return answer;
}

int main(){
    cout << addNumbers(234, 890);
    return 0;
}
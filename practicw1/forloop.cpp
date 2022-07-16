#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    // for(int x=5; x<60; x+=5){
    //     cout << x << endl;
    // }

    // float a;
    // float p=10000;
    // float r = .01;
    
    // for(int day = 1; day <=20; day++){
    //     a = p * pow(1+r, day);
    //     cout << day << "-----" << a << endl;
    // }

// stop the loop if i is 5

//     for(int i; i<10; i++){
//         if(i==5){
//             break;
//         }
//     }
//     cout << i << "\n";
//     return 0;
// }

// when value is 4 jump to next  value:

        for (int a=0; a<10; a++){
            if(a==4){
              continue;
            }
            cout << a << "\n";
        }
}
#include<iostream>
using namespace std;

int main()
{
    // int a=1;
    // int number;
    
    // int total=0;
    // while(a<=5){
    //     cin >> number;
    //     total=total+number;
    //     a++;
    // }

    // cout << "your total is " << total << endl;

    int a;
    int sum=0;

    cout << "enter a num: " << endl;
    cin >> a;

    while(a>=0){
        sum=sum+a;
        cout << "enter a num" << endl;
        cin >> a;
    }
    cout << "the sum is"<< sum << endl;

    // int age;
    // int ageTotal=0;;
    // int numberofpersonentered=0;
    // cout << "enter first person age or -1 to quit " << endl;
    // cin >> age;
    // while(age != -1){
    //     ageTotal=ageTotal + age;
    //     numberofpersonentered ++;

    //     cout << "enter next person age or -1 quit" << endl;
    //     cin >> age;

    // }
    // cout << "number of person entered" << numberofpersonentered << endl;
    // cout << "average age:" << ageTotal/numberofpersonentered << endl;

    return 0;
}

// int y=30;
// cout << y-- << endl;
// cout << y << endl;
// }
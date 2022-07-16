#include<iostream>
using namespace std;
    
int main()
{
    // int a=50;
    // int b=90;
    // int c=100;
    // int sum;
    // int average;
    // int n=3;
    // sum=a+b+c;

    // average=sum/n;
    // cout << "the average is " << average << endl;


// sum of natural numbers

    int n;
    int sum=0;
    cout << "enter natural number"<< endl;
    cin >> n;
    while(n>0 && n!=-1){
        n++;
        sum=sum+n;
    }
    cout << "the sum of natural number is: " << sum << endl;

    return 0;
}
#include<iostream>
using namespace std;

bool checkPrime(int num) {
    bool isPrime = true;
    int b = 2;
    // loop until  to check if it's divisible by any of the numbers
    while (b < num) {
        if (num % b == 0) {
            isPrime = false;
        }
        b = b + 1;
    }
    return isPrime;
}

int main()
{
    // int a=1;
    // while(a!=5){
    // cout <<"mani is" << a << endl;
    // a=a+1;
    // }

// int a=1;
//     while(a<6){
//     cout << a << endl;
//     a++;
//     }

// table

    // int b;
    // int i=1;
    // cout << "Enter a num: ";
    // cin >> b;
    // while(i<=10){
    //     cout << b << "x" << i <<"=" << b*i << endl;
    //     i++;
        // b=b+2;
    // }

// primee nm

  int a = 1;

  while(a <= 100) {
   
    bool isPrime = checkPrime(a);
    if(isPrime) {
        cout << a << " is a prime number" << endl;
    }

    a = a + 1;
  }

// even numbers

//       int b=0;
//     while(b<=30){
//         cout << "prime numbers are" << b << endl;
//         b=b+2;
//     }

    return 0;
}
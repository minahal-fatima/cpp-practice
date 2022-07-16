#include<iostream>
using namespace std;
// template <class math>
// math addcrap(math a, math b){
//     return a+b;
// }

// int main()
// {
//     int a=2,  b=45,  z;
//     z=addcrap(a,b);
//     cout << z <<endl;

// }

template <class FIRST, class SECOND>

FIRST smaller(FIRST a, SECOND b){
    return smaller(a<b?a:b);
}

int main()
{
   int x=89;
   double y=78.99;
   cout << smaller(x,y) << endl; 
}
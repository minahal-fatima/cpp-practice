#include<iostream>
using namespace std;

// int tuna=89;

// int main()
// {
//     double tuna=90;
//     cout <<  tuna << endl;

// }

function overloading

  void printnumber(int x){
    cout << "hey! man this is integer" << x << endl;
  }
  void printnumber(float x){
    cout << "hey! man this is float" << x << endl;
  }

int main()
{
    int a=54;
    float b=32.55;

    printnumber(a);
        printnumber(b);
}


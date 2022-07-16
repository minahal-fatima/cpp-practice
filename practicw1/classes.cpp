#include<iostream>
#include<string>
using namespace std;

// class Boxclass{
//     public:
//         void printcrap(){
//             cout << "Billo" << endl;
//         }
// };

// int main()
// {
//     Boxclass Boxobject;
//     Boxobject.printcrap();
    
//     return 0;
// }

// class Boxclass{
//     public:
//       void setname(string x){
//         name= x;
//       }

//       string getname(){
//             return name;
//       }
//       private:
//          string name;
// };

// int main()
// {
//     Boxclass bo;
//     bo.setname("maniii");
//     cout << bo.getname();
//     return 0;
// }

template<class T>
class spunky{
  public:
  spunky(T x){
    cout << x << " is not a character"<<endl;
  }
};

template<>
class spunky<char>{
   public:
   spunky(char x){
   cout << x <<" is indeed a character" << endl;
  }
};



int main()
{
  spunky<int>obj1(5);
  spunky<double>obj2(8.99);
  spunky<char>obj3('M');
}
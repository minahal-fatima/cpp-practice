#include<iostream>
using namespace std;
template<class T>
    claass bucky{
        T first, second;
        public:
            bucky(T a,T b){
                first=a;
                second=b;
            }
            T bigger();
    };
    template <class T>
    T bucky<T>::bigger(){
        return (first>second?first:second);
    }
int main()
{
    bucky<int> bo(69, 105);
    cout << bo.bigger();

}
#include "sally.h"

sally::sally(int a,int b)
: regVar(a),
constVar(b)
{
}
void sally::print(){
    cout << "regular variable is: " << regVar << "const variable is: " << constVar << endl;
}

sally::~sally()
{

}
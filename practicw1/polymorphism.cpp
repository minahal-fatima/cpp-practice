#include<iostream>
using namespace std;

class Enemy{
    protected:
    int attackpower;
    public:
    void setattackpower(int a){
        attackpower=a;
    }
};

class Ninja: public Enemy{
    public:
    void attack()
    {cout << "i am ninja, - " << attackpower<<endl;}
};
class Monster: public Enemy{
    public:
    void attack()
    {cout << "i am monster, and i shall eat you!! - " << attackpower<<endl;}
};
int main()
{
    Ninja n;
    Monster m;
    Enemy *enemy1=&n;
    Enemy *enemy2=&m;
    enemy1->setattackpower(29);
    enemy2->setattackpower(99);
    n.attack();
    m.attack();

}
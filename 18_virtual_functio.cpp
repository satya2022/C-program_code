#include <iostream>
using namespace std;
class base
{
public:
    virtual void print()
    {
        cout << "i am form base class"<<endl;
    }
    void show()
    {
        cout << "i am form base class"<<endl;
    }
};
class dereived : public base
{
public:
    void print()
    {
        cout << "i am form dereived class"<<endl;
    }
    void show()
    {
        cout << "i am form dereived class"<<endl;
    }
};
int main()
{
    base *bptr;
    dereived d;
    bptr = &d;
    bptr->print();
    bptr->show();
    return 0;
}

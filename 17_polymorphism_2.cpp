
/*polymorphism  part-2 (function overriding)*/
// runtime polymorphism-this is also know as dynamic(or late)binding.
#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
        cout << "this ios super/parent class function  :"<<endl;
    }
};
class B : public A
{
public:
    void display()
    {
        cout << "this ios base/child  class function  :"<<endl;
    }
};
int main()
{
A obj;
obj.display();

B obj2;
obj2.display();
    return 0;
}

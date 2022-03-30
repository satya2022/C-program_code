/*HIerarchical_ inheritance
  B and C both inherits class A
*/

#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "constructor of A" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "constructor of B" << endl;
    }
};

class C : public A
{
public:
    C()
    {
        cout << "constructor of C" << endl;
    }
};
int main()
{
C obj;
    return 0;
}
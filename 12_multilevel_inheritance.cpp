/*multi level inheritance
C inherit B and B inerit A
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

class C : public B
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

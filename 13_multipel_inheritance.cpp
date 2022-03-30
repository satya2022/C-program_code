/*multiple  inheritance
C inherit A and B both 
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

class B 
{
public:
    B()
    {
        cout << "constructor of B" << endl;
    }
};

class C : public A, public B
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
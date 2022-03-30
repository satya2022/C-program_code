/*polymorphism  part-1 (function overloding)*/
/*
 polymorphism=we can define polymorphism as the ability of a 
message to be displayed in more than one form.

 A real-life example of polymorphism,
 a person at the same time can have different characteristics.
 Like a man at the same time is a father, a husband, an employee.
 So the same person posses different behavior in different situations. 
This is called polymorphism.
1)compile type polymorphism=this is also non as static(early)binding
*/
#include <iostream>
using namespace std;
class add
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        return a + b + c;
    }
};
int main()
{

    add obj;
    cout << "output is :" << obj.sum(20, 30) << endl;
    cout << "output is :" << obj.sum(20, 30, 68) << endl;
    return 0;
}

#include <iostream>
using namespace std;
class constructordemo
{
public:
    constructordemo()
    {
        cout << "this is form a constructor" << endl;
    }
};
int main()
{
    constructordemo obj;

    return 0;
}

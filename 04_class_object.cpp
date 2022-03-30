/*in this page we lerning classes and object
syntex of class
class class_name{};
*/
#include <iostream>
using namespace std;
class car
{
    char color[10];
    int speed;

public:
    void getdata(int distance, int fuel)
    {
        cout << "the car has covered" << distance << "and has consumed" << fuel << "l fule\n";
    }
}audi;
int main()
{
    car swift;

    swift.getdata(130, 7);
    audi.getdata(120,4);

    return 0;
}

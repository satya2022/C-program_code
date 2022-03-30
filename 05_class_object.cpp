/*in this page we lerning classes and object
syntex of class
class class_name{};
*/
// we can do same thing outside of class 
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
    // declearing
    void mileage(float distance,float fuel);
}audi;
// defineing out of class
void car::mileage(float d, float f)
{
float carmileage =d/f;
cout << "the car mileage is : ."<<carmileage<<"\n";

}
int main()
{
    car swift;

    swift.getdata(130, 7);
    audi.getdata(120,4);
    swift.mileage(120,32);

    return 0;
}

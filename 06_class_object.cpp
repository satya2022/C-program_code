/*in this page we lerning classes and object
syntex of class
class class_name{};
*/
// HOW TO ASSICE VARIABL in this tab
#include <iostream>
using namespace std;
class car
{
    // declearing variable
    char color[10];
    // when we use any variable then use first PUBLIC
public:
    int speed;

public:
    void getdata(int distance, int fuel)
    {
        cout << "the car has covered" << distance << "and has consumed" << fuel << "l fule\n";
    }
    void mileage(float distance, float fuel);
    // declearing function
    void carspeed()
    {
        cout << "the car speed is" << speed << "\n";
    }

} audi;

void car::mileage(float d, float f)
{
    float carmileage = d / f;
    cout << "the car mileage is : ." << carmileage << "\n";
}
int main()
{
    car swift;

    /*  swift.getdata(130, 7);
    audi.getdata(120,4);
    swift.mileage(120,32);
*/

    // defineing
    swift.speed = 50;
    swift.carspeed();

    return 0;
}

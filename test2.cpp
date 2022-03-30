#include<iostream>
using namespace std;
class  car
{
public:
void getdata(int distance, int speed,string drive){

    cout << "car cover distance is:"<< distance <<",speed is :"<< speed <<",drive by =" <<drive<<endl;
}

};

int main()
{
    car oady;
    oady.getdata(12, 60,"satya");
    return 0;
}

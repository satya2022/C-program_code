/*inheritance in c++*/
#include <iostream>
using namespace std;
class teacher
{
    public:
teacher(){
cout<<"hay,i am teacher"<<endl;
}
};
class mathteacher:public teacher
{
    public:
mathteacher(){
cout<<"i am mathteacher"<<endl;
}
};
int main()
{
   mathteacher obj;


    return 0;
}

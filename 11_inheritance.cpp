/*inheritance in c++
when i declear child class then we can accses parent and  parent classes variable*/

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
string collagename="youtube collage";
};
int main()
{
   mathteacher obj;
   cout<<"collagename is :"<<obj.collagename<<endl;


    return 0;
}
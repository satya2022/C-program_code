// DESTRUCTORS IN C++
/*when does the destructor get called?
A) destructor is automatically called when:
1)when program finished execution
2)when a scop(the{}parenthesis) containing  local variables  ends
*/

#include<iostream>
using namespace std;
class helloWorld{
    // constructor
    public:
    helloWorld(){
cout<<"constructor is called"<<endl;
    }
    // destructor
    ~helloWorld(){
cout<<"destructor is called"<<endl;
    }

    // member function
    // member function have returnb type

    void display(){
        cout<<"hello world form member function"<<endl;
    }
};
int main()
{
    helloWorld obj;//object created
    /* open down line and print member function*/
    
    obj.display();
    return 0;
}

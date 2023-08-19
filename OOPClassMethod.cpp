#include <iostream>
using namespace std;
//Class Method Example
class myClass{
    public:
    void myMethod(){
        cout<<"Hello World";
    }
};
int main(){
    myClass obj1;
    obj1.myMethod();
    return 0;
}
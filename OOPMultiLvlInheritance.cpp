#include <iostream>
using namespace std;
//Multi level inheritance example
class myClass{
    public:
    void myFunction(){
        cout<<"\nSome content in parent class\n";
    }
};
class myChild: public myClass{
    public:
    void myChildFunction(){
        cout<<"\nSome content in child class\n";
    }
};
class myGrandChild: public myChild{
    public:
    void myGrandChildFunction(){
        cout<<"\nSome content in grand child class\n";
    }
};

int main(){
    myGrandChild obj;
    obj.myFunction();
    obj.myChildFunction();
    obj.myGrandChildFunction();

    return 0;
}
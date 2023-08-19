#include <iostream>
using namespace std;

//my class
class myclass{
    public:
    int x;
    string y;
};

int main(){
    //create object
    myclass class1;
    class1.x=23;
    class1.y="Amjad Khan";
    cout<<"Number Stored in Class: "<<class1.x<<endl<<"Name Stored in Class: "<<class1.y;
    myclass class2;
    class2.x=24;
    class2.y="Munir Khan";
    cout<<endl<<"Number Stored in Class: "<<class2.x<<endl<<"Name Stored in Class: "<<class2.y;
  
    return 0;
}


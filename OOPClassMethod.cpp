#include <iostream>
using namespace std;
//Class Method Example InSide class defination
class Class1{
    public:
    void myMethod(){
        cout<<"Hello World From Class 1";
    }
};

//Class Method Example OutSide Class Defination
class Class2{
    public:
    void myMethod();
    //function overloading
    int myMethod(int x);
};
void Class2::myMethod(){
    cout<<"\nHello World from Class 2";
}
//function overloading
int Class2::myMethod(int x){
    return x;

}
int main(){
    Class1 obj1;
    Class2 obj2;

    obj1.myMethod();
    obj2.myMethod();
    cout<<endl<<obj2.myMethod(17);
    return 0;
}
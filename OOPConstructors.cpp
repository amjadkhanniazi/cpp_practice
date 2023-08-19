#include <iostream>
using namespace std;
//Class with condtructor
class Class1{
    public:
    Class1(){
        cout<<"Hello World From Constructor";
    }
};
//Class with Constructor of parameters
class Class2{
    public:
    int year;
    string make;
    string model;
    Class2(int y,string m,string mo){
        year=y;
        make=m;
        model=mo;
    }
};
//Class with outside defined constructor
class Class3{
    public:
    string model;
    Class3(string mo);
    void modelOutPut(string &model){
        cout<<endl<<model;
    }
};
Class3::Class3(string mo){
    model=mo;
}
int main(){
    //Creating object from class 1 constructor
    Class1 obj1;
    //Creating object from class 2 constructor
    Class2 obj2(2019,"Toyota","Corolla");
    cout<<endl<<obj2.make<<endl<<obj2.model<<endl<<obj2.year;

    Class2 obj3(2019,"Ford","Mustang");
    cout<<endl<<obj3.make<<endl<<obj3.model<<endl<<obj3.year;

    //Creating object from class 3 constructor
    Class3 obj4("Hondaaaa");
    obj4.modelOutPut(obj4.model);
    return 0;
}
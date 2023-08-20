#include <iostream>
using namespace std;
//Base class 1
class BaseClass1{
    public:
    void myFunction(){
        cout<<endl<<"Some Content from Base Class 1";
    }
    protected:
    int salary;
};
//Base Class 2
class BaseClass2{
    public:
    void myClass2Function(){
        cout<<endl<<"Some Content from Base Class 2";
    }
};
//Derived Class
class myChild: public BaseClass1, public BaseClass2{
    public:
    void setSalary(int x){
        salary = x;
    }
    int getSalary(){
        return salary;
    }

};
int main(){
    myChild obj;
    obj.myFunction();
    obj.myClass2Function();
    //obj.salary=15000; //will show error, because it is protected and can't be accessed from outside
    obj.setSalary(20000);
    cout<<endl<<"Salary: "<<obj.getSalary();
    return 0;
}
#include <iostream>
using namespace std;

//class with private attributes and public getters and setters
class Class1{
    private:
    int salary;
    public:
    void setSalary(int s){
        salary=s;
    }
    int getSalary(){
        return salary;
    }
};



int main(){
    Class1 obj1;
    obj1.setSalary(1000);
    cout<<obj1.getSalary();
    return 0;
}
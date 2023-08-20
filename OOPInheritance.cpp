#include <iostream>
using namespace std;

class vehicle{
    public:
    string brand="Ford";
    void honk(){
        cout<<"Tuut, tuut! \n";
    }
};
//derived class
class car: public vehicle{
    public:
    string model="Mustang";
};

int main(){
    car myCar;
    cout<<myCar.brand<<" "<<myCar.model<<endl;
    myCar.honk();
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    //structure is a user defined data type
    //it is used to group related data together
    struct mystrct{
        int x;
        string str;
        char ch;
        bool tf;
    };
    mystrct mystrcture;
    mystrcture.x=10;
    mystrcture.str="Hello";
    mystrcture.ch='A';
    mystrcture.tf=true;
    cout<<mystrcture.x<<endl;
    cout<<mystrcture.str<<endl;
    cout<<mystrcture.ch<<endl;
    cout<<mystrcture.tf<<endl;

    struct car{
        string brand;
        string model;
        int year;
    };
    car car1;
    car1.brand="BMW";
    car1.model="X1";
    car1.year=2019;

    car car2;
    car2.brand="Toyota";
    car2.model="Corolla";
    car2.year=2018;

    cout<<endl<<"Car-1"<<"\nBrand: "<<car1.brand<<endl<<"Model: "<<car1.model<<endl<<"Year: "<<car1.year;
    cout<<endl<<"\nCar-2"<<"\nBrand: "<<car2.brand<<endl<<"Model: "<<car2.model<<endl<<"Year: "<<car2.year;
    return 0;
}
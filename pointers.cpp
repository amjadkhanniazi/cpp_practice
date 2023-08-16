#include <iostream>
using namespace std;
int main(){
    int x=5;
    int &num=x;
    int *ptr=&x;
    int* ptr1=ptr;
    int* ptr2=ptr1;
    int* ptr3=ptr2;
    int* ptr4=ptr3;
    int* ptr5=ptr4;
    int* ptr6=ptr5;
    cout<<x<<endl;
    cout<<num<<endl;
    cout<<ptr<<endl;
    //dereferencing
    cout<<*ptr6<<endl;
    //dereferencing
    int deptr=*ptr6;
    cout<<endl<<deptr<<endl;

    //Modifying ptr value
    *ptr6=10;
    cout<<endl<<*ptr6<<endl;


    return 0;
}
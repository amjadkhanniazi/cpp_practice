#include <iostream>
using namespace std;
void swap(int &x,int &y);
int main(){
    int fnum=12;
    int snum=23;
    cout<<"Before swap: "<<endl;
    cout<<"First number: "<<fnum<<endl;
    cout<<"Second number: "<<snum<<endl;
    swap(fnum,snum);
    cout<<"After swap: "<<endl;
    cout<<"First number: "<<fnum<<endl;
    cout<<"Second number: "<<snum<<endl;
    return 0;
}
void swap(int &x, int &y){
    int z=x;
    x=y;
    y=z;
}
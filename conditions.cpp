#include <iostream>
using namespace std;
int main(){
    int time=20;
    if (time<22){
        cout<<"Good day.";
    }else{
        cout<<"Good evening.";
    }
    string results=(time>19)?"Good Day.":"Good Evening.";
    cout<<endl<<results;
    return 0;
}
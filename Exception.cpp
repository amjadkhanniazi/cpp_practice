#include <iostream>
using namespace std;
int main(){
    int age=17;
    try{
        if(age>=18){
            cout<<"\nYou Are old enough";
        } else{
            throw 505;
        }
    } catch(...){
        cout<<"\nYou are not old enough";
        
    }

    return 0;
}
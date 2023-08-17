#include <iostream>
using namespace std;
int sum(int x);
int fictorial(int x);
int digitcount(int x);
int main(){
    //sum call
    int result=sum(10);
    cout<<result;
    //fictorial call
    cout<<endl<<fictorial(5);
    //digitcount call
    cout<<endl<<digitcount(123445);
    return 0;
}
//sum
int sum(int x){
    if(x>0){
        return x+sum(x-1);
    }else{
        return 0;
    }
}
//fictorial
int fictorial(int x){
    if(x>0){
        return x*fictorial(x-1);
    }else{
        return 1;
    }
}
//digitcount
int digitcount(int x){
    if(x>0){
        return 1+digitcount(x/10);
    }else{
        return 0;
    }
}

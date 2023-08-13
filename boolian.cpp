#include <iostream>
using namespace std;
int main(){
    bool isCodingFun = 1;
    bool isFishTasty = 0;
    cout<<isCodingFun<<endl<<isFishTasty;
    //regular expressions
    int x=10;
    cout<<endl<<(x==11);
    //voting example
    int age=25;
    int limitage=18;
    if(age>=limitage){
        cout<<"\nYou are eligible to vote";
    }
    else{
        cout<<"\nYou are not eligible to vote";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=3;i++){
        cout<<"Outer Loop: "<<i<<endl;
        //nested for loop
        for(int j=0;j<4;j++){
            cout<<"Inner Loop: "<<j<<endl;
        }
    }
    return 0;
}
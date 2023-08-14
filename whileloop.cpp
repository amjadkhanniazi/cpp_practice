#include <iostream>
using namespace std;
int main(){
    int x=5;
    while(x<10){
        cout<<x<<endl;
        x++;
    }

    do{
        cout<<x<<endl;
        x++;
    }
    while(x<14);
    return 0;
}
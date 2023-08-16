#include <iostream>
using namespace std;
int main(){
    char arr[5]={'1','2','3','4','5'};
    for(char x:arr){
        //use break to jump out of loop
        if(x=='4'){
            continue;
            //break;
        }
        cout<<x<<endl;
    }
    return 0;
}
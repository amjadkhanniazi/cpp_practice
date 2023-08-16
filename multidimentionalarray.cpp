#include <iostream>
using namespace std;
int main(){
    //two dimentional Array
    string letters[2][4]={
        {"A","B","C","D"},
        {"E","F","G","H"}
    };
    //for loop through twoD array
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<letters[i][j]<<endl;
        }
    }
    //three dimentional Array
    string threeD[2][2][2]={
        {
            {"A","B"},
            {"C","D"}
        },
        {
            {"E","F"},
            {"G","H"}
        }
    };
    cout<<"\n"<<"Three D Array: \n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                cout<<threeD[i][j][k]<<endl;
            }
        }
    }
    return 0;
}
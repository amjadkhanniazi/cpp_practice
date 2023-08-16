#include <iostream>
using namespace std;
int main(){
    string cars[4]={"toyota","ford","honda","suzuki"};
    // int sizeofcars=sizeof(cars);
    // cout<<"Size of Cars Array: "<<sizeofcars<<endl;
    // //the auto keyword automatically identify the type
    // for (auto i : cars){
    //     cout<<i<<endl;
    // }
    //elements in an array
    int elements=sizeof(cars)/sizeof(string);
    cout<<endl<<elements<<endl;
    //for-each loop
    // for(string str:cars){
    //     cout<<str<<endl;
    // }
    //for loop
    for(int i=0;i<sizeof(cars)/sizeof(string);i++){
        cout<<i<<"="<<cars[i]<<endl;
    }
    return 0;
}
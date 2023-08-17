#include <iostream>
using namespace std;
void printarray(int arr[],int size);
int main(){
    int x[5]={1,2,3,4,5};
    printarray(x,5);
    return 0;
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
#include <iostream>
using namespace std;
class arrays{
public:
void arrayReverse(int arr[],int start,int end){
    int temp=0;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void printArray(int arr[],int end){
    int i=0;
    while(i<end){
        cout<<arr[i]<<endl;
        i++;
    }
}
};
int main(){
    int arr[]={1,2,3,4,5};
    int end=sizeof(arr)/sizeof(int);
    
    int start=0;
    arrays myArray;
    myArray.printArray(arr,end);

    myArray.arrayReverse(arr,start,end-1);
    myArray.printArray(arr,end);
    return 0;
}
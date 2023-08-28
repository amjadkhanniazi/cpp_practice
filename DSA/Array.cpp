#include <iostream>
using namespace std;
class arrays{
public:
//reverse array
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
//Reverse Array Using Reccursion
void arrayReverseReccursion(int arr[],int start, int end){
    if(start>=end){
        return;
    }
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    arrayReverseReccursion(arr,start+1,end-1);
}
//Array Rotation
void arrayRotationRightShift(int arr[],int start, int end){
    int temp=arr[end];
    for(int i=end;i>start;i--){
        arr[i]=arr[i-1];
    }
    arr[start]=temp;
}
//print array
void printArray(int arr[],int end){
    int i=0;
    while(i<end){
        cout<<arr[i]<<endl;
        i++;
    }
}
};
//main function
int main(){
    int arr[]={1,2,3,4,5};
    int end=sizeof(arr)/sizeof(int);
    
    int start=0;
    arrays myArray;

    myArray.printArray(arr,end);
    //reverse array
    myArray.arrayReverse(arr,start,end-1);
    myArray.printArray(arr,end);
    //Reverse Array Using Reccursion
    myArray.arrayReverseReccursion(arr,start,end-1);
    myArray.printArray(arr,end);
    //Array Rotation
    myArray.arrayRotationRightShift(arr,start,end-1);
    myArray.printArray(arr,end);
    return 0;
}
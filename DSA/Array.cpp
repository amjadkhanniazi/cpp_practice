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
    cout<<"\nArray is: ";
    while(i<end){
        cout<<arr[i]<<", ";
        i++;
    }
}
};

//Array Sorting Algos
class sortArray{
public:
//selection sort
void selectionSort(int arr[],int end){
    int min=0;
    for(int i=0;i<end;i++){
        min=i;
        for(int j=i+1;j<end;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
// bubble sort
void inertionSort(int arr[],int end){
    for(int i=1;i<end;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
};
//main function
int main(){
/*    int arr[]={1,2,3,4,5};
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
    myArray.printArray(arr,end);*/

    int arr[]={3,6,1,9,2,5};
    int end=sizeof(arr)/sizeof(int);
    sortArray srtArr;
    srtArr.inertionSort(arr, end);
    //srtArr.selectionSort(arr,end);*/
    arrays myArray;
    myArray.printArray(arr,end);
    return 0;
}
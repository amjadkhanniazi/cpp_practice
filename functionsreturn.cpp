#include <iostream>
using namespace std;
int myfunc(int x);
int sum(int x, int y);
int main(){
    cout<<myfunc(23);
    int x=sum(2,3);
    cout<<endl<<"Sum is: "<<x;
    return 0;
}
int myfunc(int x){
    return 5+x;
}

//return sum
int sum(int x, int y){
    return x+y;
}
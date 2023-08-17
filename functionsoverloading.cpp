#include <iostream>
using namespace std;
int plusfunc(int x, int y);
int plusfunc(float x, float y);
string plusfunc(string x, string y);
int main(){
    int x=plusfunc(2,3);
    float y=plusfunc(2.3f,3.4f);
    string z=plusfunc("Hello ","World!");
    cout<<x<<endl<<y<<endl<<z;
    return 0;
}

int plusfunc(int x, int y){
    return x+y;
}
int plusfunc(float x, float y){
    return x+y;
}
string plusfunc(string x, string y){
    return x+y;
}
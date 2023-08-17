#include <iostream>
using namespace std;
void fname(string fname="Sameer");//a parameter with default value is known as optional parameter

int main(){
    string fullname;
    fullname="Amjad";
    fname(fullname);//fullname or Amjad in this case is argument
    fname();
    return 0;
}
void fname(string fname){//within brackets it is called parameters
    cout<<fname<<"\n";
}
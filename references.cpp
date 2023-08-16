#include <iostream>
using namespace std;
int main(){
    string food="Pizza";
    string &meal=food;
    cout<<food;
    cout<<endl<<meal;

    //memory address
    cout<<endl<<&food;
    return 0;
}
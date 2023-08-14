#include <iostream>
using namespace std;
int main(){
    int day=800;
    switch (day)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:{
        cout<<"Thursday";
        break;
    }
    default:
        cout<<"Looking forward to the weekend";
        break;
    }
    return 0;
}
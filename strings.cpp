#include <iostream>
using namespace std;
int main(){
    string s1 = "Hello \"world\"";
    cout<<"length of string is: "<<s1.length();
    cout<<"\nlength of string is: "<<s1.size();
    cout<<endl<<s1[0];
    cout<<endl<<s1.at(0);
    cout<<endl<<s1.front();
    cout<<endl<<s1.back();
    cout<<endl<<s1.append("!");
    s1[0]='J';
    cout<<endl<<s1;
    cout<<"\nType your name: ";
    getline(cin,s1);
    cout<<endl<<s1;
    return 0;
}
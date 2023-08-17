#include <iostream>
using namespace std;
void person(string fname, int age=18);
int main()
{
    person("Sameer", 20);
    person("Amjad",24);
    person("Ammar");
    return 0;
}
void person(string fname,int age){
    cout<<fname<<" is "<<age<<" years old."<<endl;
}
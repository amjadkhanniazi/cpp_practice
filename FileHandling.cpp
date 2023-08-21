#include <iostream>
#include <fstream>
using namespace std;
int main(){
    //creating a file and writing to that file
    ofstream myFile("File1.txt");
    myFile<<"This is the First Line.\n";
    myFile<<"This is the Second Line.\n";
    myFile.close();
    //reading from the file
    ifstream myReadFile("File1.txt");
    string lineRead;
    while (getline(myReadFile,lineRead))
    {
        cout<<lineRead;
    }
    myReadFile.close();
    //adding another line at the end
    ofstream myFile2("File1.txt",ios::app);
    myFile2<<"\nThis is the Third Line.\n";
    myFile2.close();
    //reading from the file
    ifstream myReadFile2("File1.txt");
    string lineRead2;
    while(getline(myReadFile2,lineRead2)){
        cout<<endl<<lineRead2;
    }
    

    return 0;
}
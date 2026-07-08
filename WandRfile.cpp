#include<iostream>
#include<fstream>
using namespace std;
int main (){
    fstream file;
    file.open("data.txt",ios::out);
    file<<"welcome to c++";
    file.close();
    file.open("data.txt",ios::in);
    string str;
    getline(file,str);
    cout<<str;
    file.close();
    return 0;
}
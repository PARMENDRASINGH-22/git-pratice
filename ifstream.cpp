#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("student.txt");
    string str;
    getline(fin,str);
    cout<<str;
    fin.close();
    return 0;

    
}
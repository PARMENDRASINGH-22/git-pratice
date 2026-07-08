#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout("data.txt");
    cout<<"initial position=";
    cout<<fout.tellp()<<endl;
    fout<<"hello";
    cout<<"current position=";
    cout<<fout.tellp();
    fout.close();
    return 0;
}
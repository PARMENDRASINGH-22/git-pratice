#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("data.txt");
    cout<<"initial position="<<fin.tellg()<<endl;
    char ch;
    fin.get(ch);
    cout<<"after reading one character=";
    cout<<fin.tellg();
    fin.close();
    return 0;

}
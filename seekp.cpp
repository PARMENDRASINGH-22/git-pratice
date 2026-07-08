#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file("data.txt",ios::in|ios::out);
    file.seekp(3);
    file<<"x";
    file.close();
    return 0;
}
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("data.txt",ios::app);
    file<<"\n New data added";
    file.close();
    cout<<"data appended";
    return 0;
}
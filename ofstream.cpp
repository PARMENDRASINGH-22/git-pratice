#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout("student.txt");
        fout<<"hello student";
fout.close();
cout<<"data written sucessfully";
return 0;
    }

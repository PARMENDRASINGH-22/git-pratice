#include<iostream>
#include<fstream>
using namespace std;
class Student{
    public:
    int roll;
    char name[20];
};
int main(){
    Student s;
    cout<<"enter roll:";
    cin>>s.roll;
    cout<<"enter name:";
    cin>>s.name;
    ofstream fout("Student.dat",ios::binary);
    fout.close();
    cout<<"record saved";
    return 0;
}
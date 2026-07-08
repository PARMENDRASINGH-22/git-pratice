#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
    void getData(){
        cout<<"enter name:";
        cin>>name;
        cout<<"enter roll no:";
        cin>>rollno;
    }
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"roll no:"<<rollno<<endl;

    }
};
int main(){
    Student s;
    s.getData();
    s.display();
    return 0;
}
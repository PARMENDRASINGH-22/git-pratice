#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    float marks;
    Student(string n,int r,float m){
    name=n;
    roll=r;
    marks=m;
    }
    void display(){
        cout<<"name="<<name<<endl;
        cout<<"roll no="<<roll<<endl;
        cout<<"marks="<<marks<<endl;

    }
};
int main(){
    Student s("rahul",15,257);
    s.display();
    return 0;
}

#include<iostream>
using namespace std;
class Student {
    public:
    int roll;
    string name;
    void getData(){
        cout<<"enter roll:";
        cin>>roll;
        cout<<"enter Name:";
        cin>>name;
    }
    void display(){
        cout<<"roll="<<roll<<endl;
        cout<<"name="<<name<<endl;
    }
};
int main(){
        Student s;
        s.getData();
        s.display();
        return 0;
    
}
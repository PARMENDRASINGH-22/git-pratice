#include<iostream>
using namespace std;
class Student{
    public:
    int roll;
    string name;
    float marks;
    Student(){
        cout<<"default constructor"<<endl;
        
    }
    Student(int r,string n,float m){
        roll=r;
        name=n;
        marks=m;
        cout<<"roll no:"<<r<<endl;
        cout<<"name:"<<n<<endl;
        cout<<"marks:"<<m<<endl;
    }
Student(const Student&s){
    cout<<"this is copy constructor"<<endl;
    roll=s.roll;
    name=s.name;
    marks=s.marks;
}
void display(){
    cout<<"roll:"<<roll<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"marks:"<<marks<<endl;
}

        
    
};
int main(){
    Student s1;
    cout<<"this is parameterrized consructor"<<endl;
    Student s2(23,"piyush",75.0);
    Student s3=s2;
    s3.display();
    return 0;
}

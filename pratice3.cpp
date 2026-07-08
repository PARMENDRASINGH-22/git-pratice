#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int roll;
    float marks;
    Student(){
        cout<<"default constructor "<<endl;
    }
    Student(int r,string n,float m){
        roll=r;
        name=n;
        marks=m;
        cout<<"roll no:"<<r<<endl;
        cout<<"name:"<<n<<endl;
        cout<<"marks:"<<m<<endl;
    }
    Student(int r){
        roll=r;
        cout<<"roll no:"<<r<<endl;

    }
    
};
int main(){
    Student s1;
    cout<<"this is first parameterized constructor"<<endl;
    Student s2(123,"piyush",75);
    
    cout<<"this is second parameterized constructor"<<endl;
    Student s3(2245);
    return 0;
}
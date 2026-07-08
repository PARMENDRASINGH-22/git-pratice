#include<iostream>
using namespace std;
class Student{
    private:
    int roll;
    string name;
    public:
    Student (int r,string n){
        roll=r;
        name=n;

    }
Student(const Student &s){
    roll=s.roll;
    name=s.name;
    cout<<"copy constructor called"<<endl;

}
void display(){
     cout<<"roll no="<<roll<<endl;
     cout<<"Name="<<name<<endl;

}
};
int main(){
    Student s1(23,"Kunal");
    Student s2=s1;
    s1.display();
    s2.display();
    return 0;
}
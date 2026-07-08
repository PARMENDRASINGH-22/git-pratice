#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    void getData(){
        cout<<"enter name= ";
        cin>>name;
        cout<<"enter roll= ";
        cin>>roll;
    }
    void display(){
        cout<<"roll no:"<<roll<<endl;
        cout<<"name:"<<name<<endl;
    }
};
int main (){
    Student s[5];
    cout<<"enter detail of five student:"<<endl;
    for(int i=0;i<5;i++){
    cout<<"student "<<i+1<<endl;
    s[i].getData();
}
cout<<"displaying stdent detail"<<endl;
for(int i=0;i<5;i++){
    cout<<"student "<<i+1<<endl;
    s[i].display();
}
return 0;

}
#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    string name;
    float salary;
    void getData(){
        cin>>id>>name>>salary;
    }
    void show(){
        cout<<"Id="<<id<<endl;
        cout<<"Name="<<name<<endl;
        cout<<"Salary="<<salary<<endl;

    }
};
int main(){
    Employee e;
    e.getData();
    e.show();
    return 0;
}

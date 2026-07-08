#include<iostream>
using namespace std;
class Base{
    public:
    void show(){
        cout<<"base class function";
    }
};
class Derived: public Base{
    public:
    void show(){
        cout<<"Derived class function";
    }
};
int main (){
    Derived d;
    d.show();
    return 0;
}
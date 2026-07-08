#include<iostream>
using namespace std;
class Demo{
    public:
    void show(){
        cout<<"No argument"<<endl;

    }
    void show(int x){
        cout<<"value="<<x<<endl;

    }
};
int main (){
    Demo d;
    d.show();
    d.show(10);
    return 0;
}
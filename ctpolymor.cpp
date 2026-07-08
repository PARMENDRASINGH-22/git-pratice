#include<iostream>
using namespace std;
class Demo{
    public:
    void show(int x){
        cout<<"Integer="<<x<<endl;

    }
    void show(double y){
        cout<<"Double="<<y;

    }
};
int main(){
    Demo d;
    d.show(1);
    d.show(124.6);
    return 0;

}
#include<iostream>
using namespace std;
class Demo{
    public:
    int x;
    void setData(int x){
        this->x=x;
    }
    void show(){
        cout<<x;

    }
};
int main(){
    Demo d;

    d.setData(50);
    d.show();
    return 0;

}
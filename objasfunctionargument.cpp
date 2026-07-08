#include<iostream>
using namespace std;
class Demo{
    public:
    int num;
    Demo(int n){
        num=n;

    }
};
void display(Demo d){
    cout<<d.num;
}
int main(){
    Demo d(123);
    display(d);
    return 0;
}
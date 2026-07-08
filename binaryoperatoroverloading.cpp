#include<iostream>
using namespace std;
class Demo {
    public:
    int num;
    Demo(int n){
        num=n;
    }
    Demo operator-(Demo d)
    {
        return Demo(num-d.num);
    }
    void display(){
        cout<<num;

    }
};
int main(){
    Demo d1(45),d2(43);
    Demo d3=d1-d2;
    d3.display();
    return 0;
}



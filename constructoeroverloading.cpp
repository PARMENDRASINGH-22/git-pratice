#include<iostream>
using namespace std;
class Demo{
    public:
    Demo(){
        cout<<"default constructor"<<endl;

    }
    Demo(int x){
        cout<<"parameterized constructor"<<x;


    }
};
int main(){
    Demo d1;
    Demo d2(100);
    return 0;
}
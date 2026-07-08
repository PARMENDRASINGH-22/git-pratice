#include<iostream>
using namespace std;
class Complex{
    public:
    int real,img;
    Complex(int r, int i){
        real=r;
        img=i;

    }
    Complex operator+(Complex c){
        return Complex (real+c.real,img+c.img);

    }
    void display(){
        cout<<real<<"+"<<img<<"i";

    }
};
int main(){
    Complex c1(4,5),c2(3,2);
    Complex c3=c1+c2;
c3.display();
}
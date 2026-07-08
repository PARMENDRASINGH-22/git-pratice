#include<iostream>
using namespace std;
class Complex{
    public:
    int real , imag;
    Complex(int r=0, int i=0){
        real=r;
        imag=i;
    }
    Complex add(Complex c){
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main(){
    Complex c1(3,4);
    Complex c2(3,3);
    Complex c3 = c1 .add(c2);
    cout<<"First Complex no: ";
    c1.display();
    cout<<"second Complex no: ";
    c2.display();
    cout<<"sum: ";
    c3.display();
    return 0;

}
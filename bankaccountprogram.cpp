#include<iostream>
using namespace std;
class Bank{
    float balance;
    public:
    void deposite(float amt)
    {
        balance+=amt;

    }
    void show(){
        cout<<"balance="<<balance;
    }
    Bank(){
        balance=0;
    }
};
int main(){
    Bank b;
    b.deposite(5000);
    b.show();
    return 0;
}
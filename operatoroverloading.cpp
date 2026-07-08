#include<iostream>
using namespace std;
class Test{
    public:
    int num;
Test (int x=0){
    num=x;
}
Test operator +(Test t){
    Test temp;
    temp.num=num+t.num;
    return temp;

}
void display(){
    cout<<"num";
    
}
};
int main (){
    Test t1(12), t2(34);
    Test t3=t1+t2;
    t3.display();
    return 0;
}
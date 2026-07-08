#include<iostream>
using namespace std;
class Area{
    public:
    void area(int side){
        cout<<"area of square="<<side*side<<endl;

    }
    void area(int lenghth,int breadth){
        cout<<"area of rectangle="<<lenghth*breadth<<endl;
    }
    void area(float radius){
        cout<<"area of circle= "<<3.14*radius*radius<<endl;
    }
};
int main(){
    Area a;
    a.area(5);
    a.area(5,6);
    a.area(5.0f);
    return 0;

}
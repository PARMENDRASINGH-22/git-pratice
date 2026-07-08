#include<iostream>
using namespace std;
class Student{
    public:
    int marks;
    public:
    void setMarks(int m){
        marks=m;
    }
    int getMarks(){
        return marks;
    }
};
int main(){
    Student s;
    s.setMarks(98);
    cout<<"Marks="<<s.getMarks();
    return 0;
}




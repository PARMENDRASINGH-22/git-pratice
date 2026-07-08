#include<iostream>
using namespace std;
class Student{
    public:
    int roll;
    void getData(){
        cin>>roll;

    }
    void show(){
        cout<<"roll="<<roll<<endl;

    }
};
int main(){
    Student s[3];
    for (int i=0;i<3;i++)
    s[i].getData();
for(int i=0;i<3;i++)
s[i].show();
  return 0;

}
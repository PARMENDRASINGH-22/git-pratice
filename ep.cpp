#include<iostream>
using namespace std;
int main(){
    try{
        int a=13,b=0;
        if(b==0){
        throw"division by zeop is not allowed ";
        }
        cout<<a/b;

    }
    catch(const char*mesg){
        cout<<"problem caught :"<<mesg;
    }
    return 0;
}
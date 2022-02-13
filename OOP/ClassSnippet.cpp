#include<iostream>
#include "testheader.h"
using namespace std;

class rectangle :public vi,public cost{
    typedef int cm;
    public:
    cm length,breath;
    rectangle(){
        length=10;
        breath=20;
        cout<<"Rectange class is created"<<endl;
    }
    //used to pass the parameter to the parent constructor
    rectangle(int a) : cost(a){  
    }
    int area(){
        return length*breath;
    }
};

int main(){
    vi v;
    rectangle r1(10);
    v.print("This is a sample");
    r1.print("This is a sample from inheritance");
    
    cout<<"Enter the length:";
    cin>>r1.length;
    cout<<"Enter the breath:";
    cin>>r1.breath;
    cout<<"Cost for painting is "<<r1.calculateamount(r1.area());

}
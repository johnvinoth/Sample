#include<iostream>
using namespace std;

class rectangle{
    typedef int cm;
    public:
    cm length,breath;
    rectangle(){
        length=10;
        breath=20;
        cout<<"Rectange class is created"<<endl;
    }
    int area(){
        return length*breath;
    }
};

int main(){
    rectangle r1;
    cout<<"Enter the length:";
    cin>>r1.length;
    cout<<"Enter the breath:";
    cin>>r1.breath;
    cout<<r1.area();

}
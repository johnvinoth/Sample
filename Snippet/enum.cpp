#include<iostream>
using namespace std;

int main(){
    //enum assign the value from 0 and so on like 0,1
    enum color {orange,red,blue} c;
    //enum is assigned with the value 5 and hence the value assign is 0,5,6 and so on
    enum mobile{apple,oneplus=5,samsumg} d;
    c=red;
    //typeof used to define userdefined variables
    typedef int feet;
    feet sizeofbedroom=100;
    cout<<"The value of c is "<<c<<endl<<"size of bedroom is "<<sizeofbedroom;

}
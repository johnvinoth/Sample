#include<iostream>
using namespace std;

int main(){
    int a=0;
    int b=1;
    for(int i=0;i<10;i++){
        int temp = a+b;
        cout<<temp<<endl;
        a=b;
        b=temp;

    }
}
#include<iostream>
#include "testheader.h"
using namespace std;

vi::vi(){
    cout<<"A vi class is created";
};
void vi :: print(string message){
    cout<<endl<<message<<endl;
};



cost::cost(){
    cout<<"Cost base is called ";
};
cost::cost(int amount){
    cost::baseamount=amount;
};
int cost::calculateamount(int amount){
    return amount*cost::baseamount;
};
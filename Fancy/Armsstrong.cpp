#include<iostream>
#include<cmath>
using namespace std;
int numberofdigit(int a){
    int count=0;
    while(a>0){
        count++;
        a/=10;
    }
    cout<<"The number of digit is:"<<count<<endl;
    return count;
}




int main(){
    int number = 548834;
    int nodigit = numberofdigit(number);
    int compare=number;
    int count=0;
    while(compare>0){
        int temp1=compare%10;
        count +=pow(temp1,nodigit);
        compare/=10;
    }
    if(count == number){
        cout<<"The number:"<<number<<" Is an Armstrong number";
    }
    else{
        cout<<"The number:"<<number<<"Is not an Armsstrong number";
    }
    
}
#include<iostream>
using namespace std;

int main(){
    int number;
    int sum=0;
    cout<<"Enter the number to be added:";
    cin>>number;
    while(number>0){
        int temp = number%10;
        sum+=temp;
        number/=10;
    }
    cout<<"the sum of the number is "<<sum;

}
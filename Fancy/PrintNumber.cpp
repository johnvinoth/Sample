#include<iostream>
using namespace std;

void printarray(int size,int a[]){
    int choice;
    cout<<"Enter your choice to print in reverse \n1.yes \n2.no";
    cin>>choice;
    if(choice==1){
        for(int i=0;i<size;i++){
            cout<<a[i]<<"-->";
        }
    }
    else{
        for(int i=size-1;i>=0;i--){
            cout<<a[i]<<"-->";
        }
    }
}

int main(){
    int number;
    int arr[100];
    cout<<"Enter the number you want ";
    cin>>number;
    int count=0;
    while(number>0){
        int temp = number%10;
        number/=10;
        arr[count]=temp;
        count++;
        
    }
    cout<<"The number of digit is:"<<count;
    printarray(count,arr);

}
#include<iostream>
using namespace std;


void insertionsort(int a[],int size){
     void printarray(int arr[],int);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printarray(a,size);
}
void printarray(int a[],int size){
    int i=0;
    while(i<size){
        cout<<a[i]<<endl;
        i++;
    }
}
int main(){
    int a[100],size;
    cout<<"Enter the number of elements:";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the value for the :"<<i+1<<" Element:";
        cin>>a[i];
    }
    insertionsort(a,size);

}
#include<iostream>
using namespace std;
int compare (int a,int b){
   return (a>b)? a : b;

}
int comparethree(int a,int b,int c){
   return (a>b) ? ((a>c) ? a:c) : ((b>c) ? b : c);
}


int main(){
    int a,b;
    a=10;
    b=20;
    cout<<compare(a,b)<<endl;
    cout<<comparethree(10,20,30)<<endl;
    cout<<comparethree(10,30,20)<<endl;
    cout<<comparethree(30,20,10)<<endl;
}

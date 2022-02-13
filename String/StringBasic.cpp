#include<iostream>
#include<string>
using namespace std;
void printstringusingiterator(string a){
    int choice=0;
    cout<<"Enter the choice:"<<endl<<"1.forward"<<endl<<"2.backward:";
    cin>>choice;
    if(choice == 1){
        for(std::string::iterator it=a.begin(); it != a.end(); it++)
        cout<<*it;
    cout<<endl;
    }
   else if(choice == 2){
       for(std::string::reverse_iterator i=a.rbegin(); i != a.rend(); i++)
       cout<<*i;
    cout<<endl;   
   }
   else{
       cout<<"Enter the correct mentioned value";
   }
    
}
void stringcopyswap(string a){
    cout<<"The length of the string is "<<a.size()<<endl;
    char ch[a.size()];
    a.copy(ch,a.size(),0);
    //printing the char[]
    for(int i = 0;i<a.size() ;i++){
        cout<<ch[i]<<endl;
    }
    string b = "swaparoo";
    b.swap(a);
    cout<<"The value in b is :)"<<b<<endl;
    cout<<"The value in a is ;)"<<a<<endl;
}
int main(){
    string a;
    cout<<"Enter some string value:";
    getline(cin,a);
    cout<<a;
    printstringusingiterator(a);
    stringcopyswap(a);

}
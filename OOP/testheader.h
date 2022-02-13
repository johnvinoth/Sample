#include<iostream>
#include<string>
using namespace std;

class vi{
    public:
    vi();
    void print(string );
};

class cost{
    public:
    int baseamount = 3;
    cost();
    cost(int amount);
    int calculateamount(int );
};
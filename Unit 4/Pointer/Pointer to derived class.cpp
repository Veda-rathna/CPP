#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void output(){
        cout<<"This is base class\n";
    }
};
class B:public A{
    int b;
    public:
    void output(){
        cout<<"This is derived class\n";
    }
    void output2(){
        cout<<"Check Check";
    }
};
int main(){
    A b,*bptr;
    bptr=&b;
    bptr->output();

    B d;
    bptr = &d;
    bptr->output();

    B *dptr;
    dptr = &d;
    dptr->output();

    ((B*)bptr)->output();
}
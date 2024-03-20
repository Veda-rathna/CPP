#include<iostream>
using namespace std;
class A{
    int a;
    public:
    virtual void output(){
        cout<<"This is from base class";
    }
};
class B:public A{
    int b;
    public:
    void output(){
        cout<<"This is from derived class";
    }
};
int main(){
    A *bptr;
    B d;
    bptr = &d;
    bptr->output();
}
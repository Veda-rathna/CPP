#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A(){
        cout<<"I am a constructor\n";
    }
    void output(){
        cout<<"This is from the base class\n";
    }
};
class B: public A{
    int b;
    public:
    void putdata(){
        cout<<"This is from the derived class";
    }
};
int main(){
    B derived;
    derived.output();
    derived.putdata();
}
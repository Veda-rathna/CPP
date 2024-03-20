#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void output1(){
        cout<<"This is base class\n";
    }
};
class B:public A{
    int b;
    public:
    void output2(){
        cout<<"This is derived class 1\n";
    }
};
class C:public B{
    int c;
    public:
    void output3(){
        cout<<"This is a derived class 2\n";
    }
};
int main(){
    C x;
    x.output1();
    x.output2();
    x.output3();
    return 0;
}
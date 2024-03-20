#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void output1(){
        cout<<"This is from first base class\n";
    }
};
class B:public A{
    int b;
    public:
    void output2(){
        cout<<"This is from second base class\n";
    }
};
class C:public A{
    int c;
    public:
    void output3(){
        cout<<"This is from the derived class\n";
    }
};
int main(){
    B x;
    C y;
    x.output1();
    x.output2();
    y.output1();
    y.output3();
    return 0;
}
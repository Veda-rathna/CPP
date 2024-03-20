#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void output1(){
        cout<<"This is from first base class\n";
    }
};
class B{
    int b;
    public:
    void output2(){
        cout<<"This is from second base class\n";
    }
};
class C:public A,public B{
    int c;
    public:
    void output3(){
        cout<<"This is from the derived class\n";
    }
};
int main(){
    C x;
    x.output1();
    x.output2();
    x.output3();
}
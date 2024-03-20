#include<iostream>
using namespace std;
class A{                //base class 1
    int a;
    public:
    void output1(){
        cout<<"This is base class\n";
    }
}; 
class B:public A{      //derived class 1
    int b;
    public:
    void output2(){
        cout<<"This is derived class 1\n";
    }
};
class C{               //base class 2
    int c;
    public:
    void output3(){
        cout<<"This is a Base class 2\n";
    }
};
class D:public B, public C{
    int d;
    public:
    void output4(){
        cout<<"THis is the hybrid class";
    }
};
int main(){
    D x;
    x.output1();
    x.output2();
    x.output3();
    x.output4();
    return 0;
}
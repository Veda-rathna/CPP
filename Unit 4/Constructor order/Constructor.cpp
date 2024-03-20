#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"This is default constructor"<<endl;
    }
    A(int n, int m){
        cout<<"\n"<<n<<" "<<m<<" Base"<<endl;
    }
};
class B:public A{
    public:
    B(int n){
        cout<<n<<" Derived";
    }
};
int main(){
    B b(10);
    A a(10, 20);
}
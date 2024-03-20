#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void getnum(int n){
        a=n;
    }
    void output(){
        cout<<a<<endl;
    }
};
int main(){
    A a,*ptr;
    a.getnum(200);
    a.output();
    ptr=&a;
    ptr->output();
    ptr->getnum(500);
    ptr->output();
    return 0;
}
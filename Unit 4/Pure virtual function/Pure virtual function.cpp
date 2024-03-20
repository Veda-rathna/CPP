#include<iostream>
using namespace std;
class arithmetic{
    public:
    int a;
    int b;
    arithmetic(){
        cout<<"num1:";
        cin>>a;
        cout<<"num2:";
        cin>>b;
    }
    virtual int calculate()=0;  //pure virtual function
};
class sum:public arithmetic{
    public:
    int calculate(){
        return a+b;
    }
};
class diff:public arithmetic{
    public:
    int calculate(){
        return a-b;
    }
};
int main(){
    sum s;
    diff d;
    cout<<s.calculate()<<endl;
    cout<<d.calculate();
}

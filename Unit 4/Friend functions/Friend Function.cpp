#include<iostream>
using namespace std;
class integer{
    int num1,num2;
    public:
    integer(){
        num1=10;
        num2=20;
    }
    friend int mean(integer m);
};
int mean(integer m){
    return int(m.num1+m.num2) / 2.0;
}
int main(){
    integer c;
    cout<<"Mean Value:"<<mean(c);
    return 0;
}
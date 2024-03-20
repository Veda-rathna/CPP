#include<iostream>
using namespace std;
class Complex{
    float real;
    float img;
    public:
    Complex(){
        real=0;
        img=0;
    }
    void input(){
        cout<<"Enter the real part:";
        cin>>real;
        cout<<"Enter the imaginary part:";
        cin>>img;
    }
    Complex operator +(Complex c2){
        Complex temp;
        temp.real=real+c2.real;
        temp.img=img+c2.img;
        return temp;
    }
    void output(){
        if(img<0){
            cout<<"The sum of two complex numbers :"<<real<<img<<"i";
        }
        else{
            cout<<"The sum of two complex numbers :"<<real<<"+"<<img<<"i";
        }
    
}
};
int main(){
    Complex c1,c2,result;
    cout<<"Enter the first complex number:\n";
    c1.input();
    cout<<"Enter the second complex number:\n";
    c2.input();
    result=c1+c2;
    result.output();
    return 0;
}
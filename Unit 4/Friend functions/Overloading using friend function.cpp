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
    friend Complex operator +(Complex c1,Complex c2);
    void output(){
        if(img<0){
            cout<<"The sum of two complex numbers :"<<real<<img<<"i";
        }
        else{
            cout<<"The sum of two complex numbers :"<<real<<"+"<<img<<"i";
        }
    
}
};
Complex operator +(Complex c1, Complex c2){
        Complex temp;
        temp.real= c1.real +c2.real;
        temp.img= c1.img +c2.img;
        return temp;
}
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
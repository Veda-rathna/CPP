//Function Overloading
#include<iostream>
using namespace std;
class Calculate{
    public:
    int add(int a, int b){
        return a+b;
    }
    int add(int a, int b, int c){
        return a+b+c;
    }
};
int main(){
    Calculate C;
    cout<<"Sum of two numbers are "<<C.add(10,20)<<endl;
    cout<<"Sum of three numbers are "<<C.add(10,20,30);
    return 0;
}
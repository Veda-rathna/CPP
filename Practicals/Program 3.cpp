//Square root using Newton method
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double n, sqrt=10;
    cin>>n;
    for(int i=0;i<=30;i++){
        sqrt=sqrt-((sqrt*sqrt-n)/(2*sqrt));
    }
    cout<<fixed<<setprecision(3)<<sqrt;
}
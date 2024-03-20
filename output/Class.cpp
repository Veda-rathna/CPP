#include<iostream>
using namespace std;
int main(){
int num, i;
cin>>num;
for (i=2;i<=num-1;i++){
if (num%i==0){
cout<<"number is not a prime number";
break;}
if (i== num){
cout<<"The number is a prime number";}
}
return 0;
}
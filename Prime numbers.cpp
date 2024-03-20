#include<iostream>
using namespace std;
int main()
{
    int x,i;
    cin >> x;
    for(i=2;i<=x-1;i++)
    {
        if(x % i == 0){
            cout<< "The number is not a prime number";
            break;
        }
    }
if(i == x){
    cout<< "The number is a prime number";
}
}
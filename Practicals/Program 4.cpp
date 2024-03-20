//Max Array Value
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[N],maxValue;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    maxValue=arr[0];
    for(int i=0;i<N;i++){
        if(maxValue<=arr[i]){
            maxValue=arr[i];
        }
    }
    cout<<maxValue;
}
//Removing even integers from array
#include <iostream>
using namespace std;
int main() {
int N;
cin >> N;
int arr[N], M;
for(int index=0; index<N;index++){
cin >> arr[index];
}
int count = 0;
for(int index=0; index<N; index++){
if(arr[index] % 2 == 0){
count++;
} else {
arr[index-count] = arr[index];
}
}
M = N - count;
for(int index=0; index<M; index++){
cout << arr[index] << " ";
}
return 0;
}
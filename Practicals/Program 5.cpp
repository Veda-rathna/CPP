//Removing duplicate elements from array
#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N], M;

    for (int index = 0; index < N; index++) {
        cin >> arr[index];
    }

    M = 0;
    for (int index = 0; index < N; index++) {
        int k;
        for (k = 0; k < index; k++) {
            if (arr[index] == arr[k]) {
                break;
            }
        }
        if (index == k) {
            arr[M++] = arr[index];
        }
    }

    for (int index = 0; index < M; index++) {
        cout << arr[index] << " ";
    }

    return 0;
}

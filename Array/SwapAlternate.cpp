#include<iostream>
using namespace std;
int main() {
    int arr[] = {1,3,2,7,11,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i+=2) {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}
#include<iostream>
using namespace std;

void print(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int *arr, int n) {

    print(arr, n);

    if(n == 0|| n == 1) return;

    int index = 0;
    for(int i=1; i<n; i++) {
        if(arr[i] < arr[index]) {
            index = i;
        }
    }
    swap(arr[0], arr[index]);
    selectionSort(arr + 1, n - 1);
}

int main() {
    int arr[6] = {2,24,6,30,4,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    print(arr, n);
}
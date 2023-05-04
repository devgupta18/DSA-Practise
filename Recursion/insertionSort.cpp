#include<iostream>
using namespace std;

void print(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int arr[], int n) {
    if(n == 0|| n == 1) return;
    insertionSort(arr, n-1);

    int last = arr[n - 1];
    int j = n-2;

    while(arr[j] > last && j >= 0) {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;

}

int main() {
    int arr[6] = {2,24,6,30,4,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    print(arr, n);
}
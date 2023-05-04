#include<iostream>
using namespace std;

int peakIndex(int *arr, int s, int e) {
    int mid = s + (e - s)/2;

    if(s >= e) return mid;

    if(arr[mid] < arr[mid+1]) return peakIndex(arr, mid+1, e);
    else return peakIndex(arr, s, mid);
}

int main() {
    /* Initializing an integer array named `arr` with 7 elements and assigning the values 2, 4, 6, 7,
    10, 5, and 3 to the respective elements. */
    int arr[7] = {2,4,6,7,10,5,3};
    int start = 0, end = 6;

    int ans = peakIndex(arr, start, end);
    cout<<ans;
    return 0;
}
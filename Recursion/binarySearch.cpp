#include<iostream>
using namespace std;

bool binarySearch(int *arr, int start, int end, int k) {

    if(start > end) return false;

    int mid = start + (end - start)/2;
    if(arr[mid] == k) return true;
    else if(arr[mid] < k) return binarySearch(arr, mid+1, end, k);
    else return binarySearch(arr, start, mid-1, k);

}

int main() {
    int arr[6] = {2,4,6,10,14,16};
    int start = 0, end = 5, k=14;

    bool ans = binarySearch(arr, start, end, k);

    if(ans) cout<<"Element found"<<endl;
    else cout<<"Element not found"<<endl;
}
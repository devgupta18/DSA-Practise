#include<iostream>
using namespace std;

void merge(int *arr, int s, int e) {
    int mid = s + (e-s)/2;
    
    int len1 = mid - s +1;
    int len2 = e - mid;

    //Creating two new arrays dynamically
    int *first = new int[len1];
    int *second = new int[len2];

    //Copying the values in the new arrays formed
    int k = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[k++];
    }
    for(int i=0; i<len2; i++) {
        second[i] = arr[k++];
    }

    //Merge 2 Sorted Arrays
    int index1 = 0, index2 = 0, index3 = s;
    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[index3++] = first[index1++];
        }
        else {
            arr[index3++] = second[index2++];
        }
    }
    while(index1 < len1) {
        arr[index3++] = first[index1++];
    }
    while(index2 < len2) {
        arr[index3++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e) {
    if(s >= e) return;

    int mid = s + (e-s)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);

}

int main() {
    int arr[7] = {38,27,43,3,9,82,10};
    int n = 7;

    mergeSort(arr, 0, n-1);
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
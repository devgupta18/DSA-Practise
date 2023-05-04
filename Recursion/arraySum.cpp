#include<iostream>
using namespace std;

int sumArray(int *arr, int size) {
    
    if(size == 0) return 0;
    if(size == 1) return arr[0];

    int remPart = sumArray(arr+1, size-1);
    int sum = arr[0] + remPart;
    return sum;
}

int main() {
    int arr[6] = {1,2,3,4,5,6};
    int size = 6;
    
    int sum = sumArray(arr, size);
    cout<<"Sum of the array is "<<sum<<endl;

    return 0;
}
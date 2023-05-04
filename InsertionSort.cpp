#include<iostream>
using namespace std;
int main() {
    int arr[] = {10,1,7,4,8,2,11};
    int n = 7;
    cout<<"Array before sorted: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=1; i<n; i++) {
        int temp = arr[i];
        int j=i-1;
        for(; j>=0; j--) {
            if(arr[j] > temp) {
                arr[j+1] = arr[j];
            }
            else 
                break;
        }
        arr[j+1] = temp;
    }

    cout<<"Array after sorted: ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
#include<iostream>
using namespace std;

bool linearSearch(int *arr, int size, int k) {
    if(size == 0) return false;

    if(arr[0] == k) return true;
    else {
        int ans = linearSearch(arr+1, size-1, k);
        return ans;
    }
}

int main() {
    int arr[6] = {2,5,16,8,9,10};
    int size = 6, k = 8;

    bool ans = linearSearch(arr, size, k);
    cout<<"Element found: "<<ans<<endl;

    return 0;
}
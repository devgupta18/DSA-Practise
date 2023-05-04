#include<iostream>
using namespace std;
int main() {
    int n, i = 1;
    cin>>n;
    while(i <= n) {
        int space = 0;
        while(space < n-i) {
            cout<<" ";
            space++;
        }
        int j = 1;
        while(j <= i) {
            cout<<j;
            j++;
        }
        int k = i-1;
        while(k) {
            cout<<k;
            k--;
        }
        i++;
        cout<<endl;
    }
}
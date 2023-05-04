#include<iostream>
using namespace std;
int main() {
    int n, i = 1;
    cin>>n;
    while(i <= n) {
        int j = 1;
        while(j <= n-i+1) {
            cout<<j;
            j++;
        }
        int k = i-1;
        while(k) {
            cout<<"**";
            k--;
        }
        int l = n-i+1;
        while(l) {
            cout<<l;
            l--;
        }
        i++;
        cout<<endl;
    }
}